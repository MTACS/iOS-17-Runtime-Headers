
@interface WFExitAction : WFAction

- (bool)legacyBehaviorIgnoresOutputFromAction:(id)arg1 inWorkflow:(id)arg2;
- (void)runWithInput:(id)arg1 error:(id*)arg2;

@end
