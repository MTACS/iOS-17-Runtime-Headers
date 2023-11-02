
@interface NWAppStateHandler : NSObject <NWAppStateEventListenerDelegate> {
    NSMutableDictionary * _appBundlesMonitored;
    NSMutableDictionary * _appsWithStates;
    bool  _handlesRnf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_removeStateTracker:(id)arg1;
- (bool)currentForegroundStateForProcessWithPid:(int)arg1;
- (void)handleStateUpdate:(id)arg1 forProcess:(id)arg2;
- (bool)identifierShouldBeIgnored:(id)arg1;
- (id)init;
- (bool)rbsProcessStateToForeground:(id)arg1;
- (id)trackerForPid:(int)arg1;

@end
