
@interface CPSStoreAuthenticationResponse : CPSAuthenticationResponse <NSSecureCoding> {
    AMSDelegateAuthenticateResult * _authenticationResult;
}

@property (nonatomic, readonly) AMSDelegateAuthenticateResult *authenticationResult;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authenticationResult;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAuthenticationResult:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
