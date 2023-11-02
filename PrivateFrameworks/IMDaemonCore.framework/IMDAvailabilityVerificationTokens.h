
@interface IMDAvailabilityVerificationTokens : NSObject {
    NSString * _encryptionValidationToken;
    NSString * _subscriptionValidationToken;
}

@property (nonatomic, readonly) NSString *encryptionValidationToken;
@property (nonatomic, readonly) NSString *subscriptionValidationToken;

- (void).cxx_destruct;
- (id)description;
- (id)encryptionValidationToken;
- (unsigned long long)hash;
- (id)initWithSubscriptionValidationToken:(id)arg1 encryptionValidationToken:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAvailabilityVerificationTokens:(id)arg1;
- (id)subscriptionValidationToken;

@end
