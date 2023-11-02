
@interface SBExternalDisplayWallpaperViewController : UIViewController <SBExternalDisplayWallpaperConfigurations> {
    UIView * _wallpaperContainerView;
    SBExternalDisplayWallpaperEffectView * _wallpaperEffectView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *wallpaperContainerView;
@property (nonatomic, retain) SBExternalDisplayWallpaperEffectView *wallpaperEffectView;

- (void).cxx_destruct;
- (bool)enableBlurEffects;
- (id)initWithWindowScene:(id)arg1;
- (void)setWallpaperContainerView:(id)arg1;
- (void)setWallpaperEffectView:(id)arg1;
- (id)wallpaperContainerView;
- (id)wallpaperEffectView;

@end
