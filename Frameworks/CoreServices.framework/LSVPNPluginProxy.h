
@interface LSVPNPluginProxy : LSBundleProxy <NSSecureCoding>

+ (id)VPNPluginProxyForIdentifier:(id)arg1;
+ (id)VPNPluginProxyForIdentifier:(id)arg1 withContext:(struct LSContext { id x1; }*)arg2;
+ (bool)supportsSecureCoding;

- (id)_initWithBundleIdentifier:(id)arg1 withContext:(struct LSContext { id x1; }*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
