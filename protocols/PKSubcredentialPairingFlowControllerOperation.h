
@protocol PKSubcredentialPairingFlowControllerOperation <PKSubcredentialProvisioningFlowControllerOperation, PKFieldDetectSuppressor>

@required

- (<PKSubcredentialPairingFlowControllerProtocol> *)flowController;
- (id)initWithFlowController:(id <PKSubcredentialPairingFlowControllerProtocol>)arg1 context:(PKSubcredentialPairingFlowControllerContext *)arg2;
- (unsigned long long)operation;
- (PKSubcredentialPairingFlowControllerContext *)provisioningContext;
- (void)setProvisioningContext:(PKSubcredentialPairingFlowControllerContext *)arg1;

@optional

- (void)hostApplicationDidEnterBackground;
- (void)hostApplicationWillEnterForeground;

@end
