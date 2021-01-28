// Search for:
PyObject * nonplayerLoadNonPlayerData(PyObject * poSelf, PyObject * poArgs)

// Add (Under & Whole function):
#ifdef ENABLE_SEND_TARGET_INFO
PyObject* nonplayerGetMonsterMaxHP(PyObject* poSelf, PyObject* poArgs)
{
	int iVnum;
	if (!PyTuple_GetInteger(poArgs, 0, &iVnum))
		return Py_BuildException();

	CPythonNonPlayer& rkNonPlayer = CPythonNonPlayer::Instance();

	return Py_BuildValue("i", rkNonPlayer.GetMonsterMaxHP(iVnum));
}

PyObject* nonplayerGetRaceNumByVID(PyObject* poSelf, PyObject* poArgs)
{
	int iVID;
	if (!PyTuple_GetInteger(poArgs, 0, &iVID))
		return Py_BuildException();

	CInstanceBase* pInstance = CPythonCharacterManager::Instance().GetInstancePtr(iVID);

	if (!pInstance)
		return Py_BuildValue("i", -1);

	const CPythonNonPlayer::TMobTable* pMobTable = CPythonNonPlayer::Instance().GetTable(pInstance->GetVirtualNumber());

	if (!pMobTable)
		return Py_BuildValue("i", -1);

	return Py_BuildValue("i", pMobTable->dwVnum);
}

PyObject* nonplayerGetMonsterRaceFlag(PyObject* poSelf, PyObject* poArgs)
{
	int iVnum;
	if (!PyTuple_GetInteger(poArgs, 0, &iVnum))
		return Py_BuildException();

	CPythonNonPlayer& rkNonPlayer = CPythonNonPlayer::Instance();

	return Py_BuildValue("i", rkNonPlayer.GetMonsterRaceFlag(iVnum));
}

PyObject* nonplayerIsMonsterRaceFlag(PyObject* poSelf, PyObject* poArgs)
{
	int iVnum;
	if (!PyTuple_GetInteger(poArgs, 0, &iVnum))
		return Py_BuildException();

	int iFlag;
	if (!PyTuple_GetInteger(poArgs, 1, &iFlag))
		return Py_BuildException();

	CPythonNonPlayer& rkNonPlayer = CPythonNonPlayer::Instance();

	return Py_BuildValue("i", rkNonPlayer.IsMonsterRaceFlag(iVnum, iFlag) ? 1 : 0);
}

PyObject* nonplayerGetMonsterLevel(PyObject* poSelf, PyObject* poArgs)
{
	int iVnum;
	if (!PyTuple_GetInteger(poArgs, 0, &iVnum))
		return Py_BuildException();

	CPythonNonPlayer& rkNonPlayer = CPythonNonPlayer::Instance();

	return Py_BuildValue("i", rkNonPlayer.GetMonsterLevel(iVnum));
}

PyObject* nonplayerGetMonsterDamage(PyObject* poSelf, PyObject* poArgs)
{
	int iVnum;
	if (!PyTuple_GetInteger(poArgs, 0, &iVnum))
		return Py_BuildException();

	CPythonNonPlayer& rkNonPlayer = CPythonNonPlayer::Instance();

	DWORD dwDmg1 = rkNonPlayer.GetMonsterDamage1(iVnum);
	DWORD dwDmg2 = rkNonPlayer.GetMonsterDamage2(iVnum);

	return Py_BuildValue("ii", dwDmg1, dwDmg2);
}

PyObject* nonplayerGetMonsterExp(PyObject* poSelf, PyObject* poArgs)
{
	int iVnum;
	if (!PyTuple_GetInteger(poArgs, 0, &iVnum))
		return Py_BuildException();

	CPythonNonPlayer& rkNonPlayer = CPythonNonPlayer::Instance();

	return Py_BuildValue("i", rkNonPlayer.GetMonsterExp(iVnum));
}

PyObject* nonplayerGetMonsterDamageMultiply(PyObject* poSelf, PyObject* poArgs)
{
	int iVnum;
	if (!PyTuple_GetInteger(poArgs, 0, &iVnum))
		return Py_BuildException();

	CPythonNonPlayer& rkNonPlayer = CPythonNonPlayer::Instance();

	return Py_BuildValue("f", rkNonPlayer.GetMonsterDamageMultiply(iVnum));
}

PyObject* nonplayerGetMonsterST(PyObject* poSelf, PyObject* poArgs)
{
	int iVnum;
	if (!PyTuple_GetInteger(poArgs, 0, &iVnum))
		return Py_BuildException();

	CPythonNonPlayer& rkNonPlayer = CPythonNonPlayer::Instance();

	return Py_BuildValue("i", rkNonPlayer.GetMonsterST(iVnum));
}

PyObject* nonplayerGetMonsterDX(PyObject* poSelf, PyObject* poArgs)
{
	int iVnum;
	if (!PyTuple_GetInteger(poArgs, 0, &iVnum))
		return Py_BuildException();

	CPythonNonPlayer& rkNonPlayer = CPythonNonPlayer::Instance();

	return Py_BuildValue("i", rkNonPlayer.GetMonsterDX(iVnum));
}

PyObject* nonplayerIsMonsterStone(PyObject* poSelf, PyObject* poArgs)
{
	int iVnum;
	if (!PyTuple_GetInteger(poArgs, 0, &iVnum))
		return Py_BuildException();

	CPythonNonPlayer& rkNonPlayer = CPythonNonPlayer::Instance();

	return Py_BuildValue("i", rkNonPlayer.IsMonsterStone(iVnum) ? 1 : 0);
}

PyObject* nonplayerGetMonsterRegenCycle(PyObject* poSelf, PyObject* poArgs)
{
	int iVnum;
	if (!PyTuple_GetInteger(poArgs, 0, &iVnum))
		return Py_BuildException();

	CPythonNonPlayer& rkNonPlayer = CPythonNonPlayer::Instance();

	return Py_BuildValue("i", rkNonPlayer.GetMonsterRegenCycle(iVnum));
}

PyObject* nonplayerGetMonsterRegenPercent(PyObject* poSelf, PyObject* poArgs)
{
	int iVnum;
	if (!PyTuple_GetInteger(poArgs, 0, &iVnum))
		return Py_BuildException();

	CPythonNonPlayer& rkNonPlayer = CPythonNonPlayer::Instance();

	return Py_BuildValue("i", rkNonPlayer.GetMonsterRegenPercent(iVnum));
}

PyObject* nonplayerGetMonsterGoldMin(PyObject* poSelf, PyObject* poArgs)
{
	int iVnum;
	if (!PyTuple_GetInteger(poArgs, 0, &iVnum))
		return Py_BuildException();

	CPythonNonPlayer& rkNonPlayer = CPythonNonPlayer::Instance();

	return Py_BuildValue("i", rkNonPlayer.GetMonsterGoldMin(iVnum));
}

PyObject* nonplayerGetMonsterGoldMax(PyObject* poSelf, PyObject* poArgs)
{
	int iVnum;
	if (!PyTuple_GetInteger(poArgs, 0, &iVnum))
		return Py_BuildException();

	CPythonNonPlayer& rkNonPlayer = CPythonNonPlayer::Instance();

	return Py_BuildValue("i", rkNonPlayer.GetMonsterGoldMax(iVnum));
}

PyObject* nonplayerGetMonsterResist(PyObject* poSelf, PyObject* poArgs)
{
	int iVnum;
	if (!PyTuple_GetInteger(poArgs, 0, &iVnum))
		return Py_BuildException();

	BYTE bResistNum;
	if (!PyTuple_GetInteger(poArgs, 1, &bResistNum))
		return Py_BuildException();

	CPythonNonPlayer& rkNonPlayer = CPythonNonPlayer::Instance();

	return Py_BuildValue("i", rkNonPlayer.GetMonsterResist(iVnum, bResistNum));
}
#endif

// Search for:
		{ "GetMonsterName",				nonplayerGetMonsterName,			METH_VARARGS },

// Add (Under):
#ifdef ENABLE_SEND_TARGET_INFO
		{ "GetRaceNumByVID", nonplayerGetRaceNumByVID, METH_VARARGS },
		{ "GetMonsterMaxHP", nonplayerGetMonsterMaxHP, METH_VARARGS },
		{ "GetMonsterRaceFlag", nonplayerGetMonsterRaceFlag, METH_VARARGS },
		{ "IsMonsterRaceFlag", nonplayerIsMonsterRaceFlag, METH_VARARGS },
		{ "GetMonsterLevel", nonplayerGetMonsterLevel, METH_VARARGS },
		{ "GetMonsterDamage", nonplayerGetMonsterDamage, METH_VARARGS },
		{ "GetMonsterExp", nonplayerGetMonsterExp, METH_VARARGS },
		{ "GetMonsterDamageMultiply", nonplayerGetMonsterDamageMultiply, METH_VARARGS },
		{ "GetMonsterST", nonplayerGetMonsterST, METH_VARARGS },
		{ "GetMonsterDX", nonplayerGetMonsterDX, METH_VARARGS },
		{ "IsMonsterStone", nonplayerIsMonsterStone, METH_VARARGS },
		{ "GetMonsterRegenCycle", nonplayerGetMonsterRegenCycle, METH_VARARGS },
		{ "GetMonsterRegenPercent", nonplayerGetMonsterRegenPercent, METH_VARARGS },
		{ "GetMonsterGoldMin", nonplayerGetMonsterGoldMin, METH_VARARGS },
		{ "GetMonsterGoldMax", nonplayerGetMonsterGoldMax, METH_VARARGS },
		{ "GetMonsterResist", nonplayerGetMonsterResist, METH_VARARGS },
#endif
