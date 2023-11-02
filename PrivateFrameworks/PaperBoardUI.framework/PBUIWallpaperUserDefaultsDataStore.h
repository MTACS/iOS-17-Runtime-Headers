
@interface PBUIWallpaperUserDefaultsDataStore : NSObject <BSDescriptionProviding, PBUIWallpaperDataStore> {
    PBUIWallpaperDefaultsDomain * _defaultsDomain;
    PBUIWallpaperDefaults * _wallpaperDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) PBUIWallpaperDefaultsDomain *defaultsDomain;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUIWallpaperDefaults *wallpaperDefaults;

- (void).cxx_destruct;
- (id)defaultsDomain;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (bool)hasWallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)init;
- (id)initWithUserdefaultsDomain:(id)arg1;
- (void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3;
- (id)proceduralWallpaperInfoForVariant:(long long)arg1;
- (void)removeProceduralWallpaperForVariants:(long long)arg1;
- (void)removeVideoForVariant:(long long)arg1;
- (void)removeWallpaperColorForVariants:(long long)arg1;
- (void)removeWallpaperGradientForVariants:(long long)arg1;
- (void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2;
- (void)removeWallpaperImageHashDataForVariants:(long long)arg1;
- (void)removeWallpaperOptionsForVariants:(long long)arg1;
- (bool)setOriginalVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setProceduralWallpaperInfo:(id)arg1 forVariants:(long long)arg2;
- (bool)setVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setWallpaperColor:(id)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperGradient:(id)arg1 forVariants:(long long)arg2;
- (bool)setWallpaperImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setWallpaperImageHashData:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setWallpaperOriginalImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (bool)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)supportsWallpaperImageHashDataStorage;
- (id)unverifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)updateProceduralWallpaperDefaultsWithIdentifier:(id)arg1 options:(id)arg2 forVariant:(long long)arg3;
- (id)verifiedOriginalVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)verifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperColorForVariant:(long long)arg1;
- (id)wallpaperColorNameForVariant:(long long)arg1;
- (id)wallpaperDefaults;
- (id)wallpaperGradientForVariant:(long long)arg1;
- (id)wallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperImageHashDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperOriginalImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperThumbnailDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;

@end
