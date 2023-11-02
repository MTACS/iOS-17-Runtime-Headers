
@protocol CKMergeable <NSObject>

@required

- (bool)mergeDeltas:(NSArray *)arg1 error:(id*)arg2;
- (NSArray *)mergeableDeltasForMetadata:(CKMergeableDeltaMetadata *)arg1 error:(id*)arg2;

@end
