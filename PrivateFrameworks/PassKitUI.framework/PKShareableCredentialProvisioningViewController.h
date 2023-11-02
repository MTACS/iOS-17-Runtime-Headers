
@interface PKShareableCredentialProvisioningViewController : PKPassShareRedemptionViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPaymentServiceDelegate, PKPaymentSetupViewControllerDelegate, PKProvisioningFieldsUIRenderer, PKShareableCredentialsMessageComposeViewControllerDelegate> {
    PKAddShareablePassConfiguration * _configuration;
    long long  _context;
    <PKShareableCredentialProvisioningViewControllerCoordinator> * _coordinator;
    NSArray * _credentials;
    bool  _hasConfiguredCredential;
    PKSharingPushProvisioningInvitation * _invitation;
    bool  _isRunningInForeground;
    bool  _isUnifiedAccessPass;
    PKShareableCredentialsMessageComposeViewController * _messageComposeViewController;
    UIImage * _passThumbnailImage;
    NSString * _provisioningTemplateIdentifier;
}

@property (nonatomic) <PKShareableCredentialProvisioningViewControllerCoordinator> *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKSharingPushProvisioningInvitation *invitation;
@property (nonatomic) bool isRunningInForeground;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_continueProvisioning;
- (void)_loadPassThumbnail;
- (id)_provisioningErrorWithNumberOfPassesFailed:(long long)arg1 error:(id)arg2;
- (void)_showExitingLostModeUI;
- (void)_startProvisioning;
- (void)_terminateSetupFlowWithPasses:(id)arg1 error:(id)arg2;
- (void)activationCodeDidChangeToCode:(id)arg1;
- (void)cancelButtonPressed;
- (void)continueButtonPressed;
- (id)coordinator;
- (void)didTransitionTo:(long long)arg1 loading:(bool)arg2;
- (void)didUpdateFieldModel;
- (id)initWithContext:(long long)arg1 credentials:(id)arg2 configuration:(id)arg3;
- (id)invitation;
- (bool)isRunningInForeground;
- (void)messageComposeViewControllerDidFinishWithResult:(bool)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)setIsRunningInForeground:(bool)arg1;
- (void)setPassThumbnailImage:(id)arg1;
- (void)showLoadingUI;
- (void)showStartingUI;
- (void)showSuccessUI;
- (void)showWithProvisioningError:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidLoad;

@end
