
@interface WFHMCharacteristicSubstitutableState : WFVariableSubstitutableParameterState {
    HMCharacteristic * _characteristic;
    NSString * _homeIdentifier;
    NSDictionary * _serializedCharacteristic;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (nonatomic, readonly) NSString *homeIdentifier;
@property (nonatomic, retain) NSDictionary *serializedCharacteristic;

- (void).cxx_destruct;
- (id)characteristic;
- (id)containedVariables;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)homeIdentifier;
- (id)initWithCharacteristic:(id)arg1 homeIdentifier:(id)arg2;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)serializedCharacteristic;
- (id)serializedRepresentation;
- (void)setSerializedCharacteristic:(id)arg1;

@end
