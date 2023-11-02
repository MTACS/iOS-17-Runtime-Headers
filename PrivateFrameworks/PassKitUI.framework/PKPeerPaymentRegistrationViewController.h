
@interface PKPeerPaymentRegistrationViewController : UIViewController <PKPaymentSetupDelegate> {
    id /* block */  _dismissHandler;
    bool  _dismissed;
    PKPeerPaymentRegistrationFlowController * _flowController;
    NSDictionary * _userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismiss;
- (id)initWithUserInfo:(id)arg1;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)startRegistrationFlowWithCompletion:(id /* block */)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
