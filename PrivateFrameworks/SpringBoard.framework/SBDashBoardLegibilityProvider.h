
@interface SBDashBoardLegibilityProvider : NSObject <CSLegibilityProviding, PBUIWallpaperObserver> {
    <CSLegibilityProviderDelegate> * _legibilityProviderDelegate;
    SBWallpaperController * _wallpaperController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CSLegibilityProviderDelegate> *legibilityProviderDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBWallpaperController *wallpaperController;

- (void).cxx_destruct;
- (void)_notifyDelegate;
- (id)_wallpaperLegibilitySettings;
- (id)currentLegibilitySettings;
- (id)init;
- (id)initWithWallpaperController:(id)arg1;
- (id)legibilityProviderDelegate;
- (void)setLegibilityProviderDelegate:(id)arg1;
- (void)setWallpaperController:(id)arg1;
- (id)wallpaperController;
- (void)wallpaperDidChangeForVariant:(long long)arg1;
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;

@end
