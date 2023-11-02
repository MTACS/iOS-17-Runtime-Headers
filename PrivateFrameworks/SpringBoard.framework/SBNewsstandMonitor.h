
@interface SBNewsstandMonitor : NSObject <FBProcessManagerObserver, FBProcessObserver> {
    NSArray * _deniedBundleIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_deniedBundleIdentifiers;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addObserverForBackgroundUpdateDenyListChange;
- (void)_handleBackgroundUpdateDenyListChange;
- (id)init;
- (void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;

@end
