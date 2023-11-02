
@protocol PXSelectionCoordinatorDelegate <NSObject>

@optional

- (void)selectionCoordinator:(PXSelectionCoordinator *)arg1 didUpdateSelectedObjectsWithRemovedOIDs:(NSOrderedSet *)arg2 insertedOIDs:(NSOrderedSet *)arg3;
- (void)selectionCoordinator:(PXSelectionCoordinator *)arg1 rejectedCountLimitViolationForSelectionManager:(PXSectionedSelectionManager *)arg2;
- (void)selectionCoordinator:(PXSelectionCoordinator *)arg1 willUpdateSelectedObjectsForSnapshot:(PXSelectionSnapshot *)arg2 withRemovedIndexes:(PXIndexPathSet *)arg3 insertedIndexes:(PXIndexPathSet *)arg4;
- (void)selectionLimitStatusChangedForSelectionCoordinator:(PXSelectionCoordinator *)arg1;

@end
