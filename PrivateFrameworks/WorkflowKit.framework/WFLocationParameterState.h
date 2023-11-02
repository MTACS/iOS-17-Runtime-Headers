
@interface WFLocationParameterState : WFVariableSubstitutableParameterState

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (void)getContentCollectionWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getContentItemFromValue:(id)arg1 withContext:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithValue:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;

@end
