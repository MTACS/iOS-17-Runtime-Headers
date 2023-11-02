
@interface PXSearchSuggestionsSectionProvider : NSObject <PXSearchDataSourceSectionProvider> {
    NSDictionary * _identifierToSuggestionMap;
    bool  _showsSuggestedSearchesHeader;
    NSArray * _sortedItemIdentifiers;
    <PXSearchDataSourceSectionProviderChangeObserver> * changeObserver;
    long long  identifier;
}

@property (nonatomic) <PXSearchDataSourceSectionProviderChangeObserver> *changeObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, copy) NSDictionary *identifierToSuggestionMap;
@property (nonatomic, readonly, copy) NSArray *sectionIdentifiers;
@property (nonatomic) bool showsSuggestedSearchesHeader;
@property (nonatomic, copy) NSArray *sortedItemIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (void)_setSearchSuggestions:(id)arg1 showsSuggestedSearchesHeader:(bool)arg2;
- (id)cellReuseIdentifierForItemIdentifier:(id)arg1;
- (id)changeObserver;
- (void)configureCell:(id)arg1 forItemIdentifier:(id)arg2;
- (void)configureSupplementaryView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3;
- (long long)identifier;
- (id)identifierToSuggestionMap;
- (id)init;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (id)layoutForSectionIdentifier:(id)arg1 environment:(id)arg2 collectionViewLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)registerClassesForCellReuseIdentifiers:(id /* block */)arg1;
- (void)registerClassesForSupplementaryViewReuseIdentifiers:(id /* block */)arg1;
- (id)searchSuggestionForIdentifier:(id)arg1;
- (id)sectionIdentifiers;
- (void)setChangeObserver:(id)arg1;
- (void)setIdentifierToSuggestionMap:(id)arg1;
- (void)setSearchQueryResult:(id)arg1;
- (void)setShowsSuggestedSearchesHeader:(bool)arg1;
- (void)setSortedItemIdentifiers:(id)arg1;
- (bool)showsSuggestedSearchesHeader;
- (id)sortedItemIdentifiers;
- (id)suggestions;
- (id)supplementaryViewReuseIdentifierForKind:(id)arg1 indexPath:(id)arg2;
- (unsigned long long)type;

@end
