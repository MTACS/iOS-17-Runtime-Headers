
@protocol ASCredentialRequestSubPaneConfirmButtonDelegate <NSObject>

@required

- (void)confirmButtonSubPaneDidEnterProcessingState:(ASCredentialRequestConfirmButtonSubPane *)arg1 withAuthenticatedContext:(LAContext *)arg2;
- (void)confirmButtonSubPaneDidFailBiometry:(ASCredentialRequestConfirmButtonSubPane *)arg1;
- (void)performAuthorization:(ASCredentialRequestConfirmButtonSubPane *)arg1 withAuthenticatedLAContext:(LAContext *)arg2;
- (void)performPasswordAuthentication:(ASCredentialRequestConfirmButtonSubPane *)arg1;
- (void)userTappedContinueButton;

@optional

- (bool)validateReadyForAuthorization:(ASCredentialRequestConfirmButtonSubPane *)arg1;

@end
