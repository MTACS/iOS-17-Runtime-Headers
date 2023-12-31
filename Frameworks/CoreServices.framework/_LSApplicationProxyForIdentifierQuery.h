
@interface _LSApplicationProxyForIdentifierQuery : _LSBundleQuery {
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;

+ (id)alwaysAllowedBundleIdentifiers;
+ (id)queryWithIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (bool)_requiresDatabaseMappingEntitlement;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
