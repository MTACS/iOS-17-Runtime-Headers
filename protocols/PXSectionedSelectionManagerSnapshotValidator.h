
@protocol PXSectionedSelectionManagerSnapshotValidator <NSObject>

@required

- (PXSelectionSnapshot *)selectionManager:(PXSectionedSelectionManager *)arg1 validateSnapshot:(PXSelectionSnapshot *)arg2;
- (bool)selectionManagerShouldAvoidEmptySelection:(PXSectionedSelectionManager *)arg1;

@end
