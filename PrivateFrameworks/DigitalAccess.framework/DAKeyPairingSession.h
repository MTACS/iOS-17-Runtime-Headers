
@interface DAKeyPairingSession : DASession <DAKeyImmobilizerTokenUpdate, DAKeyTrackingUpdate, KmlOwnerPairingCallbacks, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)didEnd:(id)arg1;
- (void)didStart:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endPointPrivacyDecryption:(id)arg1 encryptedData:(id)arg2 publicKey:(id)arg3 callback:(id /* block */)arg4;
- (void)handleFirstTransactionCompletionResult:(id)arg1;
- (void)handleKeyPairingCompletionResult:(id)arg1 keyInformation:(id)arg2 trackingRequest:(id)arg3;
- (void)handlePairingDidStart;
- (void)handlePreWarmCompletionResult:(id)arg1;
- (void)handleProbingCompletionWithBrandCode:(unsigned long long)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)preWarmForManufacturer:(id)arg1;
- (void)requestImmobilizerTokenRefillForKeyWithIdentifier:(id)arg1 callback:(id /* block */)arg2;
- (void)setImmobilizerTokens:(id)arg1 publicKey:(id)arg2 forKeyWithIdentifier:(id)arg3 callback:(id /* block */)arg4;
- (id)setTrackingReceipt:(id)arg1 forKeyWithIdentifier:(id)arg2;
- (id)setTrackingReceipt:(id)arg1 slotIdentifier:(id)arg2 confidentialMailboxData:(id)arg3 ephemeralPublicKey:(id)arg4 forKeyWithIdentifier:(id)arg5;
- (id)setTrackingReceipt:(id)arg1 vehicleMobilizationData:(id)arg2 forKeyWithIdentifier:(id)arg3;
- (id)startKeyPairingWithPassword:(id)arg1 displayName:(id)arg2;
- (id)startKeyPairingWithPassword:(id)arg1 displayName:(id)arg2 transport:(long long)arg3;
- (id)startProbing;

@end
