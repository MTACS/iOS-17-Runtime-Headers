
@interface APPolicyData : NSObject <NSSecureCoding> {
    NSString * _creativeIdentifier;
    NSDictionary * _policyValue;
}

@property (retain) NSString *creativeIdentifier;
@property (retain) NSDictionary *policyValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)creativeIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)policyValue;
- (void)setCreativeIdentifier:(id)arg1;
- (void)setPolicyValue:(id)arg1;

@end
