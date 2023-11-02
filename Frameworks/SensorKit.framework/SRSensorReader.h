
@interface SRSensorReader : NSObject <SRAuthorizationClientDelegate, SRDaemonNotificationDelegate> {
    NSDate * __lastModifiedAuthorizationTime;
    _Atomic int  _authState;
    SRAuthorizationClient * _authorizationClient;
    NSString * _bundleId;
    bool  _bypassHoldingPeriod;
    NSString * _canonicalSensor;
    NSXPCConnection * _connection;
    bool  _connectionDidInvalidate;
    SRDaemonNotification * _daemonNotification;
    SRDatastore * _datastore;
    <SRSensorReaderDelegate> * _delegate;
    NSDictionary * _deviceDetails;
    double  _earliestEligibleTime;
    Class  _exportingSampleClass;
    NSDictionary * _nextDatastoreFiles;
    NSString * _requestedSensor;
    Class  _sampleClass;
    double  _serviceStartTime;
}

@property (retain) NSDate *_lastModifiedAuthorizationTime;
@property (retain) SRAuthorizationClient *authorizationClient;
@property (readonly) long long authorizationStatus;
@property (copy) NSString *bundleId;
@property (nonatomic) bool bypassHoldingPeriod;
@property (copy) NSString *canonicalSensor;
@property (nonatomic, retain) NSXPCConnection *connection;
@property bool connectionDidInvalidate;
@property (readonly, retain) SRDatastore *datastore;
@property (readonly, copy) NSString *debugDescription;
@property <SRSensorReaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double earliestEligibleTime;
@property (nonatomic, readonly) Class exportingSampleClass;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *nextDatastoreFiles;
@property (retain) NSString *requestedSensor;
@property (nonatomic, readonly) Class sampleClass;
@property (readonly, copy) NSString *sensor;
@property (nonatomic, readonly) double serviceStartTime;
@property (readonly) Class superclass;

+ (void)_requestAuthorizationMigrationForSensors:(id)arg1 completion:(id /* block */)arg2;
+ (void)authorizationRequestStatusForBundle:(id)arg1 sensors:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)clientInterface;
+ (id)connectionToDaemon;
+ (id /* block */)createExportDataForServices:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (id /* block */)createExportDataWithCompletionHandler:(id /* block */)arg1;
+ (void)initialize;
+ (id)new;
+ (id)remoteInterface;
+ (void)requestAuthorizationForBundle:(id)arg1 sensors:(id)arg2 legacyPromptErrorBehavior:(bool)arg3 withCompletionHandler:(id /* block */)arg4;
+ (void)requestAuthorizationForBundle:(id)arg1 sensors:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)requestAuthorizationForSensors:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_lastModifiedAuthorizationTime;
- (void)_startRecordingWithSensorConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_updateAuthorizationStatusWithAuthorizedServices:(id)arg1 deniedServices:(id)arg2 dataCollectionEnabled:(bool)arg3 onboardingCompleted:(bool)arg4 lastModifiedTimes:(id)arg5 forBundleIdentifier:(id)arg6;
- (bool)_updateAuthorizationStatusWithAuthorizedServices:(id)arg1 deniedServices:(id)arg2 dataCollectionEnabled:(bool)arg3 onboardingCompleted:(bool)arg4 lastModifiedTimes:(id)arg5 forBundleIdentifier:(id)arg6 previousAuthorizationStatus:(long long)arg7;
- (id)authorizationClient;
- (long long)authorizationStatus;
- (void)authorizedServicesDidChange:(id)arg1 deniedServices:(id)arg2 dataCollectionEnabled:(bool)arg3 onboardingCompleted:(bool)arg4 lastModifiedTimes:(id)arg5 forBundleIdentifier:(id)arg6;
- (id)bundleId;
- (bool)bypassHoldingPeriod;
- (id)canonicalSensor;
- (id)connection;
- (bool)connectionDidInvalidate;
- (void)continueFetchRequest:(id)arg1 from:(double)arg2 to:(double)arg3 withDatastoreFiles:(id)arg4 callback:(id /* block */)arg5;
- (id /* block */)createExportDataWithCompletionHandler:(id /* block */)arg1;
- (void)daemonNotificationDaemonDidStart:(id)arg1;
- (id)datastore;
- (void)dealloc;
- (id)delegate;
- (void)didChangeAuthorizationStatus:(long long)arg1;
- (void)didCompleteFetch:(id)arg1;
- (void)didFetchDevices:(id)arg1;
- (double)earliestEligibleTime;
- (Class)exportingSampleClass;
- (void)fetch:(id)arg1;
- (void)fetchDevices;
- (void)fetchDevices:(id /* block */)arg1;
- (void)fetchDevicesDidFailWithError:(id)arg1;
- (void)fetchDevicesWithRetryAttempt:(int)arg1;
- (void)fetchReaderMetadata;
- (void)fetchSampleBytesFrom:(double)arg1 to:(double)arg2 inSegment:(id)arg3 fetchRequest:(id)arg4 retryAttempt:(long long)arg5 sampleCallback:(id /* block */)arg6;
- (void)fetchSampleBytesFrom:(double)arg1 to:(double)arg2 inSegment:(id)arg3 fetchRequest:(id)arg4 sampleCallback:(id /* block */)arg5;
- (bool)fetchingRequest:(id)arg1 didFetchResult:(id)arg2;
- (void)fetchingRequest:(id)arg1 failedWithError:(id)arg2;
- (id)init;
- (id)initWithSensor:(id)arg1;
- (id)initWithSensor:(id)arg1 bundle:(id)arg2;
- (id)initWithSensor:(id)arg1 xpcConnection:(id)arg2 daemonNotification:(id)arg3 authorizationClient:(id)arg4 bundleId:(id)arg5;
- (bool)isAuthorized;
- (id)nextDatastoreFiles;
- (id)requestedSensor;
- (void)resetDatastoreFiles:(id)arg1;
- (Class)sampleClass;
- (id)sensor;
- (void)sensorReaderDidStopRecording;
- (void)sensorReaderWillStartRecording;
- (double)serviceStartTime;
- (void)setAuthorizationClient:(id)arg1;
- (void)setAuthorizationStatus:(long long)arg1;
- (void)setBundleId:(id)arg1;
- (void)setBypassHoldingPeriod:(bool)arg1;
- (void)setCanonicalSensor:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionDidInvalidate:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExportingSampleFromDescription:(id)arg1;
- (void)setNextDatastoreFiles:(id)arg1;
- (void)setRequestedSensor:(id)arg1;
- (void)setSampleClassFromDescription:(id)arg1;
- (void)set_lastModifiedAuthorizationTime:(id)arg1;
- (void)setupConnection;
- (void)startRecording;
- (void)startRecordingFailedWithError:(id)arg1;
- (void)startRecordingWithCompletionHandler:(id /* block */)arg1;
- (void)stopRecording;
- (void)stopRecordingFailedWithError:(id)arg1;
- (void)stopRecordingWithCompletionHandler:(id /* block */)arg1;

@end