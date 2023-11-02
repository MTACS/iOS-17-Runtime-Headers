
@interface HFCustomDiffableDataSource : NSObject <HFDiffableDataSource> {
    HFCustomDiffableDataSourceSnapshot * _snapshot;
    id /* block */  supplementaryViewProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, retain) HFCustomDiffableDataSourceSnapshot *snapshot;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ supplementaryViewProvider;

- (void).cxx_destruct;
- (id)_indexPathForItem:(id)arg1 inDisplayedItemsArray:(id)arg2;
- (unsigned long long)_sectionForItem:(id)arg1;
- (unsigned long long)_sectionForItem:(id)arg1 assertOnNotFound:(bool)arg2;
- (void)applySnapshot:(id)arg1 animatingDifferences:(bool)arg2 completion:(id /* block */)arg3;
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(bool)arg3 completion:(id /* block */)arg4;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)init;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setSupplementaryViewProvider:(id /* block */)arg1;
- (id)snapshot;
- (id /* block */)supplementaryViewProvider;

@end
