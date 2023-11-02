
@interface HDProcessStateManager : NSObject <HDDiagnosticObject> {
    BKSApplicationStateMonitor * _applicationMonitor;
    <HDApplicationStateMonitorProvider> * _applicationStateMonitorProvider;
    NSObject<OS_dispatch_queue> * _clientCalloutQueue;
    NSSet * _foregroundClientBundleIdentifiers;
    NSHashTable * _foregroundClientProcessObservers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _processInfoByBundleID;
    NSMutableDictionary * _processObserversByBundleID;
    HDRBSProcessStateProvider * _rbsProcessStateProvider;
}

@property (nonatomic, readonly) <HDApplicationStateMonitorProvider> *applicationStateMonitorProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applicationIsForeground:(id)arg1;
- (unsigned int)applicationStateForBundleIdentifier:(id)arg1;
- (id)applicationStateMonitorProvider;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)init;
- (id)initWithApplicationStateMonitorProvider:(id)arg1;
- (bool)isApplicationFrontBoardVisibleForBundleIdentifier:(id)arg1;
- (bool)isApplicationInExtendedRuntimeSessionForBundleIdentifier:(id)arg1;
- (bool)isApplicationStateForegroundForBundleIdentifier:(id)arg1;
- (bool)isApplicationStateSuspendedForBundleIdentifier:(id)arg1;
- (int)processIdentifierForApplicationIdentifier:(id)arg1;
- (bool)processIsForeground:(int)arg1;
- (void)registerForegroundClientProcessObserver:(id)arg1;
- (bool)registerObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)unregisterForegroundClientProcessObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1 forBundleIdentifier:(id)arg2;

@end
