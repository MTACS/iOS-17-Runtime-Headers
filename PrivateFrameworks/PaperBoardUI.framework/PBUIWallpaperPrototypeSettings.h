
@interface PBUIWallpaperPrototypeSettings : PTSettings {
    PBUIWallpaperParallaxSettings * _homeScreenParallaxSettings;
    PBUIWallpaperParallaxSettings * _lockScreenParallaxSettings;
    PTOutlet * _resetWallpaperOutlet;
}

@property (nonatomic, retain) PBUIWallpaperParallaxSettings *homeScreenParallaxSettings;
@property (nonatomic, retain) PBUIWallpaperParallaxSettings *lockScreenParallaxSettings;
@property (nonatomic, retain) PTOutlet *resetWallpaperOutlet;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)homeScreenParallaxSettings;
- (id)lockScreenParallaxSettings;
- (id)parallaxSettingsForVariant:(long long)arg1;
- (id)resetWallpaperOutlet;
- (void)setDefaultValues;
- (void)setHomeScreenParallaxSettings:(id)arg1;
- (void)setLockScreenParallaxSettings:(id)arg1;
- (void)setResetWallpaperOutlet:(id)arg1;

@end
