
@protocol PKSubcredentialInvitationProvisioningFlowControllerOperation <PKSubcredentialInvitationFlowControllerOperation, PKSubcredentialProvisioningControllerDelegate>

@required

- (PKAppletSubcredentialSharingSession *)sharingSessionWithDelegate:(id <PKSessionDelegate>)arg1 startSession:(bool)arg2;

@end
