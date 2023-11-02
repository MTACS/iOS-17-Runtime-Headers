
@interface HDCloudSyncStateUpdater : NSObject

+ (bool)persistDataWithStateStore:(id)arg1 delegate:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)updateDataWithStateStore:(id)arg1 delegate:(id)arg2 transaction:(id)arg3 error:(id*)arg4;

- (id)init;

@end
