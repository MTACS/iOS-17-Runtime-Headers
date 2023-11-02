
@interface WFRepeatAction : WFControlFlowAction {
    long long  _currentIndex;
}

@property (nonatomic, readonly) long long currentIndex;
@property (nonatomic, readonly) unsigned long long numberOfLoops;

- (id)createAccompanyingActions;
- (long long)currentIndex;
- (id)defaultOutputName;
- (bool)displaysParameterSummary;
- (bool)ignoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2;
- (id)indexVariableName;
- (id)indexVariableNameWithScopeLevel:(unsigned long long)arg1;
- (id)itemVariableNameWithScopeLevel:(unsigned long long)arg1;
- (id)name;
- (unsigned long long)numberOfLoops;
- (bool)outputsMultipleItems;
- (id)providedVariableNames;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (void)runWithInput:(id)arg1 error:(id*)arg2;
- (bool)shouldRepeatWithVariableSource:(id)arg1;

@end
