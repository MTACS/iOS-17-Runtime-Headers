
@protocol HDCloudSyncStateUpdaterDelegate <NSObject>

@required

- (NSString *)domain;
- (long long)fetchCloudState:(id*)arg1 codableSyncState:(HDCodableSyncState *)arg2 profile:(HDProfile *)arg3 error:(id*)arg4;
- (bool)fetchLocalState:(id*)arg1 transaction:(HDDatabaseTransaction *)arg2 error:(id*)arg3;
- (NSString *)key;
- (bool)persistCloudState:(id <HDSyncCodable>)arg1 profile:(HDProfile *)arg2 error:(id*)arg3;
- (long long)shouldUpdateWithMergedState:(id*)arg1 cloudState:(id <HDSyncCodable>)arg2 localState:(id <HDSyncCodable>)arg3 transaction:(HDDatabaseTransaction *)arg4 error:(id*)arg5;
- (struct { int x1; int x2; })supportedSyncVersionRange;
- (bool)updateCodableSyncState:(HDCodableSyncState *)arg1 withMergeState:(id <HDSyncCodable>)arg2 profile:(HDProfile *)arg3 error:(id*)arg4;

@end
