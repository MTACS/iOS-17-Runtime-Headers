
@interface WFNSUnitSubstitutableState : WFVariableSubstitutableParameterState

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;

@end
