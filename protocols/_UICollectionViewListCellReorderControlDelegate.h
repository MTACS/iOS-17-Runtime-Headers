
@protocol _UICollectionViewListCellReorderControlDelegate <NSObject>

@required

- (void)_reorderControl:(_UICollectionViewListCellReorderControl *)arg1 didUpdateWithOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)_reorderControlDidBeginReordering:(_UICollectionViewListCellReorderControl *)arg1;
- (void)_reorderControlDidEndReordering:(_UICollectionViewListCellReorderControl *)arg1 cancelled:(bool)arg2;
- (bool)_reorderControlShouldBeginReordering:(_UICollectionViewListCellReorderControl *)arg1;

@end
