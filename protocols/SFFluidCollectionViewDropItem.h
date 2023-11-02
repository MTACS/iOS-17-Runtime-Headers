
@protocol SFFluidCollectionViewDropItem <NSObject>

@required

- (UIDragItem *)dragItem;
- (NSIndexPath *)sourceIndexPath;

@end
