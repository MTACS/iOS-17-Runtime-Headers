
@interface CoreIDVShared.DIPTrustKey : NSObject {
    void attestation;
    void baaCertificate;
    void encryptedPrivateKey;
    void keyBlob;
    void publicKey;
}

@property (nonatomic, readonly) NSData *baaCertificate;

- (void).cxx_destruct;
- (id)baaCertificate;
- (id)init;
- (id)initWithEncryptedPrivateKey:(id)arg1 attestation:(id)arg2 publicKey:(id)arg3 keyBlob:(id)arg4 error:(id*)arg5;

@end
