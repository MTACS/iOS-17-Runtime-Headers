
@interface WFMediaItemState : WFVariableSubstitutableParameterState

+ (id)processingValueClasses;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (id)initWithMediaType:(id)arg1 persistentID:(id)arg2;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;

@end
