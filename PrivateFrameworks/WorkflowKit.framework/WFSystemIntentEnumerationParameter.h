
@interface WFSystemIntentEnumerationParameter : WFEnumerationParameter {
    NSArray * _possibleStates;
    INIntentSlotDescription * _slotDescription;
}

@property (nonatomic, readonly) INIntentSlotDescription *slotDescription;

- (void).cxx_destruct;
- (bool)alwaysShowsButton;
- (id)initWithDefinition:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (Class)singleStateClass;
- (id)slotDescription;

@end
