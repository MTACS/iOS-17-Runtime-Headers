
@interface WFHealthQuantityAdditionalPickerParameter : WFEnumerationParameter {
    NSArray * _possibleStates;
    HKQuantityType * _quantityType;
}

@property (nonatomic, retain) HKQuantityType *quantityType;

- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)importQuestionBehavior;
- (bool)isHidden;
- (id)localizedLabel;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (id)quantityType;
- (void)setQuantityType:(id)arg1;
- (void)updatePossibleStates;

@end
