
@interface WFVariableStringParameterState : NSObject <WFVariableSupportingParameterState> {
    long long  _userInputInsertionIndex;
    WFVariableString * _variableString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldSerializeAsPlainString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long userInputInsertionIndex;
@property (nonatomic, readonly) WFVariable *variable;
@property (nonatomic, readonly, copy) WFVariableString *variableString;

+ (Class)processingValueClass;

- (void).cxx_destruct;
- (id)containedVariables;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithVariable:(id)arg1;
- (id)initWithVariableString:(id)arg1;
- (id)initWithVariableString:(id)arg1 userInputInsertionIndex:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)parameterStateByRemovingAskVariablesAndPopulatingInsertionIndex;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)serializedRepresentation;
- (bool)shouldSerializeAsPlainString;
- (id)stateByReplacingVariable:(id)arg1 withVariable:(id)arg2;
- (long long)userInputInsertionIndex;
- (id)variableString;

@end
