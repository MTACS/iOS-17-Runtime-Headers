
@protocol SFFluidCollectionViewDragDelegate <NSObject>

@required

- (NSArray *)fluidCollectionView:(SFFluidCollectionView *)arg1 itemsForBeginningDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;

@optional

- (UIDragPreviewParameters *)fluidCollectionView:(SFFluidCollectionView *)arg1 dragPreviewParametersForItemAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)fluidCollectionView:(SFFluidCollectionView *)arg1 itemsForAddingToDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;

@end
