
@protocol TabCollectionViewDragDropSupport <NSObject>

@required

- (void)activateItem:(id <TabCollectionItem>)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItem:(id <TabCollectionItem>)arg1;
- (<TabCollectionItem> *)itemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (<TabCollectionItem> *)targetItemForDropAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@optional

- (bool)canDragOntoActiveTab;
- (void)cleanUpDragPreviewForItem:(id <TabCollectionItem>)arg1;
- (unsigned long long)contextMenuOptionsForItem:(id <TabCollectionItem>)arg1;
- (void)didEndShowingContextMenuForItem:(id <TabCollectionItem>)arg1;
- (UIDragPreview *)dragPreviewForItem:(id <TabCollectionItem>)arg1 pinned:(bool)arg2;
- (bool)hidesInactiveTabs;
- (bool)lastDecelerationWasInterrupted;
- (unsigned long long)layoutAxes;
- (void)performDropWithNavigationIntent:(_SFNavigationIntent *)arg1;
- (ReorderingAutoscroller *)reorderingAutoscroller;
- (bool)shouldPinItemsDroppedAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldSpringLoadItem:(id <TabCollectionItem>)arg1;
- (bool)supportsDropTransitionToItemView;
- (UITargetedDragPreview *)targetedDragPreviewForDroppingItem:(id <TabCollectionItem>)arg1;
- (UITargetedDragPreview *)targetedDragPreviewForLiftingItem:(id <TabCollectionItem>)arg1;
- (UITargetedPreview *)targetedPreviewForDismissingMenuForItem:(id <TabCollectionItem>)arg1;
- (UIView *)viewForItem:(id <TabCollectionItem>)arg1;
- (void)willAnimateDropForItem:(id <TabCollectionItem>)arg1 withAnimator:(id <UIDragAnimating>)arg2;
- (void)willBeginShowingContextMenuForItem:(id <TabCollectionItem>)arg1;

@end
