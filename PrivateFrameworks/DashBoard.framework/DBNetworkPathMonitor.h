
@interface DBNetworkPathMonitor : NSObject {
    NSMutableSet * _activeAssertions;
    NSObject<OS_nw_path> * _currentPath;
    long long  _networkPath;
    bool  _networkPathMonitorActive;
    bool  _networkReachable;
    CARObserverHashTable * _observers;
    NSObject<OS_nw_path_monitor> * _pathMonitor;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSMutableSet *activeAssertions;
@property (nonatomic, retain) NSObject<OS_nw_path> *currentPath;
@property (nonatomic) long long networkPath;
@property (nonatomic) bool networkPathMonitorActive;
@property (getter=isNetworkReachable, nonatomic) bool networkReachable;
@property (retain) CARObserverHashTable *observers;
@property (nonatomic, retain) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_networkPathUpdated:(id)arg1;
- (void)_startNetworkPathMonitorNow;
- (void)_stopNetworkPathMonitorNow;
- (id)activeAssertions;
- (void)addObserver:(id)arg1;
- (id)currentPath;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isNetworkReachable;
- (long long)networkPath;
- (bool)networkPathMonitorActive;
- (id)observers;
- (id)pathMonitor;
- (void)removeObserver:(id)arg1;
- (void)setCurrentPath:(id)arg1;
- (void)setNetworkPath:(long long)arg1;
- (void)setNetworkPathMonitorActive:(bool)arg1;
- (void)setNetworkReachable:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setPathMonitor:(id)arg1;
- (void)startNetworkPathMonitorWithIdentifier:(id)arg1;
- (void)stopNetworkPathMonitorWithIdentifier:(id)arg1;
- (id)workQueue;

@end
