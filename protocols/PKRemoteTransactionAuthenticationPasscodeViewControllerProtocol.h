
@protocol PKRemoteTransactionAuthenticationPasscodeViewControllerProtocol <NSObject>

@required

- (void)passcodeViewControllerDidCancel;
- (void)passcodeViewControllerDidEndSessionExchange;
- (void)passcodeViewControllerDidGenerateEncryptedPasscode:(PKEncryptedDataObject *)arg1;
- (void)passcodeViewControllerRequestSessionExchangeTokenWithHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*

@end
