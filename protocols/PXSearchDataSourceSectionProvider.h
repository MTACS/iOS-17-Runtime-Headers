
@protocol PXSearchDataSourceSectionProvider <NSObject>

@required

- (NSString *)cellReuseIdentifierForItemIdentifier:(NSString *)arg1;
- (<PXSearchDataSourceSectionProviderChangeObserver> *)changeObserver;
- (void)configureCell:(UICollectionViewCell *)arg1 forItemIdentifier:(NSString *)arg2;
- (long long)identifier;
- (NSArray *)itemIdentifiersInSectionWithIdentifier:(NSString *)arg1;
- (NSCollectionLayoutSection *)layoutForSectionIdentifier:(NSString *)arg1 environment:(id <NSCollectionLayoutEnvironment>)arg2 collectionViewLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)registerClassesForCellReuseIdentifiers:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, Class, NSString *, void*
- (NSArray *)sectionIdentifiers;
- (void)setChangeObserver:(id <PXSearchDataSourceSectionProviderChangeObserver>)arg1;
- (unsigned long long)type;

@optional

- (void)configureSupplementaryView:(UICollectionReusableView *)arg1 kind:(NSString *)arg2 indexPath:(NSIndexPath *)arg3;
- (void)prefetchItemsForItemIdentifiers:(NSArray *)arg1;
- (void)registerClassesForSupplementaryViewReuseIdentifiers:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, Class, NSString *, NSString *, void*
- (NSString *)supplementaryViewReuseIdentifierForKind:(NSString *)arg1 indexPath:(NSIndexPath *)arg2;

@end
