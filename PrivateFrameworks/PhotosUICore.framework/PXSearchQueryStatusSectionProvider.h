
@interface PXSearchQueryStatusSectionProvider : NSObject <PXSearchDataSourceSectionProvider> {
    PXSearchQuery * _searchQuery;
    PXSearchQueryResult * _searchQueryResult;
    <PXSearchDataSourceSectionProviderChangeObserver> * changeObserver;
    long long  identifier;
}

@property (nonatomic) <PXSearchDataSourceSectionProviderChangeObserver> *changeObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, retain) PXSearchQuery *searchQuery;
@property (nonatomic, retain) PXSearchQueryResult *searchQueryResult;
@property (nonatomic, readonly, copy) NSArray *sectionIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (bool)_showsQueryStatusFooter;
- (id)cellReuseIdentifierForItemIdentifier:(id)arg1;
- (id)changeObserver;
- (void)configureCell:(id)arg1 forItemIdentifier:(id)arg2;
- (void)configureSupplementaryView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3;
- (long long)identifier;
- (id)init;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (id)layoutForSectionIdentifier:(id)arg1 environment:(id)arg2 collectionViewLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)registerClassesForCellReuseIdentifiers:(id /* block */)arg1;
- (void)registerClassesForSupplementaryViewReuseIdentifiers:(id /* block */)arg1;
- (id)searchQuery;
- (id)searchQueryResult;
- (id)sectionIdentifiers;
- (void)setChangeObserver:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setSearchQuery:(id)arg1 queryResult:(id)arg2;
- (void)setSearchQueryResult:(id)arg1;
- (id)supplementaryViewReuseIdentifierForKind:(id)arg1 indexPath:(id)arg2;
- (unsigned long long)type;

@end
