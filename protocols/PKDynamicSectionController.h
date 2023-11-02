
@protocol PKDynamicSectionController <NSObject>

@required

- (NSArray *)identifiers;
- (NSCollectionLayoutSection *)layoutWithLayoutEnvironment:(id <NSCollectionLayoutEnvironment>)arg1 sectionIdentifier:(NSString *)arg2;
- (NSDiffableDataSourceSectionSnapshot *)snapshotWithPreviousSnapshot:(NSDiffableDataSourceSectionSnapshot *)arg1 forSectionIdentifier:(NSString *)arg2;

@optional

- (UICollectionViewCellRegistration *)cellRegistration;
- (UICollectionViewCellRegistration *)cellRegistrationForItem:(id)arg1;
- (void)configureSupplementaryRegistration:(UICollectionReusableView *)arg1 elementKind:(NSString *)arg2 sectionIdentifier:(NSString *)arg3;
- (UIContextMenuConfiguration *)contextMenuConfigurationForItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (void)setCellRegistration:(UICollectionViewCellRegistration *)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (Class)supplementaryRegistrationClassForKind:(NSString *)arg1 sectionIdentifier:(NSString *)arg2;
- (void)willDisplayItem:(id)arg1;

@end
