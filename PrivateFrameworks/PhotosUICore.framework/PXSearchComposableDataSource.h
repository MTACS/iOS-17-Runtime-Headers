
@interface PXSearchComposableDataSource : NSObject <PXSearchDataSourceSectionProviderChangeObserver, UICollectionViewDataSourcePrefetching> {
    <PXSearchComposableDataSourceChangeObserver> * _changeObserver;
    UICollectionViewDiffableDataSource * _diffableDataSource;
    NSArray * _sectionProviders;
}

@property (nonatomic) <PXSearchComposableDataSourceChangeObserver> *changeObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *diffableDataSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *itemIdentifiers;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly, copy) NSArray *sectionIdentifiers;
@property (nonatomic, copy) NSArray *sectionProviders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_configuredCellForCollectionView:(id)arg1 indexPath:(id)arg2 itemIdentifier:(id)arg3;
- (id)_configuredSupplementaryViewForCollectionView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3;
- (id)_convertIndexPath:(id)arg1 toPXSearchDataSourceSectionProvider:(id)arg2;
- (void)_registerClassesForCollectionView:(id)arg1 withPXSearchDataSourceSectionProviders:(id)arg2;
- (void)_reloadDataAnimated:(bool)arg1 reloadItemIdentifiers:(id)arg2;
- (id)changeObserver;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (id)diffableDataSource;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)initWithCollectionView:(id)arg1 searchDataSourceSectionProviders:(id)arg2;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (id)itemIdentifiers;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(id)arg1;
- (long long)numberOfSections;
- (void)searchDataSourceSectionProviderDidChange:(id)arg1 animateChanges:(bool)arg2;
- (void)searchDataSourceSectionProviderDidChange:(id)arg1 reloadItemIdentifiers:(id)arg2 animateChanges:(bool)arg3;
- (id)searchDataSourceSectionProviderForIndexPath:(id)arg1;
- (id)searchDataSourceSectionProviderForItemIdentifier:(id)arg1;
- (id)searchDataSourceSectionProviderForSection:(long long)arg1;
- (id)searchDataSourceSectionProviderForSectionIdentifier:(id)arg1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (id)sectionIdentifiers;
- (id)sectionProviders;
- (void)setChangeObserver:(id)arg1;
- (void)setDiffableDataSource:(id)arg1;
- (void)setSectionProviders:(id)arg1;

@end
