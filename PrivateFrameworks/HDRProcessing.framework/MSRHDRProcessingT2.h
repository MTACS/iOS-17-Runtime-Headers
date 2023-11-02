
@interface MSRHDRProcessingT2 : MSRHDRProcessingT1

- (void)dumpMmrConfig;
- (id)init;
- (unsigned int)polynomialTableScale;
- (void)setupHardwareConfigUnit;
- (void)setupMSRMappingTableWithMetadata:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13[3]; unsigned int x14[3][18]; unsigned int x15[1][1][3][9]; unsigned int x16[1][1][3][9]; unsigned int x17[1][1][3][9]; unsigned int x18[1][1][3][9]; unsigned int x19[1][1][3][9]; int x20[1][1][3][9][3]; unsigned int x21[1][1][3][9][3]; long long x22[1][1][3][9][6]; float x23[1][1][3][9][6]; unsigned int x24[1][1][3][9]; int x25[1][1][3][9]; unsigned int x26[1][1][3][9]; int x27[1][1][3][9][4][7]; unsigned int x28[1][1][3][9][4][7]; long long x29[1][1][3][9][4][7]; float x30[1][1][3][9][4][7]; int x31[1][1][3][9][6]; unsigned int x32[1][1][3][9][6]; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36[9]; unsigned int x37[1][1][9][3]; unsigned int x38[1][1][9][3]; unsigned int x39[1][1][9][3]; long long x40[1][1][9][3]; unsigned int x41[1][1][9][3]; unsigned int x42[1][1][9][3]; }*)arg1;
- (void)setupMSRPolynomialTableForHDR10;
- (void)updateMmrReshapeChromaForComponent:(unsigned short)arg1 mmrReshapeChroma:(int)arg2;
- (void)updateMmrTableForComponent:(unsigned short)arg1 mmrClipValMin:(unsigned short*)arg2 mmrClipValMax:(unsigned short*)arg3 mmrCoeff:(float*)arg4;
- (void)updatePolynomialTablesForComponent:(unsigned short*)arg1 Component:(unsigned short)arg2 TableSize:(unsigned long long)arg3;

@end
