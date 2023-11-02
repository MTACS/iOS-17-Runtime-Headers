
@interface HDAppLauncher : NSObject <HDAssertionObserver, HDProcessStateObserver> {
    HDAssertionManager * _assertionManager;
    double  _baseLaunchDelay;
    double  _launchCountResetThreshold;
    NSMutableSet * _launchingProcessBundleIdentifiers;
    long long  _maxLaunchCount;
    NSMutableSet * _monitoredProcessBundleIdentifiers;
    FBSOpenApplicationService * _openApplicationService;
    HDProcessStateManager * _processStateManager;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _registeredAssertionsByIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (id)initWithProcessStateManager:(id)arg1 openApplicationService:(id)arg2;
- (void)processTerminated:(id)arg1;
- (id)takeKeepAliveAssertionForApplicationBundleIdentifier:(id)arg1 processBundleIdentifier:(id)arg2 payloadOptions:(id)arg3;
- (bool)unitTest_hasAssertionForBundleIdentifier:(id)arg1;
- (void)unitTest_setBaseLaunchDelay:(double)arg1 launchCountResetThreshold:(double)arg2 maxLaunchCount:(long long)arg3;

@end
