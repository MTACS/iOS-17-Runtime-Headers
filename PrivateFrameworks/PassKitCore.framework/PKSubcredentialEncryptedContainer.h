
@interface PKSubcredentialEncryptedContainer : NSObject <NSSecureCoding> {
    NSData * _data;
    NSString * _encryptionScheme;
    NSString * _ephemeralPublicKey;
    NSString * _publicKeyHash;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *encryptionScheme;
@property (nonatomic, readonly) NSString *ephemeralPublicKey;
@property (nonatomic, readonly) NSString *publicKeyHash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionScheme;
- (id)ephemeralPublicKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithEncryptionScheme:(id)arg1 ephemeralPublicKey:(id)arg2 publicKeyHash:(id)arg3 data:(id)arg4;
- (id)initWithRequest:(id)arg1;
- (id)publicKeyHash;

@end
