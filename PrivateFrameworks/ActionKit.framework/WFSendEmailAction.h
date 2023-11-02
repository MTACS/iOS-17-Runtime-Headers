
@interface WFSendEmailAction : WFHandleCustomIntentAction {
    bool  _contentManaged;
}

@property (getter=isContentManaged, nonatomic) bool contentManaged;

+ (id)userInterfaceProtocol;

- (bool)checkManagementLevel:(id)arg1 error:(id*)arg2;
- (id)contentDestinationWithError:(id*)arg1;
- (void)generateBodyFromCollection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)generateEmailFromInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)generateFilesFromCollection:(id)arg1 completion:(id /* block */)arg2;
- (void)getRecipientsFromParameterValue:(id)arg1 completion:(id /* block */)arg2;
- (bool)isContentManaged;
- (bool)parameterCombinationForIntentSupportsBackgroundExecution:(id)arg1;
- (bool)populatesInputFromInputParameter;
- (void)prepareEmailContentFromInput:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)prioritizedParameterKeysForRemoteExecution;
- (id)requiredResourcesForIntentAvailableResource;
- (bool)requiresRemoteExecution;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(id /* block */)arg5;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(bool)arg2;
- (void)setContentManaged:(bool)arg1;
- (id)showsWhenRunIfApplicable;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;

@end
