
@interface HDClientDataCollectionTaskServer : HDStandardTaskServer <HDDataCollector, HKDataCollectorTaskServerInterface> {
    HDDataAggregator * _aggregator;
    HKSource * _clientSource;
    HKDataCollectorCollectionConfiguration * _collectionConfiguration;
    HKDataCollectorTaskServerConfiguration * _configuration;
    HDDataCollectorState * _dataCollectorState;
    HKDevice * _device;
    NSError * _fatalError;
    NSMutableDictionary * _lastDatumByDevice;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _registrationUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)beginCollectionForDataAggregator:(id)arg1 lastPersistedSensorDatum:(id)arg2;
- (bool)canResumeCollectionFromLastSensorDatum;
- (void)connectionConfigured;
- (void)connectionInvalidated;
- (void)dataAggregator:(id)arg1 didPersistDatums:(id)arg2 success:(bool)arg3 error:(id)arg4;
- (void)dataAggregator:(id)arg1 requestsCollectionThroughDate:(id)arg2 completion:(id /* block */)arg3;
- (void)dataAggregator:(id)arg1 wantsCollectionWithConfiguration:(id)arg2;
- (id)description;
- (id)exportedInterface;
- (id)identifierForDataAggregator:(id)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 batchUUID:(id)arg4 registrationUUID:(id)arg5 completion:(id /* block */)arg6;
- (void)remote_registerWithCompletion:(id /* block */)arg1;
- (void)remote_synchronizeWithCompletion:(id /* block */)arg1;
- (Class)sensorDatumClassForAggregator:(id)arg1;
- (id)sourceForDataAggregator:(id)arg1;

@end
