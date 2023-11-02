
@interface WFDictionaryParameterKeyValuePair : NSObject <NSCopying, WFVariableSerialization> {
    NSUUID * _identity;
    WFVariableString * _key;
    WFPropertyListParameterValue * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identity;
@property (nonatomic, readonly) WFVariableString *key;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFPropertyListParameterValue *value;

- (void).cxx_destruct;
- (id)containedVariables;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)getProcessedPair:(id /* block */)arg1 context:(id)arg2 userInputRequiredHandler:(id /* block */)arg3;
- (id)identity;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (id)initWithKey:(id)arg1 value:(id)arg2 identity:(id)arg3;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)serializedRepresentation;
- (id)value;

@end
