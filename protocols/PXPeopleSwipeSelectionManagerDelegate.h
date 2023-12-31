
@protocol PXPeopleSwipeSelectionManagerDelegate <NSObject>

@required

- (NSSet *)initialSelectedIndexPathsForSwipeSelectionManager:(PXPeopleSwipeSelectionManager *)arg1;
- (void)swipeSelectionManager:(PXPeopleSwipeSelectionManager *)arg1 didSelectIndexPaths:(NSSet *)arg2;
- (NSSet *)swipeSelectionManager:(PXPeopleSwipeSelectionManager *)arg1 indexPathSetFromIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (NSIndexPath *)swipeSelectionManager:(PXPeopleSwipeSelectionManager *)arg1 itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg2;

@optional

- (NSIndexPath *)swipeSelectionManager:(PXPeopleSwipeSelectionManager *)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint { double x1; double x2; })arg2;
- (NSIndexPath *)swipeSelectionManager:(PXPeopleSwipeSelectionManager *)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint { double x1; double x2; })arg2;

@end
