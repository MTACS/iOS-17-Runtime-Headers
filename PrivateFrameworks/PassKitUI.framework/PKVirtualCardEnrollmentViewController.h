
@interface PKVirtualCardEnrollmentViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPaymentAuthorizationViewControllerDelegate> {
    <PKVirtualCardEnrollmentViewControllerDelegate> * _delegate;
    bool  _didBeginPassManagementSubject;
    PKHeroCardExplainationHeaderView * _heroCardView;
    PKPaymentPass * _paymentPass;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKVirtualCardEnrollmentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginReportingIfNecessary;
- (void)_endReportingIfNecessary;
- (void)dealloc;
- (id)delegate;
- (void)explanationViewControllerDidSelectCancel:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 context:(long long)arg2 delegate:(id)arg3;
- (void)loadView;
- (void)passDidNotUpdateInTime;
- (void)passDidUpdate;
- (void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationViewControllerDidFinish:(id)arg1;
- (id)paymentPass;
- (void)receivedPassUpdatedNotification:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)waitForPassToUpdate;

@end
