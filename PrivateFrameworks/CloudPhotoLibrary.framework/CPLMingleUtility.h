
@interface CPLMingleUtility : NSObject

+ (bool)_applyMingledBatch:(id)arg1 scope:(id)arg2 forStore:(id)arg3 onPutBatchInPullQueue:(id /* block */)arg4 error:(id*)arg5;
+ (bool)_remapScopedIdentifier:(id)arg1 to:(id)arg2 class:(Class)arg3 inBatch:(id)arg4 store:(id)arg5 idMapping:(id)arg6 cloudCache:(id)arg7 remappedRecords:(id)arg8 error:(id*)arg9;
+ (bool)_shouldDeletePrivateRecordWithNaturalPrivateScopedIdentifier:(id)arg1 correctPrivateScopedIdentifier:(id)arg2 cloudCache:(id)arg3 transientPullRepository:(id)arg4;
+ (bool)applyShareRemapFixUpTasks:(id)arg1 scope:(id)arg2 store:(id)arg3 onPutBatchInPullQueue:(id /* block */)arg4 error:(id*)arg5;
+ (bool)mingleChangeBatch:(id)arg1 scope:(id)arg2 forStore:(id)arg3 onPutBatchInPullQueue:(id /* block */)arg4 error:(id*)arg5;
+ (bool)mingleRemappedBatch:(id)arg1 scope:(id)arg2 forStore:(id)arg3 onPutBatchInPullQueue:(id /* block */)arg4 error:(id*)arg5;
+ (bool)mingleSharedRemappedBatch:(id)arg1 scope:(id)arg2 sharedScope:(id)arg3 forStore:(id)arg4 fixUpTasks:(id*)arg5 onPutBatchInPullQueue:(id /* block */)arg6 error:(id*)arg7;

@end
