
@protocol TSCECalculationEngineRegistration <TSKModel>

@required

- (<TSCEFormulaOwning> *)formulaOwner;
- (struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; })formulaOwnerUID;
- (TSPObject<TSCECalculationEngineRegistration> *)objectToArchiveInDependencyTracker;
- (unsigned short)ownerKind;
- (bool)registerLast;
- (void)registerWithCalcEngineForDocumentLoad:(TSCECalculationEngine *)arg1 ownerKind:(unsigned short)arg2;
- (void)unregisterFromCalcEngine:(TSCECalculationEngine *)arg1;

@end
