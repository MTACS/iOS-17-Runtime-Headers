
@protocol MessagesCloudSync.RecordStoreRegistering

@required

- (<AssetStoreProviding> *)assetStore;
- (<RecordStoreDeleting> *)deletingStoreFor:(long long)arg1;
- (<RecordStoreProviding> *)recordStoreFor:(long long)arg1;
- (void)registerRecordStoreWithType:(long long)arg1 store:(id <RecordStoreProviding>)arg2;

@end
