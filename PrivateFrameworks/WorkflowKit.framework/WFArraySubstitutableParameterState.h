
@interface WFArraySubstitutableParameterState : WFVariableSubstitutableParameterState {
    NSUUID * _identity;
}

@property (nonatomic, readonly) NSUUID *identity;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (void).cxx_destruct;
- (id)containedVariables;
- (void)getObjectRepresentationOfVariableWithContext:(id)arg1 processingValueClass:(Class)arg2 valueHandler:(id /* block */)arg3;
- (id)identity;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithValues:(id)arg1;
- (id)initWithValues:(id)arg1 identity:(id)arg2;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)values;

@end
