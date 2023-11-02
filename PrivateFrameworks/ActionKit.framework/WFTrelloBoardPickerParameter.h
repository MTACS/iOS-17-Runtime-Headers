
@interface WFTrelloBoardPickerParameter : WFEnumerationParameter {
    id  _observer;
    NSArray * _possibleStates;
}

@property (nonatomic, retain) id observer;
@property (nonatomic, readonly) NSArray *possibleStates;

- (void).cxx_destruct;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)observer;
- (id)possibleStates;
- (void)possibleStatesDidChange;
- (void)setObserver:(id)arg1;
- (Class)singleStateClass;
- (void)updateBoards;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
