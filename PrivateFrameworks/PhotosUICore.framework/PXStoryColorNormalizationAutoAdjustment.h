
@interface PXStoryColorNormalizationAutoAdjustment : PXStoryColorNormalizationAdjustment {
    <PXDisplayAsset> * _asset;
}

@property (nonatomic, retain) <PXDisplayAsset> *asset;

- (void).cxx_destruct;
- (id)adjustmentSummary;
- (id)applyToImage:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
- (id)asset;
- (bool)isEqualToDisplayAssetAdjustment:(id)arg1;
- (void)setAsset:(id)arg1;

@end
