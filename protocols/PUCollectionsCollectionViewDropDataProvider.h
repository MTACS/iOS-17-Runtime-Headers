
@protocol PUCollectionsCollectionViewDropDataProvider <NSObject>

@required

- (<PXAssetCollectionActionPerformerDelegate> *)actionPerformerDelegateForCollectionViewDropDelegate:(PUCollectionsCollectionViewDropDelegate *)arg1;
- (PHCollection *)collectionViewDropDelegate:(PUCollectionsCollectionViewDropDelegate *)arg1 collectionAtIndexPath:(NSIndexPath *)arg2;

@optional

- (bool)allowDropForCollectionViewDropDelegate:(PUCollectionsCollectionViewDropDelegate *)arg1;

@end
