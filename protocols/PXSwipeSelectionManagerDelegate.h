
@protocol PXSwipeSelectionManagerDelegate <NSObject>

@required

- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(PXSwipeSelectionManager *)arg1 itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)swipeSelectionManagerIsInMultiSelectMode:(PXSwipeSelectionManager *)arg1;

@optional

- (void)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 extendSelectionInDirection:(unsigned long long)arg2;
- (PXIndexPathSet *)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 indexPathSetFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2 toIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(PXSwipeSelectionManager *)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(PXSwipeSelectionManager *)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 shouldBeginSelectionAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)swipeSelectionManager:(PXSwipeSelectionManager *)arg1 shouldSelectItemAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg2;
- (void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(PXSwipeSelectionManager *)arg1;
- (void)swipeSelectionManagerDidAutoScroll:(PXSwipeSelectionManager *)arg1;

@end
