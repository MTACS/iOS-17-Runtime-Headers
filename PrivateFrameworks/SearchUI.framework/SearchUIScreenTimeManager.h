
@interface SearchUIScreenTimeManager : NSObject {
    NSCache * _definitelyCorrectCache;
    DMFApplicationPolicyMonitor * _monitor;
    NSCache * _possiblyCorrectCache;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (retain) NSCache *definitelyCorrectCache;
@property (retain) DMFApplicationPolicyMonitor *monitor;
@property (retain) NSCache *possiblyCorrectCache;
@property (retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)bundleIdIsScreenTimeBlocked:(id)arg1 completion:(id /* block */)arg2;
- (bool)cachedScreenTimeValueForBundleIdentifier:(id)arg1;
- (id)definitelyCorrectCache;
- (void)getScreenTimeBlockedForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)monitor;
- (id)possiblyCorrectCache;
- (void)purgeCache;
- (id)serialQueue;
- (void)setDefinitelyCorrectCache:(id)arg1;
- (void)setMonitor:(id)arg1;
- (void)setPossiblyCorrectCache:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
