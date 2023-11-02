
@interface MSASDaemonModel : MSASModelBase

+ (id)defaultModel;

- (void)clearAllNextActivityDates;
- (bool)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;
- (id)earliestNextActivityDate;
- (id)init;
- (id)nextActivityDateByPersonID;
- (void)setNextActivityDate:(id)arg1 forPersonID:(id)arg2;

@end
