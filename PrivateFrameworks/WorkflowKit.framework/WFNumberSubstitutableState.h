
@interface WFNumberSubstitutableState : WFVariableSubstitutableParameterState

@property (nonatomic, readonly) NSNumber *number;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromNumber:(id)arg1;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (id)initWithNumber:(id)arg1;
- (id)number;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;

@end
