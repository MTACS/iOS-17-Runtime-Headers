
@interface AKNetworkObserver : NSObject {
    NSMutableDictionary * _callbacksByObserver;
    bool  _isNetworkReachable;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSObject<OS_nw_path_monitor> * _pathMonitor;
}

@property (nonatomic, readonly) bool isNetworkReachable;

+ (id)sharedNetworkObserver;

- (void).cxx_destruct;
- (void)_onqueue_networkReachabilityDidChange;
- (void)_startPathMonitor;
- (void)_stopPathMonitor;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)init;
- (bool)isNetworkReachable;
- (void)removeNetworkReachableObserver:(id)arg1;

@end
