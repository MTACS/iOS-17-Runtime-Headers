
@interface WFQuantityUnitPickerParameter : WFEnumerationParameter {
    NSObject<OS_dispatch_group> * _possibleStateLoadingGroup;
    NSArray * _possibleStates;
    HKQuantityType * _quantityType;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_group> *possibleStateLoadingGroup;
@property (nonatomic, retain) HKQuantityType *quantityType;

- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStateLoadingGroup;
- (id)possibleStates;
- (id)quantityType;
- (void)setQuantityType:(id)arg1;
- (Class)singleStateClass;
- (void)updatePossibleStates;

@end
