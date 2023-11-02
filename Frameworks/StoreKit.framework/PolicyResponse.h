
@interface PolicyResponse : NSObject <NSSecureCoding> {
    NSString * _privacyPolicyText;
    NSURL * _privacyPolicyURL;
    NSString * _termsOfService;
}

@property (nonatomic, readonly) NSString *privacyPolicyText;
@property (nonatomic, readonly) NSURL *privacyPolicyURL;
@property (nonatomic, readonly) NSString *termsOfService;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTermsOfService:(id)arg1 privacyPolicyText:(id)arg2 privacyPolicyURL:(id)arg3;
- (id)privacyPolicyText;
- (id)privacyPolicyURL;
- (id)termsOfService;

@end
