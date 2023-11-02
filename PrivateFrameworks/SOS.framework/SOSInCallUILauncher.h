
@interface SOSInCallUILauncher : NSObject <SBSRemoteAlertHandleObserver, SOSProcessObserverDelegate> {
    SOSProcessObserver * _processObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SOSProcessObserver *processObserver;
@property (readonly) Class superclass;

+ (id)SOSRemoteAlertActivationReasonForSOSInCallUILaunchReason:(long long)arg1;
+ (id)sharedInCallUILauncher;

- (void).cxx_destruct;
- (void)launchInCallUIForReason:(long long)arg1 withRequestURL:(id)arg2 completion:(id /* block */)arg3;
- (id)processObserver;
- (void)processObserver:(id)arg1 bundleIdentifier:(id)arg2 didUpdateApplicationRunning:(bool)arg3;
- (void)setProcessObserver:(id)arg1;

@end
