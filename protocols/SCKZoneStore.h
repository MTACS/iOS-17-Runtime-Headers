
@protocol SCKZoneStore

@required

- (void)addPendingCommands:(NSArray *)arg1;
- (void)applyServerRecordsDiff:(SCKZoneDiff *)arg1;
- (void)clearPendingCommandsUpToCount:(unsigned long long)arg1;
- (NSDate *)lastDirtyDate;
- (NSDate *)lastSyncDate;
- (NSArray *)pendingCommands;
- (CKServerChangeToken *)serverChangeToken;
- (NSArray *)serverRecords;
- (void)setLastDirtyDate:(NSDate *)arg1;
- (void)setLastSyncDate:(NSDate *)arg1;
- (void)setPendingCommands:(NSArray *)arg1;
- (void)setServerChangeToken:(CKServerChangeToken *)arg1;
- (void)setServerRecords:(NSArray *)arg1;

@end
