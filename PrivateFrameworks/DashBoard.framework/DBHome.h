
@interface DBHome : NSObject <DBHomeKitEntity, DBLocationManagerObserver, DBNetworkPathMonitorObserver, HMHomeDelegatePrivate> {
    NSDictionary * _cachedGarageDoors;
    bool  _garageDoorRefreshScheduled;
    HMHome * _home;
    bool  _inExtendedRange;
    double  _lastLoggedDistance;
    DBGarageDoor * _lastUsedGarageDoor;
    NSMutableDictionary * _lastUsedIdentifiersByServiceType;
    DBLocationManager * _locationManager;
    DBNetworkPathMonitor * _networkPathMonitor;
    CARObserverHashTable * _observers;
    bool  _previouslyInRange;
    NSMutableSet * _updatingLastUsedServiceTypes;
}

@property (nonatomic, retain) NSDictionary *cachedGarageDoors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) NSString *formattedUniqueIdentifier;
@property (nonatomic) bool garageDoorRefreshScheduled;
@property (nonatomic, readonly) NSArray *garageDoors;
@property (nonatomic, readonly) bool hasCachedGarageDoors;
@property (nonatomic, readonly) bool hasGarageDoor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) bool inExtendedRange;
@property (nonatomic, readonly) bool inRange;
@property (nonatomic) double lastLoggedDistance;
@property (nonatomic, readonly) DBGarageDoor *lastUsedGarageDoor;
@property (nonatomic, readonly) NSMutableDictionary *lastUsedIdentifiersByServiceType;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) DBLocationManager *locationManager;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) DBNetworkPathMonitor *networkPathMonitor;
@property (nonatomic, retain) CARObserverHashTable *observers;
@property (nonatomic) bool previouslyInRange;
@property (nonatomic, readonly) NSString *stateDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSMutableSet *updatingLastUsedServiceTypes;
@property (nonatomic, readonly) bool usable;

+ (double)maxDistance;

- (void).cxx_destruct;
- (void)_scheduleGarageDoorRefresh;
- (void)_setValue:(id)arg1 forCharacteristic:(id)arg2 completion:(id /* block */)arg3;
- (void)_updateCachedGarageDoors;
- (void)_updateInRangeIfNeeded;
- (void)_updateLastUsedServiceOfType:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)cachedGarageDoors;
- (void)dealloc;
- (id)description;
- (double)distance;
- (id)formattedUniqueIdentifier;
- (bool)garageDoorRefreshScheduled;
- (id)garageDoors;
- (bool)hasCachedGarageDoors;
- (bool)hasGarageDoor;
- (id)home;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didUpdateLocation:(id)arg2;
- (void)homeDidUpdateHomeLocationStatus:(id)arg1;
- (bool)inExtendedRange;
- (bool)inHomeRange;
- (bool)inLocationRange;
- (bool)inRange;
- (id)initWithHome:(id)arg1 resourceProvider:(id)arg2;
- (double)lastLoggedDistance;
- (id)lastUsedGarageDoor;
- (id)lastUsedIdentifiersByServiceType;
- (id)location;
- (id)locationManager;
- (void)locationManager:(id)arg1 didEnterRegionIdentifier:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegionIdentifier:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocation:(id)arg2;
- (id)name;
- (id)networkPathMonitor;
- (void)networkPathMonitor:(id)arg1 didChangeNetworkReachable:(bool)arg2;
- (void)networkPathMonitorDidChangeNetworkPath:(id)arg1;
- (id)observers;
- (bool)previouslyInRange;
- (void)refreshGarageDoors;
- (void)removeObserver:(id)arg1;
- (void)setCachedGarageDoors:(id)arg1;
- (void)setGarageDoorRefreshScheduled:(bool)arg1;
- (void)setInExtendedRange:(bool)arg1;
- (void)setLastLoggedDistance:(double)arg1;
- (void)setObservers:(id)arg1;
- (void)setPreviouslyInRange:(bool)arg1;
- (id)stateDescription;
- (id)uniqueIdentifier;
- (id)updatingLastUsedServiceTypes;
- (bool)usable;

@end