
@interface ISApplicationIdentityIcon : ISConcreteIcon {
    NSString * _identityString;
}

@property (readonly, copy) NSString *identityString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_makeResourceProviderAllowIconResourceFallback:(bool)arg1;
- (unsigned long long)_personaType;
- (id)_resourceForPersona:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identityString;
- (id)initWithApplicationIdentity:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)makeResourceProvider;
- (id)makeSymbolResourceProvider;

@end
