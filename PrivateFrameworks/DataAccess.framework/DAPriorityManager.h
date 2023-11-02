
@interface DAPriorityManager : NSObject {
    NSMutableDictionary * _cachedAppState;
    NSMapTable * _clientsToPriorityRequests;
    int  _currentPriority;
    long long  _foregroundDataclasses;
    RBSProcessMonitor * _processMonitor;
}

@property (nonatomic, retain) NSMutableDictionary *cachedAppState;
@property (nonatomic, retain) NSMapTable *clientsToPriorityRequests;
@property (nonatomic, readonly) int currentPriority;
@property (nonatomic) long long foregroundDataclasses;
@property (nonatomic, retain) RBSProcessMonitor *processMonitor;

+ (id)sharedManager;
+ (void)vendPriorityManagers;

- (void).cxx_destruct;
- (int)_recalculatePriority;
- (void)_setForegroundDataclasses:(long long)arg1;
- (void)_setNewPriority;
- (void)_updateForegroundDataclasses;
- (id)appIDsToDataclasses;
- (void)appWithBundleID:(id)arg1 isNowRunningAndVisible:(bool)arg2;
- (void)bumpDataclassesToUIPriority:(long long)arg1;
- (id)cachedAppState;
- (id)clientsToPriorityRequests;
- (int)currentPriority;
- (void)dealloc;
- (long long)foregroundDataclasses;
- (id)init;
- (id)processMonitor;
- (void)requestPriority:(int)arg1 forClient:(id)arg2 dataclasses:(long long)arg3;
- (void)setCachedAppState:(id)arg1;
- (void)setClientsToPriorityRequests:(id)arg1;
- (void)setForegroundDataclasses:(long long)arg1;
- (void)setProcessMonitor:(id)arg1;
- (void)setupProcessStateMonitor;
- (id)stateString;

@end
