
@interface RSABSSATokenIssuer : NSObject {
    const struct ccrsabssa_ciphersuite { } * _ciphersuite;
    unsigned long long  _ciphersuiteModulusByteCount;
    NSData * _keyId;
    NSData * _publicKey;
    struct ccrsa_full_ctx { 
        unsigned long long pb_n; 
        unsigned long long pb_bitlen; 
        struct cczp_funcs {} *pb_funcs; 
        unsigned long long pb_ccn[0]; 
    }  _rsaPrivateKey;
}

@property (nonatomic, readonly, retain) NSData *keyId;
@property (nonatomic, retain) NSData *publicKey;

- (void).cxx_destruct;
- (id)blindSign:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithKeyByteCount:(unsigned long long)arg1;
- (id)keyId;
- (id)publicKey;
- (void)setPublicKey:(id)arg1;

@end
