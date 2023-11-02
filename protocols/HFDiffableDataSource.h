
@protocol HFDiffableDataSource <NSObject>

@required

- (void)applySnapshot:(void *)arg1 animatingDifferences:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSDiffableDataSourceSnapshot *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)applySnapshot:(void *)arg1 toSection:(void *)arg2 animatingDifferences:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: NSDiffableDataSourceSectionSnapshot *, HFItemSection *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSIndexPath *)indexPathForItemIdentifier:(HFItem *)arg1;
- (HFItem *)itemIdentifierForIndexPath:(NSIndexPath *)arg1;
- (void)setSupplementaryViewProvider:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, UICollectionReusableView *, id /* block */, UICollectionView *, NSString *, NSIndexPath *, void*
- (NSDiffableDataSourceSnapshot *)snapshot;
- (id /* block */)supplementaryViewProvider:(void *)arg1; // needs 1 arg types, found 7: id /* block */, UICollectionView *, NSString *, NSIndexPath *, void*, id, SEL

@end
