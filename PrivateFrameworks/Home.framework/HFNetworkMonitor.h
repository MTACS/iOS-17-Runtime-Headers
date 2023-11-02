
@interface HFNetworkMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSNumber * _currentNetworkPathIsExpensive;
    int  _currentNetworkPathStatus;
    bool  _hasMonitoredNetworkBefore;
    bool  _isMonitoringNetwork;
    NSObject<OS_nw_path_monitor> * _networkPathMonitor;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSNumber *currentNetworkPathIsExpensive;
@property (nonatomic) int currentNetworkPathStatus;
@property (nonatomic) bool hasMonitoredNetworkBefore;
@property (nonatomic) bool isMonitoringNetwork;
@property (nonatomic, readonly) bool isNetworkAvailable;
@property (nonatomic, readonly) bool isNetworkExpensive;
@property (nonatomic, retain) NSObject<OS_nw_path_monitor> *networkPathMonitor;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)_addObserver:(id)arg1;
- (void)_notifyObserver:(id)arg1 networkIsAvailable:(bool)arg2;
- (void)_notifyObserver:(id)arg1 networkIsExpensive:(bool)arg2;
- (id)_observers;
- (unsigned long long)_removeObserver:(id)arg1;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (id)accessQueue;
- (void)addObserver:(id)arg1;
- (id)currentNetworkPathIsExpensive;
- (int)currentNetworkPathStatus;
- (bool)hasMonitoredNetworkBefore;
- (id)init;
- (bool)isMonitoringNetwork;
- (bool)isNetworkAvailable;
- (bool)isNetworkExpensive;
- (id)networkPathMonitor;
- (void)removeObserver:(id)arg1;
- (void)setAccessQueue:(id)arg1;
- (void)setCurrentNetworkPathIsExpensive:(id)arg1;
- (void)setCurrentNetworkPathStatus:(int)arg1;
- (void)setHasMonitoredNetworkBefore:(bool)arg1;
- (void)setIsMonitoringNetwork:(bool)arg1;
- (void)setNetworkPathMonitor:(id)arg1;

@end
