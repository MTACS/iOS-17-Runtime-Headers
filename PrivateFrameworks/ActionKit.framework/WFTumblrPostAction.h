
@interface WFTumblrPostAction : WFAction <WFDynamicEnumerationDataSource> {
    TMAPIClient * _client;
}

@property (nonatomic, readonly) TMAPIClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)client;
- (id)contentDestinationWithError:(id*)arg1;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)generatedResourceNodes;
- (void)initializeParameters;
- (id)inputContentClasses;
- (bool)inputsMultipleItems;
- (void)openFiles:(id)arg1;
- (void)openPostWithType:(id)arg1 withParameters:(id)arg2;
- (id)possibleStatesForEnumeration:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (void)updateTagsParameterHidden;

@end
