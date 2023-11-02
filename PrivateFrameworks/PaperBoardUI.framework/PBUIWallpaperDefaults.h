
@interface PBUIWallpaperDefaults : NSObject {
    PBUIWallpaperDefaultsDomain * _defaultsDomain;
}

@property (nonatomic, readonly) PBUIWallpaperDefaultsDomain *defaultsDomain;

+ (id)defaults;

- (void).cxx_destruct;
- (id)_defaultsWrapperForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)_keyForWallpaperMode:(long long)arg1;
- (void)_setDefaultsWithDictionary:(id)arg1 variant:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)_updateDefaultsForVariant:(long long)arg1 wallpaperMode:(long long)arg2 updater:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRectForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)defaultsDomain;
- (id)description;
- (bool)hasVideo;
- (bool)hasVideoForVariant:(long long)arg1;
- (id)imageHashForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)init;
- (id)initWithdefaultsDomain:(id)arg1;
- (bool)isPortraitForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (bool)magnifyEnabledForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)nameForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (double)parallaxFactorForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)proceduralIdentifierForVariant:(long long)arg1;
- (id)proceduralOptionsForVariant:(long long)arg1;
- (bool)proceduralUserSetForVariant:(long long)arg1;
- (void)resetCroppingDefaults;
- (void)resetDefaults;
- (void)resetHasVideoDefaults;
- (void)resetImageHashDefaults;
- (void)resetMagnifyDefaults;
- (void)resetNameDefaults;
- (void)resetParallaxFactorDefaults;
- (void)resetPortraitDefaults;
- (void)resetStillTimeInVideoDefaults;
- (void)resetWallpaperKitDataDefaults;
- (void)resetZoomScaleDefaults;
- (void)setColorData:(id)arg1 forLocations:(long long)arg2;
- (void)setColorName:(id)arg1 forLocations:(long long)arg2;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)setGradientData:(id)arg1 forLocations:(long long)arg2;
- (void)setHasVideo:(bool)arg1;
- (void)setImageHash:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)setMagnifyEnabled:(bool)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)setName:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)setParallaxFactor:(double)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)setPortrait:(bool)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)setProceduralIdentifier:(id)arg1 forLocations:(long long)arg2;
- (void)setProceduralOptions:(id)arg1 forLocations:(long long)arg2;
- (void)setProceduralUserSet:(bool)arg1 forLocations:(long long)arg2;
- (void)setStillTimeInVideo:(double)arg1;
- (void)setSupportsCropping:(bool)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)setWallpaperKitData:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)setWallpaperOptions:(id)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (void)setZoomScale:(double)arg1 forLocations:(long long)arg2 wallpaperMode:(long long)arg3;
- (double)stillTimeInVideo;
- (double)stillTimeInVideoForVariant:(long long)arg1;
- (bool)supportsCroppingForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (void)updateDefaultsForLocations:(long long)arg1 updater:(id /* block */)arg2;
- (id)wallpaperColorDataForVariant:(long long)arg1;
- (id)wallpaperColorNameForVariant:(long long)arg1;
- (id)wallpaperGradientDataForVariant:(long long)arg1;
- (id)wallpaperKitDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2;
- (double)zoomScaleForVariant:(long long)arg1 wallpaperMode:(long long)arg2;

@end
