
@interface FIIntervalWorkoutDefinitionsManager : NSObject {
    NPSDomainAccessor * _domainAccessor;
    NSMutableDictionary * _rootIntervalWorkoutDefinitions;
    NPSManager * _syncManager;
}

- (void).cxx_destruct;
- (void)_checkVersion;
- (id)_defaultUserIntervalWorkouts;
- (id)_deserializeIntervalWorkoutDefinitions:(id)arg1;
- (id)_mockHIIT3010;
- (id)_mockQuarterMileSprints;
- (id)_mockVariedSpeed;
- (void)_saveDefaultIntervalWorkouts;
- (void)_saveRootIntervalWorkoutDefinitions:(id)arg1;
- (void)_serializeAndSaveRootIntervalWorkoutDefinitions:(id)arg1;
- (id)_serializeRootIntervalWorkoutDefinitions:(id)arg1;
- (void)_trimRootIntervalWorkoutDefinitions:(id)arg1;
- (void)_updateIntervalWorkoutDefinition:(id)arg1 activityTypeIdentifier:(id)arg2;
- (id)init;
- (id)intervalWorkoutDefinitionsForActivityTypeIdentifier:(id)arg1;
- (void)loadIntervalWorkoutDefinitions;
- (void)removeIntervalWorkoutDefinitionAtIndex:(long long)arg1 activityTypeIdentifier:(id)arg2;
- (void)saveIntervalWorkoutDefinition:(id)arg1 activityTypeIdentifier:(id)arg2;

@end
