
@interface _CDContextualLocationRegistrationMonitor : NSObject <CLLocationManagerDelegate> {
    NSMutableDictionary * _effectiveBundleIDRegionInfos;
    NSMapTable * _effectiveBundleIDs;
    NSMutableDictionary * _managers;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _registrations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSMutableDictionary *effectiveBundleIDRegionInfos;
@property (nonatomic, readonly) NSMapTable *effectiveBundleIDs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *managers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSMutableSet *registrations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addRegistration:(id)arg1;
- (id)effectiveBundleIDRegionInfos;
- (id)effectiveBundleIDs;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (id)managers;
- (id)queue;
- (id)regionInfosForRegistration:(id)arg1;
- (id)registrations;
- (void)removeRegistration:(id)arg1;

@end
