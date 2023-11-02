
@interface UIDynamicCatalogColor : UIDynamicColor {
    _UIAssetManager * _assetManager;
    UIColor * _cachedColor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachedColorLock;
    unsigned long long  _cachedThemeKey;
    UIColor * _genericColor;
    NSString * _name;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_debugCatalogBundleIdentifier;
- (id)_debugName;
- (id)_initForNibEncodingWithName:(id)arg1 genericColor:(id)arg2;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (void)_setDebugCatalogBundleIdentifier:(id)arg1;
- (void)_setDebugName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 assetManager:(id)arg2 genericColor:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
