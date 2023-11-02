
@protocol PKSubcredentialInvitationFlowControllerOperation <PKSubcredentialProvisioningFlowControllerOperation>

@required

- (<PKSubcredentialInvitationFlowControllerProtocol> *)flowController;
- (id)initWithFlowController:(id <PKSubcredentialInvitationFlowControllerProtocol>)arg1 context:(PKSubcredentialInvitationFlowControllerContext *)arg2;
- (unsigned long long)operation;
- (PKSubcredentialInvitationFlowControllerContext *)provisioningContext;
- (void)setProvisioningContext:(PKSubcredentialInvitationFlowControllerContext *)arg1;

@end
