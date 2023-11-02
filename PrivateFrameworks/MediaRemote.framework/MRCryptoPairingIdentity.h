
@interface MRCryptoPairingIdentity : NSObject {
    NSString * _identifier;
    NSData * _privateKey;
    NSData * _publicKey;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSData *privateKey;
@property (nonatomic, readonly) NSData *publicKey;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3;
- (id)privateKey;
- (id)publicKey;

@end
