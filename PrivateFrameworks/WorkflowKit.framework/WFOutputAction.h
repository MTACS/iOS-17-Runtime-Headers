
@interface WFOutputAction : WFAction

- (void)finishRunningWithOutput:(id)arg1 error:(id)arg2;
- (bool)getInputContentFromVariablesInParameterState:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)hasOutputFallback;
- (id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2;
- (unsigned long long)outputBehavior;
- (id)outputContentClasses;
- (bool)outputSurfaceIsAvailable;
- (id)outputVariableString;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)runSource;
- (id)runningContext;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;

@end
