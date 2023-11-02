
@interface CUIDesignLibraryCatalog : NSObject {
    NSString * _assetStoreName;
    id  _colorCache;
    long long  _colorScheme;
    long long  _contrast;
    long long  _designSystem;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _storageRef;
    long long  _styling;
}

@property long long colorScheme;
@property long long contrast;
@property long long designSystem;
@property long long styling;

+ (id)_bundleNameForResolvedDesignSystem:(long long)arg1;
+ (id)_catalogPathComponentForDesignSystem:(long long)arg1 colorScheme:(long long)arg2 contrast:(long long)arg3 styling:(long long)arg4 error:(id*)arg5;
+ (id)catalogForDesignSystem:(long long)arg1 colorScheme:(long long)arg2 contrast:(long long)arg3 styling:(long long)arg4 error:(id*)arg5;

- (id)_colorNameStringFromNameEnum:(long long)arg1 palette:(long long)arg2;
- (long long)colorScheme;
- (id)colorWithName:(long long)arg1 palette:(long long)arg2 displayGamut:(long long)arg3 error:(id*)arg4;
- (long long)contrast;
- (void)dealloc;
- (id)description;
- (long long)designSystem;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (void)setColorScheme:(long long)arg1;
- (void)setContrast:(long long)arg1;
- (void)setDesignSystem:(long long)arg1;
- (void)setStyling:(long long)arg1;
- (id)shapeEffectPresetWithName:(id)arg1 error:(id*)arg2;
- (long long)styling;

@end
