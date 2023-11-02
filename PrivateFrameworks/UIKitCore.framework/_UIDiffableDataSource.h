
@interface _UIDiffableDataSource : NSObject {
    __UIDiffableDataSource * _dsImpl;
}

@property (nonatomic, readonly) NSArray *itemIdentifiers;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly) NSArray *sectionIdentifiers;

- (void).cxx_destruct;
- (id)_impl;
- (void)appendItemsWithIdentifiers:(id)arg1;
- (void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2;
- (void)appendSectionWithIdentifier:(id)arg1;
- (void)appendSectionsWithIdentifiers:(id)arg1;
- (void)applyDifferencesFromSnapshot:(id)arg1;
- (void)applyDifferencesFromSnapshot:(id)arg1 completion:(id /* block */)arg2;
- (void)applySnapshot:(id)arg1;
- (long long)defaultRowAnimation;
- (void)deleteAllItems;
- (void)deleteItemsWithIdentifiers:(id)arg1;
- (void)deleteSectionsWithIdentifiers:(id)arg1;
- (id)dsImpl;
- (id)emptySnapshot;
- (long long)indexOfItemIdentifier:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)init;
- (id)initWithCollectionView:(id)arg1 cellProvider:(id /* block */)arg2;
- (id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(id /* block */)arg2 cellConfigurationHandler:(id /* block */)arg3;
- (id)initWithDiffableDataSource:(id)arg1;
- (id)initWithTableView:(id)arg1 cellProvider:(id /* block */)arg2;
- (id)initWithTableView:(id)arg1 reuseIdentifierProvider:(id /* block */)arg2 cellConfigurationHandler:(id /* block */)arg3;
- (id)initWithViewUpdatesSink:(id)arg1;
- (void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (id)itemIdentifiers;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(id)arg1;
- (long long)numberOfSections;
- (void)reloadFromSnapshot:(id)arg1;
- (void)reloadFromSnapshot:(id)arg1 completion:(id /* block */)arg2;
- (void)reloadItemsWithIdentifiers:(id)arg1;
- (void)reloadSectionsWithIdentifiers:(id)arg1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (id)sectionIdentifiers;
- (void)setDefaultRowAnimation:(long long)arg1;
- (id)snapshot;

@end
