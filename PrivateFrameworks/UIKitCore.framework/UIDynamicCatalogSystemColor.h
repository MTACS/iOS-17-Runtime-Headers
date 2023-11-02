
@interface UIDynamicCatalogSystemColor : UIDynamicColor {
    UIColor * _cachedColor;
    unsigned long long  _cachedThemeKey;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _colorCacheLock;
    long long  _cuiColorName;
}

- (void).cxx_destruct;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 coreUIColorName:(long long)arg2;
- (bool)isEqual:(id)arg1;

@end
