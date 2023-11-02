
@protocol TSCEFormulaOwning <NSObject>

@required

- (long long)evaluationMode;
- (void)invalidateForCalcEngine:(TSCECalculationEngine *)arg1;
- (<TSCEReferenceResolving> *)linkedResolver;
- (unsigned short)ownerKind;
- (struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })ownerUID;
- (void)writeResultsForCalcEngine:(TSCECalculationEngine *)arg1;

@optional

- (struct TSCERecalculationState { unsigned char x1; })evaluateFormulaAt:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1 withCalcEngine:(TSCECalculationEngine *)arg2 recalcOptions:(struct TSCERecalculationState { unsigned char x1; })arg3;
- (struct TSCERecalculationState { unsigned char x1; })multiEvaluateFormulasAt:(const void*)arg1 withCalcEngine:(TSCECalculationEngine *)arg2 recalcOptions:(struct TSCERecalculationState { unsigned char x1; })arg3;

@end
