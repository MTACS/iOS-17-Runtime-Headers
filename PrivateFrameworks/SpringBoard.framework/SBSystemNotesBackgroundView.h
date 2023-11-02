
@interface SBSystemNotesBackgroundView : UIView <PTSettingsKeyObserver, SBApplicationSceneBackgroundView> {
    SBSystemNotesAppearanceSettings * _appearanceSettings;
    UIVisualEffectView * _backgroundEffectView;
    UIView * _tintView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFullscreen, nonatomic) bool fullscreen;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsClassicModeBackground;
@property (nonatomic) bool shouldUseBrightMaterial;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transformOptions;
@property (nonatomic) long long wallpaperStyle;

- (void).cxx_destruct;
- (id)_backgroundColorFromSettings:(id)arg1;
- (void)_updateTintView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
