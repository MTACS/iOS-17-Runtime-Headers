
@interface _LSApplicationProxiesOfTypeQuery : _LSBundleQuery {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

+ (id)queryWithType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (bool)_requiresDatabaseMappingEntitlement;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
