
@interface WFChooseFromMenuItemParameterState : WFVariableStringParameterState {
    WFVariableString * _subtitle;
    NSArray * _synonyms;
}

@property (nonatomic, readonly) WFVariableString *subtitle;
@property (nonatomic, readonly) NSArray *synonyms;

+ (Class)processingValueClass;

- (void).cxx_destruct;
- (id)containedVariables;
- (unsigned long long)hash;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithVariableString:(id)arg1 synonyms:(id)arg2 subtitle:(id)arg3;
- (id)initWithVariableString:(id)arg1 userInputInsertionIndex:(long long)arg2;
- (id)initWithVariableString:(id)arg1 userInputInsertionIndex:(long long)arg2 synonyms:(id)arg3 subtitle:(id)arg4;
- (bool)isEqual:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)serializedRepresentation;
- (bool)shouldSerializeAsPlainString;
- (id)subtitle;
- (id)synonyms;

@end
