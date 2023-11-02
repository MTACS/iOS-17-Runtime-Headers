
@interface SBSystemShellEmbeddedDisplayController : NSObject <SBDisplayControllerProviding, SBDisplayControlling> {
    SBAppSwitcherDefaults * _appSwitcherDefaults;
    SBDisplayAssertion * _displayAssertion;
    FBSDisplayConfiguration * _displayConfiguration;
    long long  _initialOrientation;
    SBSceneManager * _sbSceneManager;
    FBScene * _scene;
    FBSceneManager * _sceneManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createSystemShellSceneWithOrientation:(long long)arg1;
- (void)_updateDisplayAssertionPreferences;
- (void)_updateSceneSettings;
- (void)connectToDisplayIdentity:(id)arg1 configuration:(id)arg2 displayManager:(id)arg3 sceneManager:(id)arg4 caDisplayQueue:(id)arg5 assertion:(id)arg6;
- (void)dealloc;
- (void)displayAssertion:(id)arg1 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)arg2;
- (void)displayAssertion:(id)arg1 didReceiveNewDeactivationReasons:(unsigned long long)arg2;
- (void)displayAssertionDidGainControlOfDisplay:(id)arg1;
- (void)displayAssertionDidInvalidate:(id)arg1;
- (id)displayControllerInfoForConnectingDisplay:(id)arg1 configuration:(id)arg2;
- (void)displayIdentityDidDisconnect:(id)arg1;
- (void)displayIdentityDidUpdate:(id)arg1 configuration:(id)arg2;
- (id)initWithAppSwitcherDefaults:(id)arg1 sceneManager:(id)arg2 initialOrientation:(long long)arg3;

@end
