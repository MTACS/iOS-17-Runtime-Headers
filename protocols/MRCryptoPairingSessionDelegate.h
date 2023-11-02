
@protocol MRCryptoPairingSessionDelegate <NSObject>

@required

- (void)pairingSession:(MRCryptoPairingSession *)arg1 didPrepareExchangeData:(NSData *)arg2;

@optional

- (void)pairingSession:(MRCryptoPairingSession *)arg1 didCompleteExchangeWithError:(NSError *)arg2;
- (void)pairingSession:(void *)arg1 promptForSetupCodeWithDelay:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: MRCryptoPairingSession *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)pairingSession:(MRCryptoPairingSession *)arg1 showSetupCode:(NSString *)arg2;
- (void)pairingSessionHideSetupCode:(MRCryptoPairingSession *)arg1;

@end
