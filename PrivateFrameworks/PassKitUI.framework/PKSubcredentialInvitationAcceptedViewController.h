
@interface PKSubcredentialInvitationAcceptedViewController : PKExplanationViewController <PKSubcredentialInvitationFlowControllerOperation, PKViewControllerPreflightable> {
    <PKSubcredentialInvitationFlowControllerProtocol> * _flowController;
    PKHeroCardExplainationHeaderView * _heroCardView;
    bool  _isPassExpress;
    UIViewController * _nextVC;
    PKSubcredentialInvitationFlowControllerContext * _provisioningContext;
    unsigned long long  _radioTechnologyType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PKSubcredentialInvitationFlowControllerProtocol> *flowController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long operation;
@property (nonatomic, retain) PKSubcredentialInvitationFlowControllerContext *provisioningContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)flowController;
- (id)initWithFlowController:(id)arg1 context:(id)arg2;
- (unsigned long long)operation;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)provisioningContext;
- (void)setProvisioningContext:(id)arg1;
- (void)viewDidLoad;

@end
