
@interface SAService : NSObject <SABluetoothScanRequestProtocol, SAFenceManagerClientProtocol, SAGeoFenceRequestProtocol, SALocationRequestProtocol, SAMonitoringSessionManagerClientProtocol, SAPowerLogClientProtocol, SAServiceServiceProtocol, SATimeEventRequestProtocol> {
    NSHashTable * _clients;
    SATime * _clock;
    SADeviceRecord * _deviceRecord;
    SAFenceManager * _fenceManager;
    SAMonitoringSessionManager * _monitoringSessionManager;
    SAPersistenceManager * _persistenceManager;
    SAPowerLog * _powerLogger;
    SATravelTypeClassifier * _travelTypeClassifier;
    SAWithYouDetector * _withYouDetector;
}

@property (nonatomic, retain) NSHashTable *clients;
@property (nonatomic, retain) SATime *clock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SADeviceRecord *deviceRecord;
@property (nonatomic, retain) SAFenceManager *fenceManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAMonitoringSessionManager *monitoringSessionManager;
@property (nonatomic, retain) SAPersistenceManager *persistenceManager;
@property (nonatomic, retain) SAPowerLog *powerLogger;
@property (readonly) Class superclass;
@property (nonatomic, retain) SATravelTypeClassifier *travelTypeClassifier;
@property (nonatomic, retain) SAWithYouDetector *withYouDetector;

- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (void)addGeofence:(id)arg1;
- (void)cancelSATimeEventForAlarm:(id)arg1;
- (id)clients;
- (id)clock;
- (id)deviceRecord;
- (void)enableMonitoringForSeparations:(bool)arg1;
- (id)fenceManager;
- (void)fetchLastVisit;
- (void)ingestTAEvent:(id)arg1;
- (id)initWithAnalytics:(id)arg1 isReplay:(bool)arg2 audioAccessoryManager:(id)arg3;
- (id)monitoringSessionManager;
- (void)notifySeparationsForDevices:(id)arg1 withLocation:(id)arg2 withContext:(id)arg3;
- (id)persistenceManager;
- (id)powerLogger;
- (void)removeClient:(id)arg1;
- (void)removeGeofence:(id)arg1;
- (void)requestBluetoothScanForTypes:(unsigned long long)arg1;
- (void)requestLocationForType:(unsigned long long)arg1;
- (void)requestStateForRegion:(id)arg1;
- (void)scheduleSATimeEvent:(double)arg1 forAlarm:(id)arg2;
- (void)setClients:(id)arg1;
- (void)setClock:(id)arg1;
- (void)setDeviceRecord:(id)arg1;
- (void)setFenceManager:(id)arg1;
- (void)setMonitoringSessionManager:(id)arg1;
- (void)setPersistenceManager:(id)arg1;
- (void)setPowerLogger:(id)arg1;
- (void)setTravelTypeClassifier:(id)arg1;
- (void)setWithYouDetector:(id)arg1;
- (void)startBackgroundScanning;
- (void)stopBackgroundScanning;
- (void)stopLongAggressiveScan;
- (id)travelTypeClassifier;
- (void)updatedMonitoringState:(unsigned long long)arg1 forDeviceUUID:(id)arg2;
- (id)withYouDetector;

@end
