
@interface DBHomeManager : NSObject <DBHomeKitResourceProvider, HMHomeManagerDelegate> {
    HMFLocationAuthorization * _homeLocationAuthorization;
    HMHomeManager * _homeManager;
    NSDictionary * _homes;
    DBLocationManager * _locationManager;
    DBNetworkPathMonitor * _networkPathMonitor;
    CARObserverHashTable * _observers;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMFLocationAuthorization *homeLocationAuthorization;
@property (nonatomic, retain) HMHomeManager *homeManager;
@property (nonatomic, retain) NSDictionary *homes;
@property (nonatomic, retain) DBLocationManager *locationManager;
@property (nonatomic, retain) DBNetworkPathMonitor *networkPathMonitor;
@property (retain) CARObserverHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_authorizeHomeManager;
- (void)_setupHomeManager;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)homeLocationAuthorization;
- (id)homeManager;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)homes;
- (id)init;
- (id)locationManager;
- (id)networkPathMonitor;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setHomeLocationAuthorization:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setHomes:(id)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setNetworkPathMonitor:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
