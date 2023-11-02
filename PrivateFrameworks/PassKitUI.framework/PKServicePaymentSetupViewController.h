
@interface PKServicePaymentSetupViewController : UIViewController <PKPaymentSetupDelegate, PKServicePaymentSetupViewControllerProtocol> {
    PKPaymentProvisioningController * _provisioningController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_handleError:(id)arg1 completion:(id /* block */)arg2;
- (void)configureWithPaymentSetupRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)paymentSetupDidFinish:(id)arg1 withError:(id)arg2;
- (void)paymentSetupDidShowError:(id)arg1;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;

@end
