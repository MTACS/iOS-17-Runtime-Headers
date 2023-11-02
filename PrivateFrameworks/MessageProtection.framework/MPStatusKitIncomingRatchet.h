
@interface MPStatusKitIncomingRatchet : NSObject {
    _TtC17MessageProtection17SKIncomingRatchet * _ratchet;
}

@property (nonatomic, retain) _TtC17MessageProtection17SKIncomingRatchet *ratchet;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithIndex:(unsigned short)arg1 chainKey:(id)arg2 signingKey:(id)arg3 error:(id*)arg4;
- (id)ratchet;
- (id)serializedData;
- (void)setRatchet:(id)arg1;
- (id)signingKeyIdentifier;
- (id)unsealStatusWithIndex:(unsigned short)arg1 encryptedMessage:(id)arg2 authenticating:(id)arg3 signature:(id)arg4 error:(id*)arg5;

@end
