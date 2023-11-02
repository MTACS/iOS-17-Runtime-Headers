
@interface SESKeyPair : NSObject {
    NSData * _publicKey;
    NSData * _secretKey;
}

@property (nonatomic, readonly) NSData *publicKey;
@property (nonatomic, readonly) NSData *secretKey;

- (void).cxx_destruct;
- (id)initWithPublicKey:(id)arg1 secretKey:(id)arg2;
- (id)publicKey;
- (id)secretKey;

@end
