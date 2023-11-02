
@protocol AAUICustodianSetupFlowControllerDelegate <NSObject>

@required

- (void)custodianSetupFlowControllerDidFinish:(UIViewController *)arg1;

@optional

- (void)custodianSetupFlowControllerRecoveryContactInviteSent;
- (NSString *)followUpUniqueIdentifier;

@end
