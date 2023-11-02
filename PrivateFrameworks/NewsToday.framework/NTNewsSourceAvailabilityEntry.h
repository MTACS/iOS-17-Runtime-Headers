
@interface NTNewsSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry> {
    FCNewsAvailabilityMonitor * _NewsAvailabilityMonitor;
    id /* block */  _availabilityChangedNotificationBlock;
    bool  _available;
    FCNetworkReachability * _networkReachability;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) FCNewsAvailabilityMonitor *NewsAvailabilityMonitor;
@property (nonatomic, copy) id /* block */ availabilityChangedNotificationBlock;
@property (getter=isAvailable, nonatomic) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLikelyAvailable, nonatomic, readonly) bool likelyAvailable;
@property (nonatomic, retain) FCNetworkReachability *networkReachability;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) Class todayResultsFetchDescriptorClass;

- (void).cxx_destruct;
- (id)NewsAvailabilityMonitor;
- (bool)_isAvailable;
- (bool)_isAvailableAssumingStoreFrontIsSupported:(bool)arg1;
- (void)_updateAvailability;
- (id /* block */)availabilityChangedNotificationBlock;
- (void)dealloc;
- (id)init;
- (id)initWithNetworkReachability:(id)arg1 processVariant:(unsigned long long)arg2 queue:(id)arg3;
- (bool)isAvailable;
- (bool)isLikelyAvailable;
- (id)networkReachability;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)queue;
- (void)setAvailabilityChangedNotificationBlock:(id /* block */)arg1;
- (void)setAvailable:(bool)arg1;
- (void)setNetworkReachability:(id)arg1;
- (void)setNewsAvailabilityMonitor:(id)arg1;
- (void)setQueue:(id)arg1;
- (Class)todayResultsFetchDescriptorClass;

@end
