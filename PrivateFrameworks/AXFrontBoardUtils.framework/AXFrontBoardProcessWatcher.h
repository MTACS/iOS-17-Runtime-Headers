
@interface AXFrontBoardProcessWatcher : NSObject <FBProcessManagerObserver, FBProcessObserver> {
    AXDispatchTimer * _appTransitionTimer;
    NSSet * _cachedFocusedAppPIDs;
    id  _observerToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)accessibilitySpokenNameForProcess:(id)arg1;
+ (id)processForBundleIdentifier:(id)arg1;
+ (void)validateFocusedAppsWithEvent:(long long)arg1;

- (void).cxx_destruct;
- (id)_processDescriptionForPID:(int)arg1;
- (bool)_processStateChangeIsTaskStateChangeFrom:(id)arg1 to:(id)arg2;
- (bool)_processStateChangeIsVisibilityStateChangeFrom:(id)arg1 to:(id)arg2;
- (void)_validateFocusedApps:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;
- (void)processDidExit:(id)arg1;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;

@end
