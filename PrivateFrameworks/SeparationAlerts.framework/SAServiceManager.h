
@interface SAServiceManager : NSObject <SAServiceClientProtocol, SAServiceServiceProtocol> {
    SAAnalytics * _analytics;
    SAAudioAccessory * _audioAcccessory;
    SPBeaconManager * _beaconManager;
    NSHashTable * _clients;
    bool  _hasAttemptedToIngestLastVisitAtStartup;
    NSDate * _nextAnalyticsSubmission;
    SPOwnerSession * _ownerSession;
    NSObject<OS_dispatch_queue> * _queue;
    RTRoutineManager * _routineManager;
    NSObject<SPSeparationMonitoringProtocol> * _separationMonitoringSession;
    SAService * _service;
}

@property (nonatomic, retain) SAAnalytics *analytics;
@property (nonatomic, retain) SAAudioAccessory *audioAcccessory;
@property (nonatomic, retain) NSHashTable *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAttemptedToIngestLastVisitAtStartup;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *nextAnalyticsSubmission;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) RTRoutineManager *routineManager;
@property (nonatomic, retain) SAService *service;
@property (readonly) Class superclass;

+ (unsigned long long)convertBeaconToDeviceType:(id)arg1;
+ (unsigned long long)convertCLReferenceFrameToSAReferenceFrame:(int)arg1;

- (void).cxx_destruct;
- (void)_fetchAndIngestLastVisit;
- (void)_ingestVisit:(id)arg1;
- (void)addClient:(id)arg1;
- (id)analytics;
- (id)audioAcccessory;
- (id)clients;
- (void)dealloc;
- (void)didFetchAllDevices:(id)arg1;
- (void)didFetchAllSafeLocations:(id)arg1;
- (bool)hasAttemptedToIngestLastVisitAtStartup;
- (void)ingestTAEvent:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)nextAnalyticsSubmission;
- (id)queue;
- (void)removeClient:(id)arg1;
- (id)routineManager;
- (void)separationAlertsService:(id)arg1 addGeofence:(id)arg2;
- (void)separationAlertsService:(id)arg1 cancelSATimeEventForAlarm:(id)arg2;
- (void)separationAlertsService:(id)arg1 enableMonitoringForSeparations:(bool)arg2;
- (void)separationAlertsService:(id)arg1 notifySeparationsForDevices:(id)arg2 withLocation:(id)arg3 withContext:(id)arg4;
- (void)separationAlertsService:(id)arg1 removeGeofence:(id)arg2;
- (void)separationAlertsService:(id)arg1 requestBluetoothScanForTypes:(unsigned long long)arg2;
- (void)separationAlertsService:(id)arg1 requestLocationForType:(unsigned long long)arg2;
- (void)separationAlertsService:(id)arg1 requestStateForRegion:(id)arg2;
- (void)separationAlertsService:(id)arg1 scheduleSATimeEvent:(double)arg2 forAlarm:(id)arg3;
- (void)separationAlertsServiceFetchLastVisit:(id)arg1;
- (void)separationAlertsServiceStartBackgroundScanning:(id)arg1;
- (void)separationAlertsServiceStopBackgroundScanning:(id)arg1;
- (void)separationAlertsServiceStopLongAggressiveScan:(id)arg1;
- (id)service;
- (void)setAnalytics:(id)arg1;
- (void)setAudioAcccessory:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setHasAttemptedToIngestLastVisitAtStartup:(bool)arg1;
- (void)setNextAnalyticsSubmission:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRoutineManager:(id)arg1;
- (void)setService:(id)arg1;

@end
