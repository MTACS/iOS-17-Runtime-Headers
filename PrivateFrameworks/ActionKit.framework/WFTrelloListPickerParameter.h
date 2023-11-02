
@interface WFTrelloListPickerParameter : WFEnumerationParameter <WFActionEventObserver> {
    WFAction * _action;
    id  _observer;
    NSArray * _possibleStates;
}

@property (nonatomic) WFAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id observer;
@property (nonatomic, readonly) NSArray *possibleStates;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)observer;
- (id)possibleStates;
- (void)possibleStatesDidChange;
- (void)setAction:(id)arg1;
- (void)setObserver:(id)arg1;
- (Class)singleStateClass;
- (void)updateLists;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
