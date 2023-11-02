
@protocol DAKeyPairingDelegate <DASessionDelegate>

@required

- (void)didFinishFirstTransactionForSession:(DAKeyPairingSession *)arg1 error:(NSError *)arg2;
- (void)didFinishPreWarmWithResult:(NSError *)arg1;
- (void)keyPairingSession:(DAKeyPairingSession *)arg1 didFinishPairingWithKey:(DAKeyInformation *)arg2 trackingRequest:(DAAlishaKeyEncryptedRequest *)arg3 error:(NSError *)arg4;

@optional

- (void)didFinishProbingWithBrandCode:(unsigned long long)arg1 error:(NSError *)arg2;
- (void)didFinishProbingWithResult:(bool)arg1;
- (void)didStartPairing;

@end
