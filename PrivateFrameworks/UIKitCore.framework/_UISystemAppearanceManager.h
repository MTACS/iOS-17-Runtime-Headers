
@interface _UISystemAppearanceManager : NSObject <_UISceneComponentProviding> {
    bool  _homeIndicatorAutoHidden;
    NSArray * _multitaskingDragExclusionRects;
    long long  _preferredInterfaceOrientation;
    UIWindow * _previousWindowDrivingSystemAppearance;
    unsigned long long  _screenEdgesDeferringSystemGestures;
    <BSInvalidatable> * _stateCaptureToken;
    unsigned long long  _supportedInterfaceOrientations;
    long long  _userInterfaceStyle;
    long long  _whitePointAdaptivityStyle;
    UIWindowScene * _windowScene;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool homeIndicatorAutoHidden;
@property (nonatomic, readonly) NSArray *multitaskingDragExclusionRects;
@property (nonatomic, readonly) long long preferredInterfaceOrientation;
@property (nonatomic) UIWindow *previousWindowDrivingSystemAppearance;
@property (nonatomic, readonly) unsigned long long screenEdgesDeferringSystemGestures;
@property (nonatomic, retain) <BSInvalidatable> *stateCaptureToken;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) long long whitePointAdaptivityStyle;
@property (nonatomic, retain) UIWindowScene *windowScene;

- (void).cxx_destruct;
- (id)_findWindowDrivingSystemAppearance;
- (void)_handleWindowVisibilityNotification:(id)arg1;
- (void)_logOrientationPreferencesChangeWithOldSupportedOrientations:(unsigned long long)arg1 newSupportedOrientations:(unsigned long long)arg2 oldPreferredOrientation:(long long)arg3 newPreferredOrientation:(long long)arg4 animationSettings:(id)arg5 fenced:(bool)arg6;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (void)_windowDrivingSystemAppearanceDidChange:(id)arg1;
- (void)dealloc;
- (bool)homeIndicatorAutoHidden;
- (id)initWithScene:(id)arg1;
- (id)multitaskingDragExclusionRects;
- (long long)preferredInterfaceOrientation;
- (id)previousWindowDrivingSystemAppearance;
- (unsigned long long)screenEdgesDeferringSystemGestures;
- (void)setPreviousWindowDrivingSystemAppearance:(id)arg1;
- (void)setStateCaptureToken:(id)arg1;
- (void)setWindowScene:(id)arg1;
- (id)stateCaptureToken;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateContainerBackgroundStyle;
- (void)updateHomeIndicatorAutoHidden;
- (void)updateMultitaskingDragExclusionRects;
- (void)updateScreenEdgesDeferringSystemGestures;
- (void)updateUserInterfaceStyle;
- (void)updateWhitePointAdaptivityStyle;
- (long long)userInterfaceStyle;
- (long long)whitePointAdaptivityStyle;
- (void)window:(id)arg1 didUpdateSupportedOrientations:(unsigned long long)arg2 preferredOrientation:(long long)arg3 prefersAnimation:(bool)arg4;
- (id)windowScene;

@end
