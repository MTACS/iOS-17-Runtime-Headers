
@interface HealthAppHealthDaemon.PinnedContentSyncStateUpdaterDelegate : NSObject <HDCloudSyncStateUpdaterDelegate> {
    void maxDataSizeInBytes;
    void pinnedContentDomain;
}

@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) struct { int x1; int x2; } supportedSyncVersionRange;

- (id)domain;
- (long long)fetchCloudState:(id*)arg1 codableSyncState:(id)arg2 profile:(id)arg3 error:(id*)arg4;
- (bool)fetchLocalState:(id*)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)key;
- (bool)persistCloudState:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (long long)shouldUpdateWithMergedState:(id*)arg1 cloudState:(id)arg2 localState:(id)arg3 transaction:(id)arg4 error:(id*)arg5;
- (struct { int x1; int x2; })supportedSyncVersionRange;
- (bool)updateCodableSyncState:(id)arg1 withMergeState:(id)arg2 profile:(id)arg3 error:(id*)arg4;

@end
