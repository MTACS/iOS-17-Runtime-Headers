
@interface __UIDiffableDataSourceSnapshot : __UIDiffableDataSource <NSCopying> {
    NSMutableArray * _pendingSnapshotUpdates;
    <_UIDiffableDataSourceState> * _state;
}

- (void).cxx_destruct;
- (void)_commitUpdateAtomic:(id)arg1;
- (id)_identifiersForSectionsOrItems:(bool)arg1 reconfiguredOrReloaded:(bool)arg2;
- (void)_prepareForApplyToDataSource;
- (void)_validateReloadUpdateThrowingIfNeeded:(id)arg1;
- (void)appendItemsWithIdentifiers:(id)arg1;
- (void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2;
- (void)appendSectionWithIdentifier:(id)arg1;
- (void)appendSectionsWithIdentifiers:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deleteAllItems;
- (void)deleteItemsWithIdentifiers:(id)arg1;
- (void)deleteSectionsWithIdentifiers:(id)arg1;
- (id)description;
- (long long)indexForSectionIdentifier:(id)arg1;
- (long long)indexOfItemIdentifier:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)init;
- (id)initWithState:(id)arg1;
- (void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
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
- (id)pendingSnapshotUpdates;
- (void)reconfigureItemsWithIdentifiers:(id)arg1;
- (id)reconfiguredItemIdentifiers;
- (void)reloadItemsWithIdentifiers:(id)arg1;
- (void)reloadSectionsWithIdentifiers:(id)arg1;
- (id)reloadedItemIdentifiers;
- (id)reloadedSectionIdentifiers;
- (id)sectionIdentifierForIndex:(long long)arg1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (id)sectionIdentifiers;
- (id)state;

@end
