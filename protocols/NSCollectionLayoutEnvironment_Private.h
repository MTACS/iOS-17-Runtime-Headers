
@protocol NSCollectionLayoutEnvironment_Private <NSCollectionLayoutEnvironment>

@required

- (<_UIDataSourceSnapshotTranslating> *)_dataSourceSnapshot;
- (long long)_sectionIndex;
- (bool)_wantsCollapsedTopSpacing;

@end
