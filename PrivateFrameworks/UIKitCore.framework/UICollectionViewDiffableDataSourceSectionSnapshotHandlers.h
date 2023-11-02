
@interface UICollectionViewDiffableDataSourceSectionSnapshotHandlers : NSObject <NSCopying> {
    id /* block */  _shouldCollapseItemHandler;
    id /* block */  _shouldExpandItemHandler;
    id /* block */  _snapshotForExpandingParentItemHandler;
    id /* block */  _willCollapseItemHandler;
    id /* block */  _willExpandItemHandler;
}

@property (nonatomic, copy) id /* block */ shouldCollapseItemHandler;
@property (nonatomic, copy) id /* block */ shouldExpandItemHandler;
@property (nonatomic, copy) id /* block */ snapshotForExpandingParentItemHandler;
@property (nonatomic, copy) id /* block */ willCollapseItemHandler;
@property (nonatomic, copy) id /* block */ willExpandItemHandler;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithShouldExpandItemHandler:(id /* block */)arg1 willExpandItemHandler:(id /* block */)arg2 shouldCollapseItemHandler:(id /* block */)arg3 willCollapseItemHandler:(id /* block */)arg4 snapshotForExpandingParentItemHandler:(id /* block */)arg5;
- (void)setShouldCollapseItemHandler:(id /* block */)arg1;
- (void)setShouldExpandItemHandler:(id /* block */)arg1;
- (void)setSnapshotForExpandingParentItemHandler:(id /* block */)arg1;
- (void)setWillCollapseItemHandler:(id /* block */)arg1;
- (void)setWillExpandItemHandler:(id /* block */)arg1;
- (id /* block */)shouldCollapseItemHandler;
- (id /* block */)shouldExpandItemHandler;
- (id /* block */)snapshotForExpandingParentItemHandler;
- (id /* block */)willCollapseItemHandler;
- (id /* block */)willExpandItemHandler;

@end
