
@interface CKDTrustedTargetWrappedKey : NSObject {
    CKPublicKey * _publicKey;
    NSData * _wrappedKey;
}

@property (nonatomic, readonly) CKPublicKey *publicKey;
@property (nonatomic, readonly, copy) NSData *wrappedKey;

- (void).cxx_destruct;
- (id)initWithWrappedKey:(id)arg1 publicKey:(id)arg2;
- (id)publicKey;
- (id)wrappedKey;

@end
