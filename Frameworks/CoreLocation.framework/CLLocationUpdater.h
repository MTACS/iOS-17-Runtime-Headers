
@interface CLLocationUpdater : NSObject <CLIdentifiableClientProtocol> {
    struct CLCallbackDropManager { 
        int (**_vptr$CLCallbackDropManager)(); 
        struct shared_ptr<int> { 
            int *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } fToken; 
    }  _callbackDropManager;
    id /* block */  _clientCallback;
    id /* block */  _connectionMessageHandler;
    double  _lastTimestamp;
    void * _locationdConnection;
    NSString * _messageName;
    NSMutableDictionary * _mutableMsgDictionary;
    bool  _shouldBeRunning;
    CLDispatchSilo * _silo;
    NSString * identityToken;
    CLLocationManager * manager;
    NSData * storageToken;
    id /* block */  weakClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identityToken;
@property (nonatomic, retain) CLLocationManager *manager;
@property bool shouldBeRunning;
@property (nonatomic, retain) NSData *storageToken;
@property (readonly) Class superclass;
@property (nonatomic) id /* block */ weakClient;

+ (id)_historicalUpdaterWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 dateInterval:(id)arg3 sampleCount:(int)arg4 queue:(id)arg5 handler:(id /* block */)arg6;
+ (id)_historicalUpdaterWithDateInterval:(id)arg1 sampleCount:(int)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
+ (id)_liveUpdaterWithConfiguration:(long long)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
+ (id)_liveUpdaterWithQueue:(id)arg1 handler:(id /* block */)arg2;
+ (id)historicalUpdaterWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 dateInterval:(id)arg3 sampleCount:(int)arg4 locationManager:(id)arg5 queue:(id)arg6 handler:(id /* block */)arg7;
+ (id)historicalUpdaterWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 dateInterval:(id)arg3 sampleCount:(int)arg4 queue:(id)arg5 handler:(id /* block */)arg6;
+ (id)historicalUpdaterWithDateInterval:(id)arg1 sampleCount:(int)arg2 locationManager:(id)arg3 queue:(id)arg4 handler:(id /* block */)arg5;
+ (id)historicalUpdaterWithDateInterval:(id)arg1 sampleCount:(int)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
+ (id)liveUpdaterWithConfiguration:(long long)arg1 locationManager:(id)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
+ (id)liveUpdaterWithConfiguration:(long long)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
+ (id)liveUpdaterWithQueue:(id)arg1 handler:(id /* block */)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cleanup;
- (void)createConnection;
- (void)dealloc;
- (void)destroyConnection;
- (void)handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)handleMessageHistoricalLocations:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)handleMessageHistoricalLocationsFinished:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)handleMessageLocation:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)handleMessageLocationUnavailable:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)identityToken;
- (id)initWithRegistrationMessageName:(const char *)arg1 messagePayload:(id)arg2 locationManager:(id)arg3 queue:(id)arg4 handler:(id /* block */)arg5;
- (void)invalidate;
- (void)manageConnection;
- (id)manager;
- (void)pause;
- (void)resume;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentityToken:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setShouldBeRunning:(bool)arg1;
- (void)setStorageToken:(id)arg1;
- (void)setWeakClient:(id /* block */)arg1;
- (bool)shouldBeRunning;
- (id)storageToken;
- (void)updateIdentityToken:(id)arg1 withStorageToken:(id)arg2;
- (id /* block */)weakClient;

@end
