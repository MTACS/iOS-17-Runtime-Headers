
@interface WFWordPressPostAction : WFAction <WFDynamicEnumerationDataSource, WFDynamicTagFieldDataSource> {
    id  _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentDestinationWithError:(id*)arg1;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (void)generateHTMLFromInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)initializeParameters;
- (id)observer;
- (id)possibleStatesForEnumeration:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)setObserver:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (id)suggestedTagsForTagField:(id)arg1;
- (void)updateAccountMetadata;
- (void)updateHiddenStates;
- (void)updatePossibleStates;
- (void)wasAddedToWorkflow:(id)arg1;
- (void)wasRemovedFromWorkflow:(id)arg1;

@end
