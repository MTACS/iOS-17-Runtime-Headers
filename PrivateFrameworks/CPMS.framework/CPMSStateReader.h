
@interface CPMSStateReader : NSObject

+ (id)copyCPMSControlStateSnapshots;
+ (id)copyCPMSPmaxState:(int*)arg1;
+ (id)getCPMSControlStateSnapshotDictionary:(struct CPMSPPMControlStateSnapshot { unsigned long long x1; float x2[5]; int x3; float x4; float x5; float x6; float x7; float x8; struct CPMSPPMPowerBudget { unsigned char x_9_1_1; unsigned char x_9_1_2; struct CPMSPPMPowerLevelScalar { BOOL x_3_2_1; unsigned int x_3_2_2; } x_9_1_3[3]; } x9[20]; struct CPMSPPMPowerBudget { unsigned char x_10_1_1; unsigned char x_10_1_2; struct CPMSPPMPowerLevelScalar { BOOL x_3_2_1; unsigned int x_3_2_2; } x_10_1_3[3]; } x10[20]; unsigned int x11[8]; unsigned char x12; int x13[3]; unsigned int x14; unsigned char x15; unsigned int x16; bool x17; unsigned int x18[3]; float x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; float x24[6]; int x25; int x26; int x27; bool x28; }*)arg1;
+ (id)getPowerBudgetDictionary:(struct CPMSPPMPowerBudget { unsigned char x1; unsigned char x2; struct CPMSPPMPowerLevelScalar { BOOL x_3_1_1; unsigned int x_3_1_2; } x3[3]; }*)arg1;
+ (id)log;
+ (id)timescaleDisplayName:(BOOL)arg1;

@end
