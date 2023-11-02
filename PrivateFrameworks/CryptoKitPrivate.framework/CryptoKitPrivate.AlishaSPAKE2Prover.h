
@interface CryptoKitPrivate.AlishaSPAKE2Prover : NSObject {
    void X;
    void aad;
    void spakeCtxData;
    void z0_self;
    void z1_self;
}

- (void).cxx_destruct;
- (id)getX;
- (id)init;
- (id)initWithPassword:(id)arg1 salt:(id)arg2 authenticatedData:(id)arg3 keyDerivationCost:(unsigned long long)arg4;
- (id)processResponseWithY:(id)arg1 M1:(id)arg2;

@end
