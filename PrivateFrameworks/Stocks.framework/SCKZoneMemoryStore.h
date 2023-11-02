
@interface SCKZoneMemoryStore : NSObject <SCKZoneStore> {
    NSDate * _lastDirtyDate;
    NSDate * _lastSyncDate;
    NSArray * _pendingCommands;
    CKServerChangeToken * _serverChangeToken;
    NSArray * _serverRecords;
}

@property (nonatomic, copy) NSDate *lastDirtyDate;
@property (nonatomic, copy) NSDate *lastSyncDate;
@property (nonatomic, copy) NSArray *pendingCommands;
@property (nonatomic, copy) CKServerChangeToken *serverChangeToken;
@property (nonatomic, copy) NSArray *serverRecords;

- (void).cxx_destruct;
- (void)addPendingCommands:(id)arg1;
- (void)applyServerRecordsDiff:(id)arg1;
- (void)clearPendingCommandsUpToCount:(unsigned long long)arg1;
- (id)init;
- (id)lastDirtyDate;
- (id)lastSyncDate;
- (id)pendingCommands;
- (id)serverChangeToken;
- (id)serverRecords;
- (void)setLastDirtyDate:(id)arg1;
- (void)setLastSyncDate:(id)arg1;
- (void)setPendingCommands:(id)arg1;
- (void)setServerChangeToken:(id)arg1;
- (void)setServerRecords:(id)arg1;

@end
