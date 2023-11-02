
@interface PKRemoteTransactionAuthenticationPasscodeViewController : _UIRemoteViewController <PKRemoteTransactionAuthenticationPasscodeViewControllerProtocol> {
    <PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)delegate;
- (void)passcodeViewControllerDidCancel;
- (void)passcodeViewControllerDidEndSessionExchange;
- (void)passcodeViewControllerDidGenerateEncryptedPasscode:(id)arg1;
- (void)passcodeViewControllerRequestSessionExchangeTokenWithHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
