
@interface HDWorkoutSessionEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)createSessionWithIdentifier:(id)arg1 source:(id)arg2 configuration:(id)arg3 state:(long long)arg4 profile:(id)arg5 error:(id*)arg6;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)lookupSessionWithIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)privateSubEntities;
+ (long long)protectionClass;
+ (id)sessionIdentifierForRecoveryInProfile:(id)arg1 expirationInterval:(double)arg2 error:(id*)arg3;
+ (id)sessionsExcludingIdentifiers:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)sessionsForSource:(id)arg1 profile:(id)arg2 error:(id*)arg3;

- (id)activityConfigurationsWithTransaction:(id)arg1 error:(id*)arg2;
- (id)associatedBuilderWithTransaction:(id)arg1 error:(id*)arg2;
- (id)clientApplicationIdentifier:(id)arg1 error:(id*)arg2;
- (id)clientBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)currentActivityWithTransaction:(id)arg1 error:(id*)arg2;
- (id)endDateInTransaction:(id)arg1 error:(id*)arg2;
- (bool)finishWithTransaction:(id)arg1 error:(id*)arg2;
- (id)firstActivityConfigurationWithTransaction:(id)arg1 error:(id*)arg2;
- (id)hasFailedInTransaction:(id)arg1 error:(id*)arg2;
- (bool)insertWorkoutEvent:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)isMirroringInTransaction:(id)arg1 error:(id*)arg2;
- (id)latestActivityDateInTransaction:(id)arg1 error:(id*)arg2;
- (id)requestedEndDateInTransaction:(id)arg1 error:(id*)arg2;
- (id)requestedStartDateInTransaction:(id)arg1 error:(id*)arg2;
- (id)requestedTargetStateWithTransaction:(id)arg1 error:(id*)arg2;
- (id)sessionIdentifierWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)setActivityConfigurations:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setAssociatedBuilder:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setClientApplicationIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setClientBundleIdentifier:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setCurrentActivity:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setEndDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setFirstActivityConfiguration:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setHasFailed:(bool)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setIsMirroring:(bool)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setRequestedEndDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setRequestedStartDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setRequestedTargetState:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setSource:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setStartDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setState:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)setWorkoutConfiguration:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)sourceWithTransaction:(id)arg1 error:(id*)arg2;
- (id)startDateInTransaction:(id)arg1 error:(id*)arg2;
- (id)stateWithTransaction:(id)arg1 error:(id*)arg2;
- (bool)updateLatestActivityDate:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (bool)updateLatestActivityDateWithTransaction:(id)arg1 error:(id*)arg2;
- (id)workoutConfigurationWithTransaction:(id)arg1 error:(id*)arg2;
- (id)workoutEventsInTransaction:(id)arg1 error:(id*)arg2;

@end
