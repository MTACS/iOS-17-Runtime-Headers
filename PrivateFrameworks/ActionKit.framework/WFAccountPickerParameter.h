
@interface WFAccountPickerParameter : WFEnumerationParameter {
    Class  _accountClass;
    id  _observer;
    NSArray * _possibleStates;
}

@property (nonatomic, readonly) Class accountClass;
@property (nonatomic, readonly) id observer;
@property (nonatomic, readonly) NSArray *possibleStates;

- (void).cxx_destruct;
- (Class)accountClass;
- (id)accountWithName:(id)arg1;
- (void)dealloc;
- (id)defaultSerializedRepresentation;
- (id)initWithDefinition:(id)arg1;
- (bool)isHidden;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)observer;
- (id)possibleStates;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;

@end
