
@interface _UIDiffableDataSourceSectionControllerHandlers : NSObject <NSCopying> {
    id /* block */  _childSnapshotForExpandingParentHandler;
    id /* block */  _shouldCollapseItemHandler;
    id /* block */  _shouldExpandItemHandler;
    id /* block */  _willCollapseItemHandler;
    id /* block */  _willExpandItemHandler;
}

@property (nonatomic, copy) id /* block */ childSnapshotForExpandingParentHandler;
@property (nonatomic, copy) id /* block */ shouldCollapseItemHandler;
@property (nonatomic, copy) id /* block */ shouldExpandItemHandler;
@property (nonatomic, copy) id /* block */ willCollapseItemHandler;
@property (nonatomic, copy) id /* block */ willExpandItemHandler;

- (void).cxx_destruct;
- (id /* block */)childSnapshotForExpandingParentHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setChildSnapshotForExpandingParentHandler:(id /* block */)arg1;
- (void)setShouldCollapseItemHandler:(id /* block */)arg1;
- (void)setShouldExpandItemHandler:(id /* block */)arg1;
- (void)setWillCollapseItemHandler:(id /* block */)arg1;
- (void)setWillExpandItemHandler:(id /* block */)arg1;
- (id /* block */)shouldCollapseItemHandler;
- (id /* block */)shouldExpandItemHandler;
- (id /* block */)willCollapseItemHandler;
- (id /* block */)willExpandItemHandler;

@end
