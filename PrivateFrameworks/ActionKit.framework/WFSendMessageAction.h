
@interface WFSendMessageAction : WFHandleSystemIntentAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (id)actionForAppIdentifier:(id)arg1;
- (bool)canSendAttachmentsWithIntentHandler:(id)arg1 runningInSiri:(bool)arg2 showWhenRun:(bool)arg3;
- (id)contentDestinationWithError:(id*)arg1;
- (id)generatedResourceNodes;
- (void)getContentFromInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getINMessageAttachmentsFromInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getRecipients:(id /* block */)arg1;
- (void)initializeParameters;
- (bool)isMessagesAppSelected;
- (bool)isPhotoOrVideo:(id)arg1;
- (id)localizedKeyParameterDisplayName;
- (id)minimumSupportedClientVersion;
- (bool)opensInApp;
- (id)recipientsParameter;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(id /* block */)arg5;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (void)selectedAppDidChange;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(bool)arg2;
- (bool)shouldForceHandleInSiri:(id)arg1;
- (bool)skipsProcessingHiddenParameters;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
