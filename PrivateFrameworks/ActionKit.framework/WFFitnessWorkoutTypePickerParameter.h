
@interface WFFitnessWorkoutTypePickerParameter : WFEnumerationParameter <WFActionEventObserver> {
    WFAction * _action;
    int  _characteristicUpdateToken;
    NSArray * _possibleStates;
}

@property (nonatomic) WFAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (id)defaultSerializedRepresentation;
- (void)defaultSerializedRepresentationDidChange;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)localizedPlaceholder;
- (id)possibleStates;
- (void)saveStateIfNeeded;
- (void)setAction:(id)arg1;
- (Class)singleStateClass;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)wf_reloadFromAttributesDidChangeWithCompletionHandler:(id /* block */)arg1;

@end
