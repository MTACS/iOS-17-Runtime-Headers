
@protocol CKFetchMergeableDeltasOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleFetchForMergeableValueID:(CKMergeableValueID *)arg1 fetchedDeltas:(NSArray *)arg2 error:(NSError *)arg3;

@end
