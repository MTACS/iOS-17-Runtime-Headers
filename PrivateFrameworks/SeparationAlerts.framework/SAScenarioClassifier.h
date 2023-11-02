
@interface SAScenarioClassifier : NSObject <SAFenceManagerClientProtocol, SAScenarioClassifierServiceProtocol, SATravelTypeClassifierClientProtocol> {
    NSHashTable * _clients;
    CLRegion * _currentUnsafeLocation;
    CLCircularRegion * _currentVisit;
    <SAFenceManagerRequestProtocol> * _delegate;
    NSUUID * _deviceUuid;
    CLRegion * _lastUnsafeLocation;
    NSMutableSet * _safeLocations;
    NSDate * _scenarioChangeDate;
    unsigned long long  _scenarioClassification;
    NSMutableDictionary * _statesBySafeLocation;
    <SATimeServiceProtocol> * _timeDelegate;
}

@property (nonatomic, retain) NSHashTable *clients;
@property (nonatomic, copy) CLRegion *currentUnsafeLocation;
@property (nonatomic, copy) CLCircularRegion *currentVisit;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <SAFenceManagerRequestProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSUUID *deviceUuid;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CLRegion *lastUnsafeLocation;
@property (nonatomic, retain) NSMutableSet *safeLocations;
@property (nonatomic, readonly, copy) NSDate *scenarioChangeDate;
@property (nonatomic) unsigned long long scenarioClassification;
@property (nonatomic, retain) NSMutableDictionary *statesBySafeLocation;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SATimeServiceProtocol> *timeDelegate;

+ (id)convertSAScenarioClassToString:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_addSafeLocation:(id)arg1;
- (void)_addUnsafeLocation:(id)arg1;
- (id)_findSafeLocationWithUUID:(id)arg1;
- (bool)_hasAllSafeLocationStatesKnown;
- (bool)_isInsideAnySafeLocation;
- (void)_notifyAllClientsOfScenarioChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)_removeSafeLocation:(id)arg1;
- (void)_removeUnsafeLocation:(id)arg1;
- (bool)_setNewScenarioClass:(unsigned long long)arg1;
- (void)addClient:(id)arg1;
- (void)addGeofence:(id)arg1;
- (id)clients;
- (id)currentUnsafeLocation;
- (id)currentVisit;
- (void)dealloc;
- (id)delegate;
- (id)deviceUuid;
- (void)didChangeTravelTypeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 hints:(unsigned long long)arg3;
- (void)didDetermineState:(unsigned long long)arg1 forSafeLocation:(id)arg2 forDevice:(id)arg3;
- (void)didDetermineState:(unsigned long long)arg1 forUnsafeLocation:(id)arg2 forDevice:(id)arg3;
- (id)getCurrentTime;
- (void)ingestTAEvent:(id)arg1;
- (id)initWithDeviceUuid:(id)arg1;
- (id)initWithDeviceUuid:(id)arg1 scenarioClass:(unsigned long long)arg2 unsafeLocation:(id)arg3;
- (id)lastUnsafeLocation;
- (void)removeClient:(id)arg1;
- (void)removeGeofence:(id)arg1;
- (id)safeLocations;
- (id)scenarioChangeDate;
- (unsigned long long)scenarioClassification;
- (void)setClients:(id)arg1;
- (void)setCurrentUnsafeLocation:(id)arg1;
- (void)setCurrentVisit:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceUuid:(id)arg1;
- (void)setLastUnsafeLocation:(id)arg1;
- (void)setSafeLocations:(id)arg1;
- (void)setScenarioClassification:(unsigned long long)arg1;
- (void)setStatesBySafeLocation:(id)arg1;
- (void)setTimeDelegate:(id)arg1;
- (id)statesBySafeLocation;
- (id)timeDelegate;

@end
