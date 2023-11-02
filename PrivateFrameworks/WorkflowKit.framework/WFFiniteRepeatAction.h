
@interface WFFiniteRepeatAction : WFRepeatAction {
    unsigned long long  _numberOfLoops;
}

- (unsigned long long)numberOfLoops;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (id)repeatCountVariableName;
- (long long)repeatCountWithVariableSource:(id)arg1;
- (id)repeatInputVariableName;
- (id)repeatInputWithVariableSource:(id)arg1;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (void)runWithInput:(id)arg1 error:(id*)arg2;
- (void)runWithInput:(id)arg1 userInterface:(id)arg2 runningDelegate:(id)arg3 variableSource:(id)arg4 workQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)setRepeatCount:(long long)arg1 withVariableSource:(id)arg2;
- (void)setRepeatInput:(id)arg1 withVariableSource:(id)arg2;
- (bool)shouldRepeatWithVariableSource:(id)arg1;

@end
