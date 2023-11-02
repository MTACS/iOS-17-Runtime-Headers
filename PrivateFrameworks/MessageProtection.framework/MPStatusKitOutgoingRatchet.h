
@interface MPStatusKitOutgoingRatchet : NSObject {
    _TtC17MessageProtection17SKOutgoingRatchet * _ratchet;
}

@property (nonatomic, retain) _TtC17MessageProtection17SKOutgoingRatchet *ratchet;

- (void).cxx_destruct;
- (id)currentSubscriptionKeys;
- (id)init;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)ratchet;
- (bool)ratchetForward;
- (id)sealStatus:(id)arg1 authenticating:(id)arg2 error:(id*)arg3;
- (id)serializedData;
- (void)setRatchet:(id)arg1;
- (id)signingKeyIdentifier;

@end
