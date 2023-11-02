
@interface WFAppendToNoteAction : WFOverridableLinkAction

+ (id)overrideInputParameterName;

- (id)defaultOutputName;
- (id)descriptionResult;
- (bool)inputRequired;
- (id)keywords;
- (id)overrideDescriptionSummary;
- (id)overrideParameterSummary;
- (id)remoteExecuteOnPlatforms;
- (id)serializationKeysByParameter;
- (bool)shouldLocalizeValueForSelector:(SEL)arg1;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
