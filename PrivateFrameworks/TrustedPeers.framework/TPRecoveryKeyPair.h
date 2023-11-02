
@interface TPRecoveryKeyPair : NSObject {
    NSData * _encryptionKeyData;
    NSData * _signingKeyData;
}

@property (readonly, retain) NSData *encryptionKeyData;
@property (readonly, retain) NSData *signingKeyData;

- (void).cxx_destruct;
- (id)encryptionKeyData;
- (id)initWithSigningKeyData:(id)arg1 encryptionKeyData:(id)arg2;
- (id)initWithStableInfo:(id)arg1;
- (id)signingKeyData;

@end
