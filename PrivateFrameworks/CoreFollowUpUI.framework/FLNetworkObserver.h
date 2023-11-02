
@interface FLNetworkObserver : NSObject {
    NSMutableDictionary * _invocationByObserver;
    bool  _isNetworkReachable;
    bool  _isWiFiEnabled;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSObject<OS_nw_path_monitor> * _pathMonitor;
}

@property (readonly) bool isAirplaneModeActiveWithoutWiFi;
@property (readonly) bool isNetworkReachable;

+ (id)sharedNetworkObserver;

- (void).cxx_destruct;
- (id)_init;
- (bool)_isWiFiEnabled;
- (void)_networkReachabilityDidChange;
- (void)_startPathMonitor;
- (void)_stopPathMonitor;
- (id)addNetworkReachableBlock:(id /* block */)arg1;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (void)disableAirplaneMode;
- (id)init;
- (bool)isAirplaneModeActiveWithoutWiFi;
- (bool)isNetworkReachable;
- (void)removeNetworkReachableObserver:(id)arg1;

@end
