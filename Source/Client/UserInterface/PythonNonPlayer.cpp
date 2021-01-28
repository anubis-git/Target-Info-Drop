// Search for:
void CPythonNonPlayer::GetMatchableMobList(int iLevel, int iInterval, TMobTableList * pMobTableList)

// Add (Under & Whole function):
#ifdef ENABLE_SEND_TARGET_INFO
DWORD CPythonNonPlayer::GetMonsterMaxHP(DWORD dwVnum)
{
	const CPythonNonPlayer::TMobTable* c_pTable = GetTable(dwVnum);
	if (!c_pTable)
	{
		DWORD dwMaxHP = 0;
		return dwMaxHP;
	}

	return c_pTable->dwMaxHP;
}

DWORD CPythonNonPlayer::GetMonsterRaceFlag(DWORD dwVnum)
{
	const CPythonNonPlayer::TMobTable* c_pTable = GetTable(dwVnum);
	if (!c_pTable)
	{
		DWORD dwRaceFlag = 0;
		return dwRaceFlag;
	}

	return c_pTable->dwRaceFlag;
}

DWORD CPythonNonPlayer::GetMonsterLevel(DWORD dwVnum)
{
	const CPythonNonPlayer::TMobTable* c_pTable = GetTable(dwVnum);
	if (!c_pTable)
	{
		DWORD level = 0;
		return level;
	}

	return c_pTable->bLevel;
}

DWORD CPythonNonPlayer::GetMonsterDamage1(DWORD dwVnum)
{
	const CPythonNonPlayer::TMobTable* c_pTable = GetTable(dwVnum);
	if (!c_pTable)
	{
		DWORD range = 0;
		return range;
	}

	return c_pTable->dwDamageRange[0];
}

DWORD CPythonNonPlayer::GetMonsterDamage2(DWORD dwVnum)
{
	const CPythonNonPlayer::TMobTable* c_pTable = GetTable(dwVnum);
	if (!c_pTable)
	{
		DWORD range = 0;
		return range;
	}

	return c_pTable->dwDamageRange[1];
}

DWORD CPythonNonPlayer::GetMonsterExp(DWORD dwVnum)
{
	const CPythonNonPlayer::TMobTable* c_pTable = GetTable(dwVnum);
	if (!c_pTable)
	{
		DWORD dwExp = 0;
		return dwExp;
	}

	return c_pTable->dwExp;
}

float CPythonNonPlayer::GetMonsterDamageMultiply(DWORD dwVnum)
{
	const CPythonNonPlayer::TMobTable* c_pTable = GetTable(dwVnum);
	if (!c_pTable)
	{
		DWORD fDamMultiply = 0;
		return fDamMultiply;
	}

	return c_pTable->fDamMultiply;
}

DWORD CPythonNonPlayer::GetMonsterST(DWORD dwVnum)
{
	const CPythonNonPlayer::TMobTable* c_pTable = GetTable(dwVnum);
	if (!c_pTable)
	{
		DWORD bStr = 0;
		return bStr;
	}

	return c_pTable->bStr;
}

DWORD CPythonNonPlayer::GetMonsterDX(DWORD dwVnum)
{
	const CPythonNonPlayer::TMobTable* c_pTable = GetTable(dwVnum);
	if (!c_pTable)
	{
		DWORD bDex = 0;
		return bDex;
	}

	return c_pTable->bDex;
}

bool CPythonNonPlayer::IsMonsterStone(DWORD dwVnum)
{
	const CPythonNonPlayer::TMobTable* c_pTable = GetTable(dwVnum);
	if (c_pTable && c_pTable->bType == 2)
		return true;

	return false;
}

BYTE CPythonNonPlayer::GetMonsterRegenCycle(DWORD dwVnum)
{
	const CPythonNonPlayer::TMobTable* c_pTable = GetTable(dwVnum);
	if (!c_pTable)
		return 0;

	return c_pTable->bRegenCycle;
}

BYTE CPythonNonPlayer::GetMonsterRegenPercent(DWORD dwVnum)
{
	const CPythonNonPlayer::TMobTable* c_pTable = GetTable(dwVnum);
	if (!c_pTable)
		return 0;

	return c_pTable->bRegenPercent;
}

DWORD CPythonNonPlayer::GetMonsterGoldMin(DWORD dwVnum)
{
	const CPythonNonPlayer::TMobTable* c_pTable = GetTable(dwVnum);
	if (!c_pTable)
		return 0;

	return c_pTable->dwGoldMin;
}

DWORD CPythonNonPlayer::GetMonsterGoldMax(DWORD dwVnum)
{
	const CPythonNonPlayer::TMobTable* c_pTable = GetTable(dwVnum);
	if (!c_pTable)
		return 0;

	return c_pTable->dwGoldMax;
}

DWORD CPythonNonPlayer::GetMonsterResist(DWORD dwVnum, BYTE bResistNum)
{
	const CPythonNonPlayer::TMobTable* c_pTable = GetTable(dwVnum);
	if (!c_pTable)
		return 0;

	if (bResistNum >= MOB_RESISTS_MAX_NUM)
		return 0;

	return c_pTable->cResists[bResistNum];
}
#endif
