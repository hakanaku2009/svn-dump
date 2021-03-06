void UpdatePlayerPos(float x, float y, float z);
void AttackTarget();
void AddMonster(DWORD ID, float X, float Z);
void UpdateMonster(DWORD ID, float X, float Z);
void DeleteMonster(DWORD ID);
void TargetNextMonster();
float Pythagorean(float X1, float Z1, float X2, float Z2);
void PickItem(DWORD ItemID);
void TargetMonster(DWORD ID);
void SetPlayerID(DWORD ID);
void SetHuntingArea(DWORD Radius);
void CheckMonster(DWORD ID, float X, float Z);
void ActivateBot();
void SellItem(BYTE Page, BYTE Place, BYTE Count);
void IncreaseKillcount();
void RepairEquipment();
void AddSkill(BYTE ID, BYTE Level, BYTE Use);
void BotThread();
void UseBuff(BYTE Use, DWORD myTarget);
void UseAttackSkill(BYTE Use, DWORD myTarget);
void UpdateSkillUse(BYTE ID);
void IsUsingSkill(BYTE Use, bool IsUsing);

class Creature
{
	public:
		DWORD ID;
		float X;
		float Y;
		float Z;
};

class Skill
{
	public:
		BYTE ID;
		BYTE Level;
		BYTE Use;
		BYTE Type;
		bool IsUsed;
		DWORD LastUsage;
		DWORD Cooldown;
		bool CastingSkill;
};