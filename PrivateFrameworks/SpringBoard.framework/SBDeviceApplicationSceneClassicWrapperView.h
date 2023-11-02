
@interface SBDeviceApplicationSceneClassicWrapperView : UIView <PTSettingsKeyObserver> {
    SBAppSwitcherDefaults * _appSwitcherDefaults;
    bool  _canRasterize;
    <BSDefaultObserver> * _chamoisEnabledObserver;
    SBSwitcherChamoisSettings * _chamoisSettings;
    long long  _orientation;
    _SBDeviceApplicationSceneClassicHostPositioningView * _positioningView;
    bool  _preparingForUserDrivenClassicRotation;
    SBDeviceApplicationSceneHandle * _sceneHandle;
    long long  _startingOrientationForClassicPhoneAppRotation;
    bool  _suppressLayoutUpdatesForStartOfClassicPhoneAppRotation;
}

@property (nonatomic, readonly) NSArray *contentViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long orientation;
@property (nonatomic) bool preparingForUserDrivenClassicRotation;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *sceneHandle;
@property (nonatomic) long long startingOrientationForClassicPhoneAppRotation;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressLayoutUpdatesForStartOfClassicPhoneAppRotation;
@property (nonatomic, readonly) bool wantsBlackBackground;

+ (bool)shouldUseWrapperViewForSceneHandle:(id)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_effectiveSceneBounds;
- (bool)_isProbablyScreenSized;
- (bool)_shouldRasterizePositioningLayer;
- (void)_windowingModeChanged;
- (void)addContentView:(id)arg1;
- (id)contentViews;
- (void)dealloc;
- (id)initWithSceneHandle:(id)arg1;
- (void)layoutSubviews;
- (long long)orientation;
- (bool)preparingForUserDrivenClassicRotation;
- (void)removeContentView:(id)arg1;
- (id)sceneHandle;
- (void)setOrientation:(long long)arg1;
- (void)setPreparingForUserDrivenClassicRotation:(bool)arg1;
- (void)setStartingOrientationForClassicPhoneAppRotation:(long long)arg1;
- (void)setSuppressLayoutUpdatesForStartOfClassicPhoneAppRotation:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (long long)startingOrientationForClassicPhoneAppRotation;
- (bool)suppressLayoutUpdatesForStartOfClassicPhoneAppRotation;
- (bool)wantsBlackBackground;

@end
