// Search for:
		const char*			GetMonsterName(DWORD dwVnum);

// Add (Under):
#ifdef ENABLE_SEND_TARGET_INFO
	DWORD GetMonsterMaxHP(DWORD dwVnum);
	DWORD GetMonsterRaceFlag(DWORD dwVnum);
	bool IsMonsterRaceFlag(DWORD dwVnum, DWORD dwFlag);
	DWORD GetMonsterLevel(DWORD dwVnum);
	DWORD GetMonsterDamage1(DWORD dwVnum);
	DWORD GetMonsterDamage2(DWORD dwVnum);
	DWORD GetMonsterExp(DWORD dwVnum);
	float GetMonsterDamageMultiply(DWORD dwVnum);
	DWORD GetMonsterST(DWORD dwVnum);
	DWORD GetMonsterDX(DWORD dwVnum);
	bool IsMonsterStone(DWORD dwVnum);
	BYTE GetMonsterRegenCycle(DWORD dwVnum);
	BYTE GetMonsterRegenPercent(DWORD dwVnum);
	DWORD GetMonsterGoldMin(DWORD dwVnum);
	DWORD GetMonsterGoldMax(DWORD dwVnum);
	DWORD GetMonsterResist(DWORD dwVnum, BYTE bResistNum);
#endif
