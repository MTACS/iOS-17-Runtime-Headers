
@interface ATXModeEntityCorrelatorInternalState : NSObject {
    NSMutableSet * _entitiesSeenForMostRecentModeEvent;
    NSMutableDictionary * _entityToEntityFeaturesDict;
    NSCountedSet * _globalEntityOccurrences;
    NSMutableDictionary * _localDeviceGlobalAppLaunchesHistogramPerEntity;
    NSMutableDictionary * _localDeviceModeAppLaunchesHistogramPerEntity;
    NSMutableDictionary * _macDesktopGlobalAppLaunchesHistogramPerEntity;
    NSMutableDictionary * _macDesktopModeAppLaunchesHistogramPerEntity;
    NSMutableDictionary * _macPortableGlobalAppLaunchesHistogramPerEntity;
    NSMutableDictionary * _macPortableModeAppLaunchesHistogramPerEntity;
    NSCountedSet * _modeLocalEntityOccurrences;
    unsigned long long  _modeOccurrences;
    ATXModeEvent * _mostRecentModeEvent;
    bool  _seenAtLeastOneEntityEvent;
    NSDate * _today;
    NSMutableDictionary * _totalGlobalLaunchesHistogramPerEntity;
    NSMutableDictionary * _totalModeLaunchesHistogramPerEntity;
    NSCountedSet * _uniqueModeOccurrences;
}

@property (nonatomic, retain) NSMutableSet *entitiesSeenForMostRecentModeEvent;
@property (nonatomic, retain) NSMutableDictionary *entityToEntityFeaturesDict;
@property (nonatomic, retain) NSCountedSet *globalEntityOccurrences;
@property (nonatomic, retain) NSMutableDictionary *localDeviceGlobalAppLaunchesHistogramPerEntity;
@property (nonatomic, retain) NSMutableDictionary *localDeviceModeAppLaunchesHistogramPerEntity;
@property (nonatomic, retain) NSMutableDictionary *macDesktopGlobalAppLaunchesHistogramPerEntity;
@property (nonatomic, retain) NSMutableDictionary *macDesktopModeAppLaunchesHistogramPerEntity;
@property (nonatomic, retain) NSMutableDictionary *macPortableGlobalAppLaunchesHistogramPerEntity;
@property (nonatomic, retain) NSMutableDictionary *macPortableModeAppLaunchesHistogramPerEntity;
@property (nonatomic, retain) NSCountedSet *modeLocalEntityOccurrences;
@property (nonatomic) unsigned long long modeOccurrences;
@property (nonatomic, retain) ATXModeEvent *mostRecentModeEvent;
@property (nonatomic) bool seenAtLeastOneEntityEvent;
@property (nonatomic, readonly) NSDate *today;
@property (nonatomic, retain) NSMutableDictionary *totalGlobalLaunchesHistogramPerEntity;
@property (nonatomic, retain) NSMutableDictionary *totalModeLaunchesHistogramPerEntity;
@property (nonatomic, retain) NSCountedSet *uniqueModeOccurrences;

- (void).cxx_destruct;
- (id)entitiesSeenForMostRecentModeEvent;
- (id)entityToEntityFeaturesDict;
- (id)globalEntityOccurrences;
- (id)init;
- (id)localDeviceGlobalAppLaunchesHistogramPerEntity;
- (id)localDeviceModeAppLaunchesHistogramPerEntity;
- (id)macDesktopGlobalAppLaunchesHistogramPerEntity;
- (id)macDesktopModeAppLaunchesHistogramPerEntity;
- (id)macPortableGlobalAppLaunchesHistogramPerEntity;
- (id)macPortableModeAppLaunchesHistogramPerEntity;
- (id)modeLocalEntityOccurrences;
- (unsigned long long)modeOccurrences;
- (id)mostRecentModeEvent;
- (bool)seenAtLeastOneEntityEvent;
- (void)setEntitiesSeenForMostRecentModeEvent:(id)arg1;
- (void)setEntityToEntityFeaturesDict:(id)arg1;
- (void)setGlobalEntityOccurrences:(id)arg1;
- (void)setLocalDeviceGlobalAppLaunchesHistogramPerEntity:(id)arg1;
- (void)setLocalDeviceModeAppLaunchesHistogramPerEntity:(id)arg1;
- (void)setMacDesktopGlobalAppLaunchesHistogramPerEntity:(id)arg1;
- (void)setMacDesktopModeAppLaunchesHistogramPerEntity:(id)arg1;
- (void)setMacPortableGlobalAppLaunchesHistogramPerEntity:(id)arg1;
- (void)setMacPortableModeAppLaunchesHistogramPerEntity:(id)arg1;
- (void)setModeLocalEntityOccurrences:(id)arg1;
- (void)setModeOccurrences:(unsigned long long)arg1;
- (void)setMostRecentModeEvent:(id)arg1;
- (void)setSeenAtLeastOneEntityEvent:(bool)arg1;
- (void)setTotalGlobalLaunchesHistogramPerEntity:(id)arg1;
- (void)setTotalModeLaunchesHistogramPerEntity:(id)arg1;
- (void)setUniqueModeOccurrences:(id)arg1;
- (id)today;
- (id)totalGlobalLaunchesHistogramPerEntity;
- (id)totalModeLaunchesHistogramPerEntity;
- (id)uniqueModeOccurrences;

@end
