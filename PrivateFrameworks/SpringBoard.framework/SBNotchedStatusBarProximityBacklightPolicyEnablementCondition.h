
@interface SBNotchedStatusBarProximityBacklightPolicyEnablementCondition : NSObject <BSInvalidatable, SBDeviceApplicationSceneHandleObserver, SBMainDisplaySceneManagerObserver, SBUIActiveOrientationObserver, SBWindowSceneStatusBarAssertionManagerObserver, UIStatusBarServerClient> {
    UIApplicationSceneSettingsDiffInspector * _applicationSceneSettingsDiffInspector;
    NSSet * _currentBackgroundActivityIdentifiers;
    <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate> * _delegate;
    bool  _invalidated;
    bool  _isEnabled;
    SBMainDisplaySceneManager * _mainDisplaySceneManager;
    SpringBoard * _orientationProvider;
    SBWindowSceneStatusBarAssertionManager * _statusBarAssertionManager;
    UIStatusBarServer * _statusBarConnection;
    double  _statusBarHeight;
    SBWindowSceneStatusBarManager * _windowSceneStatusBarManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) double enabledStatusBarHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_evaluateEnablement;
- (void)_setEnabled:(bool)arg1 statusBarHeight:(double)arg2;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)dealloc;
- (id)delegate;
- (double)enabledStatusBarHeight;
- (id)init;
- (id)initWithMainDisplaySceneManager:(id)arg1 windowSceneStatusBarManager:(id)arg2 statusBarServer:(id)arg3 orientationProvider:(id)arg4;
- (void)invalidate;
- (bool)isEnabled;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneManager:(id)arg1 didAddExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)sceneManager:(id)arg1 didRemoveExternalForegroundApplicationSceneHandle:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)statusBarAssertionManager:(id)arg1 statusBarSettingsDidChange:(id)arg2;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(bool)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const struct { bool x1[46]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; BOOL x55[100]; BOOL x56[100]; BOOL x57[256]; BOOL x58[256]; }*)arg2 withActions:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(unsigned long long)arg2;

@end
