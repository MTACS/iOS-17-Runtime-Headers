
@interface WFGetVariableAction : WFAction

- (id)accessibilityName;
- (id)currentVariable;
- (id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (void)runWithInput:(id)arg1 error:(id*)arg2;
- (bool)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;

@end
