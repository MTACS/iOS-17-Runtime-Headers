
@protocol SyncStateManaging

@required

- (void)clearSyncStateForAllRecordTypes;
- (void)commitChanges;
- (void)deleteAllCloudKitData;
- (NSDate *)lastSyncDate;
- (void)sendBroadcastToClient;
- (void)setLastSyncDate:(NSDate *)arg1;
- (void)setSyncDate:(NSDate *)arg1 forKey:(NSString *)arg2 shouldOverride:(bool)arg3;
- (void)setSyncJobStateWithState:(unsigned long long)arg1;
- (void)setSyncPhaseType:(unsigned long long)arg1;
- (void)setSyncStarted;
- (void)setSyncStopped;
- (void)startChanges;

@end
