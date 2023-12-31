
@interface PKApplePayTrustKey : NSObject <NSSecureCoding> {
    NSData * _certificate;
    NSString * _identifier;
    NSData * _publicKeyHash;
    NSData * _signedEnrollmentData;
}

@property (nonatomic, readonly, copy) NSData *certificate;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSData *publicKeyHash;
@property (nonatomic, readonly, copy) NSData *signedEnrollmentData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)publicKeyHash;
- (id)signedEnrollmentData;

@end
