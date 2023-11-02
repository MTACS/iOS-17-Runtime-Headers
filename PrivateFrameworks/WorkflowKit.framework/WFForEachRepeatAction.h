
@interface WFForEachRepeatAction : WFRepeatAction {
    unsigned long long  _numberOfLoops;
}

- (id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2;
- (id)itemVariableName;
- (id)itemVariableNameWithScopeLevel:(unsigned long long)arg1;
- (unsigned long long)numberOfLoops;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (id)providedVariableNames;
- (id)repeatCollectionWithVariableSource:(id)arg1;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (void)runWithInput:(id)arg1 error:(id*)arg2;
- (void)setRepeatCollection:(id)arg1 withVariableSource:(id)arg2;
- (bool)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;
- (bool)shouldRepeatWithVariableSource:(id)arg1;

@end
