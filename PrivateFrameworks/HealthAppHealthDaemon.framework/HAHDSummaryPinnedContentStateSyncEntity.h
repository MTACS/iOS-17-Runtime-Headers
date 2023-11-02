
@interface HAHDSummaryPinnedContentStateSyncEntity : NSObject <HDCloudSyncStateEntity>

+ (id)stateEntitySchema;
+ (void)syncDidFinishWithResult:(long long)arg1 stateStore:(id)arg2 profile:(id)arg3;
+ (bool)updateDataWithStateStorage:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)init;

@end
