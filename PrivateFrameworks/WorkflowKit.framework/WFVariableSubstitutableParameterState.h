
@interface WFVariableSubstitutableParameterState : NSObject <WFVariableSupportingParameterState> {
    id  _value;
    WFVariable * _variable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) WFVariable *variable;

+ (Class)processingValueClass;
+ (id)processingValueClasses;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;

- (void).cxx_destruct;
- (id)containedVariables;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)getObjectRepresentationOfVariableWithContext:(id)arg1 processingValueClass:(Class)arg2 valueHandler:(id /* block */)arg3;
- (unsigned long long)hash;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithValue:(id)arg1;
- (id)initWithVariable:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)serializedRepresentation;
- (bool)stateIsEquivalent:(id)arg1;
- (id)value;
- (id)variable;

@end
