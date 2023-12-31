
@interface _LSApplicationProxiesWithFlagsQuery : _LSBundleQuery {
    unsigned long long  _bundleFlags;
    unsigned int  _plistFlags;
}

@property (nonatomic, readonly) unsigned long long bundleFlags;
@property (nonatomic, readonly) unsigned int plistFlags;

+ (id)queryWithPlistFlags:(unsigned int)arg1 bundleFlags:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (bool)_requiresDatabaseMappingEntitlement;
- (unsigned long long)bundleFlags;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)plistFlags;

@end
