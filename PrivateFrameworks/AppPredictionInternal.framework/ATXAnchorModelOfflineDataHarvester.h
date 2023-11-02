
@interface ATXAnchorModelOfflineDataHarvester : NSObject {
    NSArray * _anchorsToCollect;
    ATXAnchorModelEventFeaturizer * _eventFeaturizer;
    ATXAnchorModelEventHarvester * _harvester;
    NSUUID * _userId;
}

+ (id)actionIdentifiersFromActionsInMessage:(id)arg1;
+ (id)bundleIdsFromAppLaunchesInMessage:(id)arg1;
+ (id)getSamplingGroupForDataCollection;
+ (id)getUserUUIDForDataCollection;
+ (void)resetSamplingGroupAssignmentForUser;

- (void).cxx_destruct;
- (void)addActionEventsFromAnchorOccurrenceDate:(id)arg1 toMessage:(id)arg2;
- (void)addAppLaunchEventsFromAnchorOccurrenceDate:(id)arg1 toMessage:(id)arg2;
- (void)addNegativeSamplesForAnchorOccurrenceDate:(id)arg1 toMessage:(id)arg2;
- (id)allInstalledAppsKnownToSpringBoard;
- (id)fetchAnchorEvents:(id)arg1;
- (id)fetchEventsAfterAnchorOccurrenceDate:(id)arg1 withDuetDataProviderClass:(Class)arg2 limit:(unsigned long long)arg3 maxSecondsBeforeAnchor:(long long)arg4 maxSecondsAfterAnchor:(long long)arg5;
- (void)harvestData;
- (void)harvestDataForAnchor:(id)arg1;
- (id)init;
- (id)initWithSamplingGroup:(id)arg1 userId:(id)arg2;
- (id)processAnchorOccurrence:(id)arg1 anchor:(id)arg2;
- (void)setNegativeActionSamplesForAnchorOccurrenceDate:(id)arg1 mainMessage:(id)arg2;
- (void)setNegativeAppLaunchSamplesForAnchorOccurrenceDate:(id)arg1 mainMessage:(id)arg2;

@end
