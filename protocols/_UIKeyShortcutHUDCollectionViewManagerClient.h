
@protocol _UIKeyShortcutHUDCollectionViewManagerClient <NSObject>

@required

- (UICollectionView *)collectionView;
- (void)didScrollCollectionView;
- (NSSet *)indexPathsForCellsUsingSeparatorAtIndexPath:(_UIKeyShortcutHUDIndexPath *)arg1;
- (NSSet *)indexPathsForSeparatorsUsedByCellAtIndexPath:(_UIKeyShortcutHUDIndexPath *)arg1;
- (void)performActionForSelectingCellAtIndexPath:(NSIndexPath *)arg1;
- (bool)selectionFollowsFocusForItemAtIndexPath:(NSIndexPath *)arg1;
- (bool)shouldPersistSelectionForCellAtIndexPath:(NSIndexPath *)arg1;

@end
