
@interface WFSetVariableAction : WFAction

- (id)accessibilityName;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (id)providedVariableNames;
- (void)runWithInput:(id)arg1 error:(id*)arg2;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)variableName;

@end
