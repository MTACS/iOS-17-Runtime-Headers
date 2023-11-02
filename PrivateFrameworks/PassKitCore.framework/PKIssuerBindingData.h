
@interface PKIssuerBindingData : NSObject <NSSecureCoding> {
    NSURL * _callbackURL;
    NSData * _createdKeyHash;
    NSString * _sessionIdentifier;
    NSData * _signedData;
}

@property (nonatomic, copy) NSURL *callbackURL;
@property (nonatomic, copy) NSData *createdKeyHash;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, copy) NSData *signedData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callbackURL;
- (id)createdKeyHash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIssuerBindingData:(id)arg1;
- (id)sessionIdentifier;
- (void)setCallbackURL:(id)arg1;
- (void)setCreatedKeyHash:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSignedData:(id)arg1;
- (id)signedData;

@end
