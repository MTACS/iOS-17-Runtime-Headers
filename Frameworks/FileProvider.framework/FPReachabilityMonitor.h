
@interface FPReachabilityMonitor : NSObject {
    <NSObject> * _accountDidChangeNotificationObserver;
    NSNumber * _isCellularEnabledForDocumentsAndData;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _reachabilityFlags;
    NSHashTable * _reachabilityObservers;
    struct __SCNetworkReachability { } * _reachabilityRef;
}

@property (nonatomic) unsigned int reachabilityFlags;

+ (id)_notifAccountStore;
+ (bool)isNetworkReachableForFlags:(unsigned int)arg1;
+ (id)sharedReachabilityMonitor;

- (void).cxx_destruct;
- (void)_accountDidChange;
- (bool)_isCellularAllowedForBR;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (bool)isNetworkReachableForBundle:(id)arg1;
- (unsigned int)reachabilityFlags;
- (void)removeObserver:(id)arg1;
- (void)setReachabilityFlags:(unsigned int)arg1;

@end
