
@protocol TVCollectionViewLockupCellDelegate <NSObject>

@optional

- (void)collectionViewCellDidSelect:(_TVCollectionViewLockupCell *)arg1;
- (void)collectionViewCellDidUnfocus:(_TVCollectionViewLockupCell *)arg1;
- (_UIStackedImageContainerLayer *)layeredImageContainerLayerWithinCollectionViewCell:(_TVCollectionViewLockupCell *)arg1;

@end
