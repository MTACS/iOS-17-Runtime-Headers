
@interface SVXSystemObserver : NSObject <AFDeviceContextConnectionDelegate, SVXModuleInstance, SVXSessionActivityListening> {
    SVXDeviceContextAnnouncer * _deviceContextAnnouncer;
    AFDeviceContextConnection * _deviceContextConnection;
    SVXModule * _module;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_logSnapshot;
- (void)_startObservingDeviceContext;
- (void)_startObservingInfo;
- (void)_stopObservingDeviceContext;
- (void)_stopObservingInfo;
- (void)addDeviceContextListener:(id)arg1;
- (void)audioSessionDidBecomeActive:(bool)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3;
- (void)audioSessionWillBecomeActive:(bool)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3;
- (void)dealloc;
- (void)deviceContextConnection:(id)arg1 didUpdateLocalDeviceContext:(id)arg2;
- (void)deviceContextConnectionDidInvalidate:(id)arg1;
- (void)getLocalDeviceContextWithCompletion:(id /* block */)arg1;
- (id)initWithModule:(id)arg1;
- (void)removeDeviceContextListener:(id)arg1;
- (void)sessionDidBecomeActiveWithActivationContext:(id)arg1 turnID:(id)arg2;
- (void)sessionDidChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)sessionDidFailAppLaunchWithBundleIdentifier:(id)arg1;
- (void)sessionDidResignActiveWithDeactivationContext:(id)arg1;
- (void)sessionDidStartSoundWithID:(long long)arg1;
- (void)sessionDidStopSoundWithID:(long long)arg1 error:(id)arg2;
- (void)sessionWillBecomeActiveWithActivationContext:(id)arg1 turnID:(id)arg2;
- (void)sessionWillChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)sessionWillPresentFeedbackWithDialogIdentifier:(id)arg1;
- (void)sessionWillProcessAppLaunchWithBundleIdentifier:(id)arg1;
- (void)sessionWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2;
- (void)sessionWillStartSoundWithID:(long long)arg1;
- (void)startWithModuleInstanceProvider:(id)arg1 platformDependencies:(id)arg2;
- (void)stopWithModuleInstanceProvider:(id)arg1;

@end
