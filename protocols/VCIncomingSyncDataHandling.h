
@protocol VCIncomingSyncDataHandling <VCPBMessageTyped>

@required

- (bool)applyChanges:(NSArray *)arg1 fromSyncService:(id <VCShortcutSyncService>)arg2 error:(id*)arg3;
- (bool)deleteSyncedData:(id*)arg1;

@end
