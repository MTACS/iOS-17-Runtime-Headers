
@protocol PKAppletSubcredentialPairingSessionDelegate <PKSessionDelegate>

@required

- (void)appletSubcredentialPairingSession:(PKAppletSubcredentialPairingSession *)arg1 didEndPairingWithError:(NSError *)arg2;
- (void)appletSubcredentialPairingSession:(PKAppletSubcredentialPairingSession *)arg1 didEndPairingWithSubcredential:(PKAppletSubcredential *)arg2 registrationData:(PKSubcredentialEncryptedContainer *)arg3;
- (void)appletSubcredentialPairingSession:(PKAppletSubcredentialPairingSession *)arg1 didFinishPreWarmWithResult:(NSError *)arg2;
- (void)appletSubcredentialPairingSession:(PKAppletSubcredentialPairingSession *)arg1 didFinishProbingTerminalWithError:(NSError *)arg2 brandCode:(unsigned long long)arg3;
- (void)appletSubcredentialPairingSessionDidBeginPairing:(PKAppletSubcredentialPairingSession *)arg1;
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(PKAppletSubcredentialPairingSession *)arg1 withError:(NSError *)arg2;

@end
