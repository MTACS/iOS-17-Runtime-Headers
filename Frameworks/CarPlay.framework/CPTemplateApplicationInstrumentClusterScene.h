
@interface CPTemplateApplicationInstrumentClusterScene : UIScene <CRSUIClusterZoomActionDelegate, CRSUIInstrumentClusterSettingsObserving, UICoordinateSpace, _UIContextBinderContextCreationPolicyHolding, _UISceneSettingsDiffAction, _UISceneUIWindowHosting> {
    long long  _contentStyle;
    _UIContextBinder * _contextBinder;
    <NSObject> * _didFinishLaunchingObserver;
    CPInstrumentClusterController * _instrumentClusterController;
    UIWindow * _instrumentClusterWindow;
    CPUIContentStyleDiffInspector * _mapStyleInspector;
    bool  _sceneWillConnect;
    <NSObject> * _sceneWillConnectObserver;
    UIScreen * _screen;
    long long  _screenRequestedOverscanCompensation;
    UITraitCollection * _traitCollection;
}

@property (nonatomic, readonly) <UICoordinateSpace> *_coordinateSpace;
@property (nonatomic, readonly) long long _interfaceOrientation;
@property (nonatomic, readonly) UIScreen *_screen;
@property (nonatomic, readonly) UIStatusBarManager *_statusBarManager;
@property (nonatomic, readonly) UITraitCollection *_traitCollection;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) long long contentStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <CPTemplateApplicationInstrumentClusterSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CPInstrumentClusterController *instrumentClusterController;
@property (nonatomic, retain) UIWindow *instrumentClusterWindow;
@property (nonatomic, retain) CPUIContentStyleDiffInspector *mapStyleInspector;
@property (readonly) Class superclass;

+ (bool)_hostsWindows;

- (void).cxx_destruct;
- (id)_allWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2;
- (void)_attachWindow:(id)arg1;
- (id)_clusterSettings;
- (id)_componentForKey:(id)arg1;
- (id)_coordinateSpace;
- (id)_definition;
- (void)_deliverControllerToDelegate;
- (void)_detachWindow:(id)arg1;
- (id)_fbsSceneLayerForWindow:(id)arg1;
- (long long)_interfaceOrientation;
- (void)_invalidate;
- (long long)_mapStyle;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (bool)_permitContextCreationForBindingDescription:(struct { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; })arg1;
- (void)_readySceneForConnection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceBounds;
- (void)_refreshTraitCollection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsetsForInterfaceOrientation:(long long)arg1;
- (id)_screen;
- (id)_templateSettings;
- (id)_traitCollection;
- (void)_updateContentStyle;
- (void)_updateSceneTraitsAndPushTraitsToScreen:(bool)arg1;
- (void)_updateVisibleWindowOrderWithTest:(id /* block */)arg1;
- (void)_windowUpdatedProperties:(id)arg1;
- (void)_windowUpdatedVisibility:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (unsigned long long)compassSetting;
- (long long)contentStyle;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toCoordinateSpace:(id)arg2;
- (void)handleZoomInDirection:(long long)arg1;
- (id)initWithSession:(id)arg1 connectionOptions:(id)arg2;
- (id)instrumentClusterController;
- (id)instrumentClusterWindow;
- (unsigned long long)itemType;
- (id)mapStyleInspector;
- (void)setInstrumentClusterController:(id)arg1;
- (void)setInstrumentClusterWindow:(id)arg1;
- (void)setMapStyleInspector:(id)arg1;
- (unsigned long long)speedLimitSetting;
- (void)updateSceneForNewCompassSetting;
- (void)updateSceneForNewItemTypeSetting;
- (void)updateSceneForNewSpeedLimitSetting;

@end
