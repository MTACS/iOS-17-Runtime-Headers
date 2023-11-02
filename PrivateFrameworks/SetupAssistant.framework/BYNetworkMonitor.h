
@interface BYNetworkMonitor : NSObject {
    int  _currentNetworkType;
    NSMutableDictionary * _networkTypeBlocks;
    NSObject<OS_dispatch_queue> * _networkTypeQueue;
    NSHashTable * _observers;
    struct __SCNetworkReachability { } * _reachability;
}

+ (bool)holdsWiFiAssertion;
+ (void)setHoldsWiFiAssertion:(bool)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_initNetworkObservation;
- (int)_networkTypeFromFlags:(unsigned int)arg1;
- (void)addObserver:(id)arg1;
- (int)currentNetworkType;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)setCurrentNetworkType:(int)arg1;
- (void)withMinimumNetworkType:(int)arg1 timeout:(double)arg2 runBlock:(id /* block */)arg3;

@end
