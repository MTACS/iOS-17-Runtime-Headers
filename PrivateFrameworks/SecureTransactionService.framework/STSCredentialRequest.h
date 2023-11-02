
@interface STSCredentialRequest : NSObject <NSSecureCoding> {
    NSString * _credentialIdentifier;
    unsigned long long  _type;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
