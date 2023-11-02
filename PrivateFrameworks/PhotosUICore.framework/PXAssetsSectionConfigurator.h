
@interface PXAssetsSectionConfigurator : NSObject {
    PXAssetsSectionLayoutSpec * _assetsSectionLayoutSpec;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _containerInsets;
    long long  _variant;
}

@property (nonatomic, readonly) PXAssetsSectionLayoutSpec *assetsSectionLayoutSpec;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } containerInsets;
@property (nonatomic, readonly) long long variant;

- (void).cxx_destruct;
- (id)assetsSectionLayoutSpec;
- (void)configureAssetSectionLayout:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerFrameForAssetSectionLayout:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })containerInsets;
- (struct CGSize { double x1; double x2; })estimatedSizeOfSectionForAssetCollection:(id)arg1 isCurated:(bool)arg2 numberOfAssets:(long long)arg3 referenceSize:(struct CGSize { double x1; double x2; })arg4;
- (id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2;
- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;
- (long long)initialZoomStep;
- (long long)numberOfZoomStepsWithDataSource:(id)arg1;
- (bool)supportsAspectRatioToggle;
- (id)updatedHeaderLayout:(id)arg1 withHeaderStyle:(long long)arg2 forAssetSectionLayout:(id)arg3;
- (long long)variant;

@end
