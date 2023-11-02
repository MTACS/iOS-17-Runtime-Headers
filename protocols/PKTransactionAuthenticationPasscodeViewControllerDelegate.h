
@protocol PKTransactionAuthenticationPasscodeViewControllerDelegate <NSObject>

@required

- (void)passcodeViewController:(PKTransactionAuthenticationPasscodeViewController *)arg1 didGenerateEncryptedPasscode:(PKEncryptedDataObject *)arg2;
- (void)passcodeViewController:(void *)arg1 requestSessionExchangeTokenWithHandler:(void *)arg2; // needs 2 arg types, found 7: PKTransactionAuthenticationPasscodeViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)passcodeViewControllerDidCancel:(PKTransactionAuthenticationPasscodeViewController *)arg1;
- (void)passcodeViewControllerDidEndSessionExchange:(PKTransactionAuthenticationPasscodeViewController *)arg1;

@end
