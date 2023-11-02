
@interface EDClientResumer : NSObject <EDProtectedDataReconciliationHookResponder, EDResumable, EFContentProtectionObserver> {
    BKSProcessAssertion * _assertion;
    NSString * _bundleID;
    <EDClientStateReporting> * _clientState;
    EDPersistenceHookRegistry * _hookRegistry;
    NSObject<OS_dispatch_queue> * _queue;
    <EFScheduler> * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (id)signpostLog;

- (void).cxx_destruct;
- (void)contentProtectionStateChanged:(long long)arg1 previousState:(long long)arg2;
- (void)dealloc;
- (id)initWithClientBundleIdentifier:(id)arg1 hookRegistry:(id)arg2 clientState:(id)arg3;
- (void)invalidate;
- (void)persistenceDidReconcileProtectedData;
- (void)resumeForUpdates;
- (unsigned long long)signpostID;

@end
