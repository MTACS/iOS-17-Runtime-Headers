
@protocol KmlOwnerPairingCallbacks <KmlSessionCallbacks>

@required

- (void)handleFirstTransactionCompletionResult:(NSError *)arg1;
- (void)handleKeyPairingCompletionResult:(NSError *)arg1 keyInformation:(DAKeyInformation *)arg2 trackingRequest:(DAAlishaKeyEncryptedRequest *)arg3;
- (void)handlePairingDidStart;
- (void)handlePreWarmCompletionResult:(NSError *)arg1;
- (void)handleProbingCompletionWithBrandCode:(unsigned long long)arg1 error:(NSError *)arg2;

@end
