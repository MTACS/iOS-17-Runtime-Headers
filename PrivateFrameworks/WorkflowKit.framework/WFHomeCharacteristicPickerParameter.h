
@interface WFHomeCharacteristicPickerParameter : WFEnumerationParameter {
    NSString * _homeIdentifier;
    NSArray * _possibleStates;
    HMService * _service;
}

@property (nonatomic, copy) NSString *homeIdentifier;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, retain) HMService *service;

- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)homeIdentifier;
- (bool)isHidden;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (id)service;
- (void)setHomeIdentifier:(id)arg1;
- (void)setService:(id)arg1;
- (void)setService:(id)arg1 homeIdentifier:(id)arg2;
- (Class)singleStateClass;
- (void)updatePossibleStates;

@end
