
@interface PXSearchTapToRadarSectionProvider : NSObject <PXSearchDataSourceSectionProvider> {
    <PXSearchTapToRadarSectionProviderDelegate> * _delegate;
    bool  _shouldDisplayRadarDescriptionLabel;
    <PXSearchDataSourceSectionProviderChangeObserver> * changeObserver;
    long long  identifier;
}

@property (nonatomic) <PXSearchDataSourceSectionProviderChangeObserver> *changeObserver;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXSearchTapToRadarSectionProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly, copy) NSArray *sectionIdentifiers;
@property (nonatomic) bool shouldDisplayRadarDescriptionLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)cellReuseIdentifierForItemIdentifier:(id)arg1;
- (id)changeObserver;
- (void)configureCell:(id)arg1 forItemIdentifier:(id)arg2;
- (void)configureSupplementaryView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3;
- (id)delegate;
- (long long)identifier;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (id)layoutForSectionIdentifier:(id)arg1 environment:(id)arg2 collectionViewLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)registerClassesForCellReuseIdentifiers:(id /* block */)arg1;
- (void)registerClassesForSupplementaryViewReuseIdentifiers:(id /* block */)arg1;
- (id)sectionIdentifiers;
- (void)setChangeObserver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldDisplayRadarDescriptionLabel:(bool)arg1;
- (bool)shouldDisplayRadarDescriptionLabel;
- (id)supplementaryViewReuseIdentifierForKind:(id)arg1 indexPath:(id)arg2;
- (unsigned long long)type;

@end
