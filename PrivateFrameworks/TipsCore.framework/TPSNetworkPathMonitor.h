
@interface TPSNetworkPathMonitor : NSObject {
    NSObject<OS_nw_path> * _currentPath;
    NSObject<OS_dispatch_queue> * _monitorQueue;
    bool  _networkConstrained;
    bool  _networkExpensive;
    bool  _networkPathMonitorActive;
    bool  _networkReachable;
    NSObject<OS_dispatch_source> * _notifyTimer;
    NSMapTable * _observers;
    NSObject<OS_nw_path_monitor> * _pathMonitor;
    bool  _shouldNotify;
}

@property (nonatomic, retain) NSObject<OS_nw_path> *currentPath;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *monitorQueue;
@property (getter=isNetworkConstrained, nonatomic) bool networkConstrained;
@property (getter=isNetworkExpensive, nonatomic) bool networkExpensive;
@property (nonatomic) bool networkPathMonitorActive;
@property (getter=isNetworkReachable, nonatomic) bool networkReachable;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *notifyTimer;
@property (nonatomic, retain) NSMapTable *observers;
@property (nonatomic, retain) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (nonatomic) bool shouldNotify;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_cancelPendingNotifications;
- (void)_initializeMonitor;
- (void)_initializeMonitorIfNeeded;
- (void)_networkPathUpdated:(id)arg1;
- (void)_notifyObserversWithDelay:(double)arg1 usingBlock:(id /* block */)arg2;
- (void)_uninitializeMonitor;
- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (id)currentPath;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isNetworkConstrained;
- (bool)isNetworkError:(id)arg1;
- (bool)isNetworkExpensive;
- (bool)isNetworkReachable;
- (id)monitorQueue;
- (bool)networkPathMonitorActive;
- (id)notifyTimer;
- (id)observers;
- (id)pathMonitor;
- (void)removeObserver:(id)arg1;
- (void)setCurrentPath:(id)arg1;
- (void)setMonitorQueue:(id)arg1;
- (void)setNetworkConstrained:(bool)arg1;
- (void)setNetworkExpensive:(bool)arg1;
- (void)setNetworkPathMonitorActive:(bool)arg1;
- (void)setNetworkReachable:(bool)arg1;
- (void)setNotifyTimer:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPathMonitor:(id)arg1;
- (void)setShouldNotify:(bool)arg1;
- (bool)shouldNotify;
- (void)start;
- (void)stop;
- (bool)usesCellularConnection;
- (bool)usesWifiConnection;

@end
