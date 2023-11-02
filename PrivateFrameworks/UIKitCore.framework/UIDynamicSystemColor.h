
@interface UIDynamicSystemColor : UIDynamicColor {
    UIColor * _cachedColor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cachedColorLock;
    unsigned long long  _cachedThemeKey;
    NSDictionary * _colorsByThemeKey;
}

- (void).cxx_destruct;
- (id)_colorsByThemeKey;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (void)_setColorsByThemeKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 colorsByThemeKey:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
