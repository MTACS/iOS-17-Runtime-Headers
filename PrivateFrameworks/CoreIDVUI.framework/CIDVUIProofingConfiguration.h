
@interface CIDVUIProofingConfiguration : NSObject <NSSecureCoding> {
    NSString * _country;
    NSString * _credentialIdentifier;
    NSString * _productIdentifier;
    NSString * _state;
    long long  _status;
    long long  _target;
}

@property (nonatomic, retain) NSString *country;
@property (nonatomic, retain) NSString *credentialIdentifier;
@property (nonatomic, retain) NSString *productIdentifier;
@property (nonatomic, retain) NSString *state;
@property (nonatomic) long long status;
@property (nonatomic) long long target;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)country;
- (id)credentialIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1 country:(id)arg2 target:(long long)arg3 status:(long long)arg4 credentialIdentifier:(id)arg5;
- (id)initWithState:(id)arg1 country:(id)arg2 target:(long long)arg3 status:(long long)arg4 credentialIdentifier:(id)arg5 productIdentifier:(id)arg6;
- (id)productIdentifier;
- (void)setCountry:(id)arg1;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTarget:(long long)arg1;
- (id)state;
- (long long)status;
- (long long)target;

@end
