
@interface DAAlishaKeyEncryptedRequest : NSObject <NSSecureCoding> {
    NSData * _encryptedRequest;
    NSData * _ephemeralPublicKey;
    NSData * _publicKeyHash;
    NSString * _version;
}

@property (nonatomic, readonly) NSData *encryptedRequest;
@property (nonatomic, readonly) NSData *ephemeralPublicKey;
@property (nonatomic, readonly) NSData *publicKeyHash;
@property (nonatomic, readonly) NSString *version;

+ (id)decodeWithData:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encodeWithError:(id*)arg1;
- (id)encryptedRequest;
- (id)ephemeralPublicKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(id)arg1 ephemeralPublicKey:(id)arg2 publicKeyHash:(id)arg3 encryptedRequest:(id)arg4;
- (id)publicKeyHash;
- (id)version;

@end
