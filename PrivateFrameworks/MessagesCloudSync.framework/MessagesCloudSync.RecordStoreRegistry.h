
@interface MessagesCloudSync.RecordStoreRegistry : _TtCs12_SwiftObject <MessagesCloudSync.RecordStoreRegistering> {
    void recordStore;
}

- (id)assetStore;
- (id)deletingStoreFor:(long long)arg1;
- (id)recordStoreFor:(long long)arg1;
- (void)registerRecordStoreWithType:(long long)arg1 store:(id)arg2;

@end
