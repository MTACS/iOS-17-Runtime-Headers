
@interface WFHomeAccessoryConditionalSubjectState : WFConditionalSubjectParameterState {
    WFHMCharacteristicSubstitutableState * _characteristicSubstitutableState;
    NSFormatter * _characteristicValueFormatter;
    bool  _negatesValue;
    NSDictionary * _serializedWFHMCharacteristicSubstitutableState;
    NSDictionary * _serializedWFHMServiceParameter;
    WFHMServiceParameterState * _serviceParameterState;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (nonatomic, retain) WFHMCharacteristicSubstitutableState *characteristicSubstitutableState;
@property (nonatomic, retain) NSFormatter *characteristicValueFormatter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) bool negatesValue;
@property (nonatomic, retain) NSDictionary *serializedWFHMCharacteristicSubstitutableState;
@property (nonatomic, retain) NSDictionary *serializedWFHMServiceParameter;
@property (nonatomic, readonly) HMService *service;
@property (nonatomic, retain) WFHMServiceParameterState *serviceParameterState;

+ (id)subjectType;

- (void).cxx_destruct;
- (id)characteristic;
- (id)characteristicSubstitutableState;
- (id)characteristicValueFormatter;
- (long long)contentType;
- (void)getContentWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)home;
- (id)homeIdentifier;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithSerializedWFHMServiceParameter:(id)arg1 serializedWFHMCharacteristicSubstitutableState:(id)arg2 negatesValue:(bool)arg3;
- (id)initWithService:(id)arg1 characteristic:(id)arg2 homeIdentifier:(id)arg3 negatesValue:(bool)arg4;
- (bool)isEnumeration;
- (bool)isEqual:(id)arg1;
- (id)localizedLabelForEnumerationPossibleState:(id)arg1;
- (id)maximumLength;
- (id)maximumValue;
- (id)minimumValue;
- (bool)negatesValue;
- (id)serializedRepresentation;
- (id)serializedWFHMCharacteristicSubstitutableState;
- (id)serializedWFHMServiceParameter;
- (id)service;
- (id)serviceParameterState;
- (void)setCharacteristicSubstitutableState:(id)arg1;
- (void)setCharacteristicValueFormatter:(id)arg1;
- (void)setSerializedWFHMCharacteristicSubstitutableState:(id)arg1;
- (void)setSerializedWFHMServiceParameter:(id)arg1;
- (void)setServiceParameterState:(id)arg1;
- (id)stepValue;
- (id)unit;
- (id)unitType;

@end
