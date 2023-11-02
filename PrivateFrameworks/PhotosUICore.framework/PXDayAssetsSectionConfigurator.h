
@interface PXDayAssetsSectionConfigurator : PXAssetsSectionConfigurator {
    PXAssetsSectionBodyAllPhotosGridLayoutSpec * _allPhotosGridBodySpec;
    PXDayAssetsSectionBodyLayoutSpec * _daysBodySpec;
    PXDayAssetsSectionHeaderLayoutSpec * _floatingHeaderSpec;
}

- (void).cxx_destruct;
- (id)_bodySpecForBodyStyle:(long long)arg1 zoomLevel:(long long)arg2;
- (void)_configureSelectAllButtonOfSectionLayout:(id)arg1;
- (void)_getHeaderAndBodyStylesForAssetCollection:(id)arg1 isCurated:(bool)arg2 zoomLevel:(long long)arg3 headerStyle:(long long*)arg4 bodyStyle:(long long*)arg5;
- (void)configureAssetSectionLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })estimatedSizeOfSectionForAssetCollection:(id)arg1 isCurated:(bool)arg2 numberOfAssets:(long long)arg3 referenceSize:(struct CGSize { double x1; double x2; })arg4;
- (id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;

@end
