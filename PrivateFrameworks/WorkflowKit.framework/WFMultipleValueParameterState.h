
@interface WFMultipleValueParameterState : WFVariableSubstitutableParameterState

@property (nonatomic, readonly) NSArray *parameterStates;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (id)containedVariables;
- (void)finishProcessingWithContent:(id)arg1 error:(id)arg2 forParameterStateClass:(Class)arg3 valueHandler:(id /* block */)arg4;
- (id)initWithParameterStates:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)parameterStates;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)stateByAppendingValue:(id)arg1;
- (id)stateByInsertingValueAtIndex:(unsigned long long)arg1 withValue:(id)arg2;
- (id)stateByRemovingValueAtIndex:(unsigned long long)arg1;
- (id)stateByReplacingValueAtIndex:(unsigned long long)arg1 withValue:(id)arg2;
- (id)stateByReplacingValueAtIndexes:(id)arg1 withValues:(id)arg2;
- (id)stateByReplacingVariable:(id)arg1 withVariable:(id)arg2;
- (id)stateByTogglingValue:(id)arg1;

@end
