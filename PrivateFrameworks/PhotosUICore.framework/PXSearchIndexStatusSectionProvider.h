
@interface PXSearchIndexStatusSectionProvider : NSObject <PXSearchDataSourceSectionProvider, PXSettingsKeyObserver> {
    bool  _isAllowedToBeVisible;
    bool  _isIndexingPaused;
    unsigned long long  _itemsRemainingCount;
    <PXSearchDataSourceSectionProviderChangeObserver> * changeObserver;
    long long  identifier;
}

@property (nonatomic) <PXSearchDataSourceSectionProviderChangeObserver> *changeObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic) bool isAllowedToBeVisible;
@property (nonatomic) bool isIndexingPaused;
@property (nonatomic) unsigned long long itemsRemainingCount;
@property (nonatomic, readonly, copy) NSArray *sectionIdentifiers;
@property (nonatomic, readonly) bool showsIndexingFooter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)cellReuseIdentifierForItemIdentifier:(id)arg1;
- (id)changeObserver;
- (void)configureCell:(id)arg1 forItemIdentifier:(id)arg2;
- (void)configureSupplementaryView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3;
- (void)dealloc;
- (long long)identifier;
- (id)init;
- (bool)isAllowedToBeVisible;
- (bool)isIndexingPaused;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (unsigned long long)itemsRemainingCount;
- (id)layoutForSectionIdentifier:(id)arg1 environment:(id)arg2 collectionViewLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)registerClassesForCellReuseIdentifiers:(id /* block */)arg1;
- (void)registerClassesForSupplementaryViewReuseIdentifiers:(id /* block */)arg1;
- (void)searchIndexStatusDidChange:(id)arg1;
- (id)sectionIdentifiers;
- (void)setChangeObserver:(id)arg1;
- (void)setIsAllowedToBeVisible:(bool)arg1;
- (void)setIsIndexingPaused:(bool)arg1;
- (void)setItemsRemainingCount:(unsigned long long)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)showsIndexingFooter;
- (id)supplementaryViewReuseIdentifierForKind:(id)arg1 indexPath:(id)arg2;
- (unsigned long long)type;

@end
