
@protocol VCOutgoingSyncDataHandling <VCPBMessageTyped>

@required

- (bool)markChangesAsSynced:(NSArray *)arg1 withSyncService:(id <VCShortcutSyncService>)arg2 metadata:(NSDictionary *)arg3 error:(id*)arg4;
- (bool)resetSyncStateForService:(id <VCShortcutSyncService>)arg1 error:(id*)arg2;
- (NSArray *)unsyncedChangesForSyncService:(id <VCShortcutSyncService>)arg1 metadata:(id*)arg2 error:(id*)arg3;

@end
