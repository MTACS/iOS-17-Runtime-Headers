
@protocol HDCloudSyncStateEntity <NSObject>

@required

+ (HDStateSyncEntitySchema *)stateEntitySchema;
+ (void)syncDidFinishWithResult:(long long)arg1 stateStore:(id <HDCloudSyncStateStore>)arg2 profile:(HDProfile *)arg3;
+ (bool)updateDataWithStateStorage:(id <HDCloudSyncStateStore>)arg1 transaction:(HDDatabaseTransaction *)arg2 error:(id*)arg3;

@end
