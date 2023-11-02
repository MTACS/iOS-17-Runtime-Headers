
@interface EXBDisplayEndpointHostComponent : FBSSceneComponent <EXBDisplayAssertionDelegate, FBSceneComponent> {
    int  _configured;
    <EXBDisplayEndpointHostComponentDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EXBDisplayEndpointHostComponentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) EXBDisplayArrangementItem *displayArrangementItem;
@property (nonatomic, readonly, copy) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsControlOfDisplay;

+ (id)settingsProtocol;

- (void).cxx_destruct;
- (void)configureForDisplayConfiguration:(id)arg1 priorityLevel:(unsigned long long)arg2 deactivationReasons:(unsigned long long)arg3;
- (id)delegate;
- (id)displayArrangementItem;
- (void)displayAssertion:(id)arg1 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)arg2;
- (void)displayAssertion:(id)arg1 didReceiveNewDeactivationReasons:(unsigned long long)arg2 previousDeactivationReasons:(unsigned long long)arg3;
- (void)displayAssertionDidGainControlOfDisplay:(id)arg1 previousDeactivationReasons:(unsigned long long)arg2;
- (id)displayConfigurationRequest;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)updateDisplayConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)updateRootWindow:(id)arg1 completion:(id /* block */)arg2;
- (bool)wantsControlOfDisplay;

@end
