
@protocol PXPhotosSectionHeaderLayoutProvider <NSObject>

@required

- (PXGLayout<PXPhotosSectionedLayoutHeader> *)createSectionHeaderLayoutForSectionedLayout:(PXPhotosSectionedLayout *)arg1 dataSource:(PXAssetsDataSource *)arg2 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3 spec:(PXPhotosLayoutSpec *)arg4 outAlignment:(unsigned long long*)arg5;
- (void)sectionedLayout:(PXPhotosSectionedLayout *)arg1 headerLayout:(PXGLayout<PXPhotosSectionedLayoutHeader> *)arg2 didChangeDataSource:(PXAssetsDataSource *)arg3 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg4 hasSectionChanges:(bool)arg5;

@optional

- (void)configureSectionHeaderLayout:(PXGLayout<PXPhotosSectionedLayoutHeader> *)arg1 inAssetSectionLayout:(PXAssetsSectionLayout *)arg2 forSectionedLayout:(PXPhotosSectionedLayout *)arg3;
- (void)configureTopHeaderLayout:(PXGLayout<PXPhotosSectionedLayoutHeader> *)arg1 dataSource:(PXAssetsDataSource *)arg2 spec:(PXPhotosLayoutSpec *)arg3;
- (PXGLayout<PXPhotosSectionedLayoutHeader> *)createTopHeaderLayoutForDataSource:(PXAssetsDataSource *)arg1 spec:(PXPhotosLayoutSpec *)arg2 outShouldFloat:(bool*)arg3;
- (PXPhotosGridFloatingHeaderSnapshot *)floatingHeaderSnapshotForSectionedLayout:(PXPhotosSectionedLayout *)arg1 dataSource:(PXAssetsDataSource *)arg2 sectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg3;
- (<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> *)invalidationDelegate;
- (void)setInvalidationDelegate:(id <PXPhotosSectionHeaderLayoutProviderInvalidationDelegate>)arg1;
- (void)setTopHeaderInvalidationDelegate:(id <PXPhotosSectionHeaderLayoutProviderInvalidationDelegate>)arg1;
- (<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> *)topHeaderInvalidationDelegate;
- (void)topHeaderLayout:(PXGLayout<PXPhotosSectionedLayoutHeader> *)arg1 didChangeDataSource:(PXAssetsDataSource *)arg2;

@end
