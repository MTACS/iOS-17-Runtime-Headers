
@interface PXAssetsSectionGridConfigurator : PXAssetsSectionConfigurator {
    bool  _aspectFitContent;
    long long  _zoomStep;
}

@property (nonatomic) bool aspectFitContent;
@property (nonatomic, readonly) bool supportsAspectRatioToggle;
@property (nonatomic) long long zoomStep;

- (void)_configureGridLayout:(id)arg1 inSectionLayout:(id)arg2;
- (struct CGSize { double x1; double x2; })_interItemSpacingForLayout:(id)arg1 forSpec:(id)arg2;
- (bool)_layoutHasIndividualItems:(id)arg1 forSpec:(id)arg2;
- (bool)_layoutIsAspectFit:(id)arg1 forSpec:(id)arg2;
- (bool)aspectFitContent;
- (void)configureAssetSectionLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })estimatedSizeOfSectionForAssetCollection:(id)arg1 isCurated:(bool)arg2 numberOfAssets:(long long)arg3 referenceSize:(struct CGSize { double x1; double x2; })arg4;
- (id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2;
- (long long)numberOfZoomStepsWithDataSource:(id)arg1;
- (void)setAspectFitContent:(bool)arg1;
- (void)setZoomStep:(long long)arg1;
- (bool)supportsAspectRatioToggle;
- (long long)zoomStep;

@end
