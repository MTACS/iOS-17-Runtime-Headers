
@interface STSCredentialSelect : NSObject <NSSecureCoding> {
    NSData * _authData;
    NSString * _credentialIdentifier;
    NSDictionary * _elementsByNamespace;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
