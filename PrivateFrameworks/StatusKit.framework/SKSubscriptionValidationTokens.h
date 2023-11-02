
@interface SKSubscriptionValidationTokens : NSObject <NSSecureCoding> {
    NSString * _encryptionValidationToken;
    NSString * _subscriptionValidationToken;
}

@property (nonatomic, readonly) NSString *encryptionValidationToken;
@property (nonatomic, readonly) NSString *subscriptionValidationToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionValidationToken;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionValidationToken:(id)arg1 encryptionValidationToken:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSubscriptionValidationTokens:(id)arg1;
- (id)subscriptionValidationToken;

@end
