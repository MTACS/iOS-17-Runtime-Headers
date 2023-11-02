
@interface HDSyncSampleOriginUtilities : NSObject

+ (bool)generateStateSyncCodableContributors:(id*)arg1 predicate:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (bool)generateStateSyncCodableDevices:(id*)arg1 predicate:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (long long)ingestContributorSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (long long)ingestSourceSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4;

@end
