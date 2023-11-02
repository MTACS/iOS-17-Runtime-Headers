
@interface RMGenericAuthenticationCredential : RMAuthenticationCredential {
    NSString * _authenticationScheme;
    NSDictionary * _properties;
}

@property (nonatomic, readonly, copy) NSString *authenticationScheme;
@property (nonatomic, readonly, copy) NSDictionary *properties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authenticationScheme;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAuthenticationScheme:(id)arg1 properties:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAuthenticationCredential:(id)arg1;
- (id)properties;

@end
