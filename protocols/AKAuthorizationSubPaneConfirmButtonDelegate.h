
@protocol AKAuthorizationSubPaneConfirmButtonDelegate <NSObject>

@required

- (void)performAuthorization;
- (void)performPasswordAuthentication;
- (void)subPaneConfirmButtonDidEnterProcessingState:(AKAuthorizationSubPaneConfirmButton *)arg1;
- (void)subPaneConfirmButtonPerformExternalAuthentication:(AKAuthorizationSubPaneConfirmButton *)arg1;
- (void)subpaneConfirmButtonDidFailBiometry:(AKAuthorizationSubPaneConfirmButton *)arg1;

@optional

- (bool)validateReadyForAuthorization;

@end
