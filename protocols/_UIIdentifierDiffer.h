
@protocol _UIIdentifierDiffer <NSObject>

@required

- (NSOrderedCollectionDifference *)collectionDifference;
- (NSIndexSet *)deletedIndexes;
- (bool)hasChanges;
- (NSIndexSet *)insertedIndexes;
- (NSSet *)movePairs;

@end
