
@interface SBExternalDisplayCoverSheetViewController : UIViewController <SBExternalDisplayWallpaperConfigurations, SBFZStackParticipantDelegate, SBWallpaperEffectViewFactory> {
    SBBacklightController * _backlightController;
    SBFloatingDockBehaviorAssertion * _externalDisplayFloatingDockBehaviorAssertion;
    bool  _isPresented;
    SBWindowScene * _sbWindowScene;
    UIView * _wallpaperContainerView;
    UIView * _wallpaperEffectView;
    <SBWallpaperEffectViewFactory> * _wallpaperEffectViewFactory;
    SBFZStackParticipant * _zStackParticipant;
}

@property (nonatomic, readonly) SBBacklightController *backlightController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBFloatingDockBehaviorAssertion *externalDisplayFloatingDockBehaviorAssertion;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPresented;
@property (getter=_sbWindowScene, nonatomic) SBWindowScene *sbWindowScene;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *wallpaperContainerView;
@property (nonatomic, retain) UIView *wallpaperEffectView;
@property (nonatomic, readonly) <SBWallpaperEffectViewFactory> *wallpaperEffectViewFactory;
@property (nonatomic, retain) SBFZStackParticipant *zStackParticipant;

- (void).cxx_destruct;
- (id)_floatingDockController;
- (id)_initWithWindowScene:(id)arg1 wallpaperEffectViewFactory:(id)arg2;
- (id)_sbWindowScene;
- (id)backlightController;
- (void)cleanupAfterDismissal;
- (void)dealloc;
- (bool)enableBlurEffects;
- (id)externalDisplayFloatingDockBehaviorAssertion;
- (bool)isPresented;
- (id)newWallpaperEffectView;
- (void)prepareForPresentation;
- (void)setExternalDisplayFloatingDockBehaviorAssertion:(id)arg1;
- (void)setIsPresented:(bool)arg1;
- (void)setSbWindowScene:(id)arg1;
- (void)setWallpaperContainerView:(id)arg1;
- (void)setWallpaperEffectView:(id)arg1;
- (void)setZStackParticipant:(id)arg1;
- (void)viewDidLoad;
- (id)wallpaperContainerView;
- (id)wallpaperEffectView;
- (id)wallpaperEffectViewFactory;
- (id)zStackParticipant;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end
