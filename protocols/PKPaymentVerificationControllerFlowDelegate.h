
@protocol PKPaymentVerificationControllerFlowDelegate <NSObject>

@required

- (void)didFinishVerification;
- (UIWindow *)presentationContext;

@end
