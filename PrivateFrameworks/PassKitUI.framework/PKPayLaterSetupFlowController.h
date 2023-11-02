
@interface PKPayLaterSetupFlowController : NSObject <PKAccountFlowControllerDelegate, PKPaymentSetupViewControllerDelegate, PKSetupFlowControllerProtocol> {
    PKAccountFlowController * _accountFlowController;
    PKApplyController * _applyController;
    long long  _controllerContext;
    <PKPayLaterSetupFlowControllerDelegate> * _delegate;
    bool  _didBeginAnalyticsReporter;
    PKPayLaterFinancingController * _financingController;
    unsigned long long  _lastFeatureApplicationState;
    NSBundle * _localizedBundle;
    bool  _meetsSecurityCheck;
    id /* block */  _nextViewControllerCompletion;
    UIViewController * _parentViewController;
    PKPaymentPass * _payLaterPass;
    NSString * _preferredLanguage;
    NSString * _referrerIdentifier;
    PKSecurityCapabilitiesController * _securityCapabiltiesController;
    PKPayLaterFinancingOption * _selectedFinancingOption;
    PKPayLaterPreliminaryAssessment * _selectedPreliminaryAssessment;
    long long  _setupContext;
    <PKPaymentSetupViewControllerDelegate> * _setupViewControllerDelegate;
    PKPassSnapshotter * _snapshotter;
    PKAccountTermsAndConditionsController * _termsController;
}

@property (nonatomic, readonly) long long controllerContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPayLaterSetupFlowControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPayLaterFinancingController *financingController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *referrerIdentifier;
@property (nonatomic, retain) PKPayLaterFinancingOption *selectedFinancingOption;
@property (nonatomic) PKPayLaterPreliminaryAssessment *selectedPreliminaryAssessment;
@property (nonatomic, readonly) long long setupContext;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupViewControllerDelegate;
@property (readonly) Class superclass;

+ (id)defaultPayLaterSetupFlowControllerForAccount:(id)arg1 controllerContext:(long long)arg2 referrerIdentifier:(id)arg3;
+ (id)payLaterSetupFlowControllerForAccount:(id)arg1 controllerContext:(long long)arg2 referrerIdentifier:(id)arg3 paymentWebService:(id)arg4 accountService:(id)arg5 peerPaymentService:(id)arg6 paymentService:(id)arg7 passLibrary:(id)arg8;

- (void).cxx_destruct;
- (void)_acceptTermsIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_callNextViewControllerCompletionBlockWithError:(id)arg1;
- (void)_checkSecurityCapabiltiesWithCompletion:(id /* block */)arg1;
- (bool)_didStartPayLaterPassProvisioning;
- (id)_firstViewControllerWithoutNavController;
- (id)_genericError;
- (void)_nextApplyViewControllerWithCompletion:(id /* block */)arg1;
- (void)_updatePayLaterPass;
- (void)_viewControllerForState:(long long)arg1 completion:(id /* block */)arg2;
- (void)accountFlowController:(id)arg1 requestsPresentationOfDisplayableError:(id)arg2;
- (void)accountFlowController:(id)arg1 requestsPresentationOfViewController:(id)arg2;
- (long long)controllerContext;
- (id)delegate;
- (void)endSetupFlowFromViewController:(id)arg1 shouldDismiss:(bool)arg2;
- (void)fetchPayLaterDynamicContentWithCompletion:(id /* block */)arg1;
- (id)financingController;
- (id)firstViewController;
- (bool)hasPayLaterPass;
- (id)initWithFinancingController:(id)arg1 controllerContext:(long long)arg2 selectedFinancingOption:(id)arg3 selectedPreliminaryAssessment:(id)arg4 referrerIdentifier:(id)arg5;
- (id)localizedBundle;
- (void)nextViewControllerFromState:(long long)arg1 parentViewController:(id)arg2 completion:(id /* block */)arg3;
- (void)nextViewControllerWithCompletion:(id /* block */)arg1;
- (id)payLaterPassUniqueIdentifier;
- (id)preferredLanguage;
- (void)provisionPayLaterPassWithCompletion:(id /* block */)arg1;
- (id)referrerIdentifier;
- (void)reportAnalyticsEvent:(id)arg1;
- (void)reportAnalyticsEventForPageTag:(id)arg1 dictionary:(id)arg2;
- (id)selectedFinancingOption;
- (id)selectedPreliminaryAssessment;
- (unsigned long long)selectedProductType;
- (void)setDelegate:(id)arg1;
- (void)setSelectedFinancingOption:(id)arg1;
- (void)setSelectedPreliminaryAssessment:(id)arg1;
- (void)setSetupViewControllerDelegate:(id)arg1;
- (long long)setupContext;
- (id)setupViewControllerDelegate;
- (id)snapshotForPass:(id)arg1 completion:(id /* block */)arg2;
- (void)termsViewControllerForTermsIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;

@end
