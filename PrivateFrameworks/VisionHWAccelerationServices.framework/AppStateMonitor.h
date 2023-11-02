
@interface AppStateMonitor : NSObject <AppStateEventListenerDelegate> {
    NSMutableDictionary * _appBundlesMonitored;
    AppEventListener * _appEventListener;
    NSMutableDictionary * _appsWithStates;
    bool  _handlesRnf;
    bool  _hasAnyForegroundApp;
    NSString * _notificationNameAppForegroundStateChanged;
    NSString * _notificationNameAppsWithStatesChanged;
    NSString * _notificationNameHasAnyForegroundAppChanged;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAnyForegroundApp;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)foregroundAppKeys;
+ (id)getAppsWithStates;
+ (bool)hasAnyForegroundApp;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_removeStateTracker:(id)arg1 hadForeground:(bool*)arg2 hasForeground:(bool*)arg3;
- (bool)_trackerSetHasForeground:(id)arg1;
- (bool)currentForegroundStateForProcessWithPid:(int)arg1;
- (void)enable;
- (id)foregroundAppKeys;
- (id)getAppsWithStates;
- (void)handleStateUpdate:(id)arg1 forProcess:(id)arg2;
- (bool)hasAnyForegroundApp;
- (bool)identifierShouldBeIgnored:(id)arg1;
- (id)init;
- (id)queue;
- (bool)rbsProcessStateToForeground:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)trackerForPid:(int)arg1;

@end
