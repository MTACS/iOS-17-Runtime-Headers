
@protocol CKFetchMergeableDeltaMetadataOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleFetchForMergeableValueID:(CKMergeableValueID *)arg1 metadatas:(NSArray *)arg2 error:(NSError *)arg3;

@end
