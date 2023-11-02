
@interface CLMonitor : NSObject <CLIdentifiableClientProtocol> {
    CLConditionLedger * _conditionLedger;
    id /* block */  _eventHandler;
    void * _locationdConnection;
    NSString * _monitorName;
    NSString * _name;
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
@property (nonatomic, readonly) NSString *monitorName;
@property (nonatomic, readonly) NSArray *monitoredIdentifiers;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSData *storageToken;
@property (readonly) Class superclass;
@property (nonatomic) id /* block */ weakClient;

+ (void)_requestMonitorWithConfiguration:(id)arg1 locationManager:(id)arg2 completion:(id /* block */)arg3;
+ (void)addMonitorName:(id)arg1;
+ (bool)isMonitorNameInUse:(id)arg1;
+ (void)removeMonitorName:(id)arg1;
+ (void)requestMonitorWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestWithConfiguration:(id)arg1 locationManager:(id)arg2 completion:(id /* block */)arg3;
+ (id)sharedMonitorSet;

- (void)_addConditionForMonitoring:(id)arg1 identifier:(id)arg2 options:(unsigned long long)arg3 assumedState:(unsigned long long)arg4;
- (id)_getMonitoredIdentifiers;
- (id)_getMonitoringRecords;
- (void)_removeConditionFromMonitoringWithIdentifier:(id)arg1;
- (void)addConditionForMonitoring:(id)arg1 identifier:(id)arg2;
- (void)addConditionForMonitoring:(id)arg1 identifier:(id)arg2 assumedState:(unsigned long long)arg3;
- (void)addConditionForMonitoring:(id)arg1 identifier:(id)arg2 options:(unsigned long long)arg3 assumedState:(unsigned long long)arg4;
- (void)addConstraintForMonitoring:(id)arg1 identifier:(id)arg2;
- (void)addConstraintForMonitoring:(id)arg1 identifier:(id)arg2 assumedState:(unsigned long long)arg3;
- (void)createConnection;
- (void)dealloc;
- (void)destroyConnection;
- (id)getMonitorConfiguration;
- (void)handleMessageMonitor:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (unsigned long long)hash;
- (id)identityToken;
- (id)initWithLedgerName:(id)arg1 path:(id)arg2 onSilo:(id)arg3 authIdentity:(id)arg4 locationManager:(id)arg5 handler:(id /* block */)arg6;
- (void)manageConnection;
- (id)manager;
- (id)monitorName;
- (id)monitoredIdentifiers;
- (id)monitoringRecordForIdentifier:(id)arg1;
- (id)name;
- (void)removeConditionFromMonitoringWithIdentifier:(id)arg1;
- (void)removeConstraintFromMonitoringWithIdentifier:(id)arg1;
- (void)setIdentityToken:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setMonitoringEventHandler:(id /* block */)arg1;
- (void)setStorageToken:(id)arg1;
- (void)setWeakClient:(id /* block */)arg1;
- (id)storageToken;
- (void)updateEvent:(id)arg1 forIdentifier:(id)arg2;
- (void)updateEventReceivedFromDaemon:(id)arg1;
- (void)updateIdentityToken:(id)arg1 withStorageToken:(id)arg2;
- (id /* block */)weakClient;

@end
