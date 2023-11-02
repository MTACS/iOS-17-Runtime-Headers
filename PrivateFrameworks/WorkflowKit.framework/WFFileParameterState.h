
@interface WFFileParameterState : WFVariableSubstitutableParameterState

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (id)processForMultipleStateWithContext:(id)arg1 error:(id*)arg2 resolution:(long long*)arg3;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (void)requestAccessToFileWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)resolveFileURLWithContext:(id)arg1 error:(id*)arg2;

@end
