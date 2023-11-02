
@interface PKRemoteAddPaymentPassViewController : _UIRemoteViewController <PKRemoteAddPassViewControllerProtocol> {
    <PKAddPaymentPassViewControllerDelegate> * _delegate;
    bool  _finished;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKAddPaymentPassViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (id)_addPaymentPassVC;
- (void)dealloc;
- (id)delegate;
- (void)didFinishWithPass:(id)arg1 error:(id)arg2;
- (void)generateRequestWithCertificateChain:(id)arg1 nonce:(id)arg2 nonceSignature:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end