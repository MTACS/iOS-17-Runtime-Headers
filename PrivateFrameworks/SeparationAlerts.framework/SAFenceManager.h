
@interface SAFenceManager : NSObject <SAFenceManagerRequestProtocol, SAFenceManagerServiceProtocol> {
    NSHashTable * _clients;
    NSMutableDictionary * _deviceUUIDsBySafeLocation;
    NSMutableDictionary * _deviceUUIDsByUnsafeRegionIdentifier;
    NSMutableDictionary * _regionsByRegionIdentifier;
    NSMutableDictionary * _safeLocationsByRegionIdentifier;
    NSMutableDictionary * _statesByRegionIdentifier;
}

@property (nonatomic, retain) NSHashTable *clients;
@property (retain) NSMutableDictionary *deviceUUIDsBySafeLocation;
@property (nonatomic, retain) NSMutableDictionary *deviceUUIDsByUnsafeRegionIdentifier;
@property (nonatomic, retain) NSMutableDictionary *regionsByRegionIdentifier;
@property (nonatomic, retain) NSMutableDictionary *safeLocationsByRegionIdentifier;
@property (nonatomic, retain) NSMutableDictionary *statesByRegionIdentifier;

- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (id)clients;
- (id)deviceUUIDsBySafeLocation;
- (id)deviceUUIDsByUnsafeRegionIdentifier;
- (id)getRegionForSafeLocation:(id)arg1;
- (unsigned long long)getSafeLocationCount;
- (unsigned long long)getUnsafeLocationCount;
- (void)handleFenceEvent:(unsigned long long)arg1 forRegion:(id)arg2;
- (void)ingestTAEvent:(id)arg1;
- (id)init;
- (bool)isSafeLocation:(id)arg1;
- (void)notifyState:(unsigned long long)arg1 forSafeLocationRegion:(id)arg2;
- (void)notifyState:(unsigned long long)arg1 forUnsafeLocationRegion:(id)arg2;
- (id)regionsByRegionIdentifier;
- (void)removeClient:(id)arg1;
- (void)removeLocationsForDeviceUuid:(id)arg1;
- (id)safeLocationsByRegionIdentifier;
- (void)setClients:(id)arg1;
- (void)setDeviceUUIDsBySafeLocation:(id)arg1;
- (void)setDeviceUUIDsByUnsafeRegionIdentifier:(id)arg1;
- (void)setRegionsByRegionIdentifier:(id)arg1;
- (void)setSafeLocationsByRegionIdentifier:(id)arg1;
- (void)setStatesByRegionIdentifier:(id)arg1;
- (bool)startMonitorSafeLocation:(id)arg1 forDevice:(id)arg2;
- (bool)startMonitorUnsafeLocationExit:(id)arg1 forDevice:(id)arg2;
- (id)statesByRegionIdentifier;
- (bool)stopMonitorSafeLocation:(id)arg1 forDevice:(id)arg2;
- (bool)stopMonitorUnsafeLocationExit:(id)arg1 forDevice:(id)arg2;

@end
