
@interface WFAppendVariableAction : WFAction

- (id)accessibilityName;
- (id)inheritedOutputContentClassesInWorkflow:(id)arg1 context:(id)arg2;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (id)providedVariableNames;
- (void)runWithInput:(id)arg1 error:(id*)arg2;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (bool)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;
- (id)variableName;

@end
