
@interface PXStoryColorNormalizationAdjustment : NSObject <PXGDisplayAssetAdjustment> {
    NSData * _colorCubeData;
    PIColorNormalizationFilter * _filter;
    double  _intensity;
    bool  _useColorCube;
    bool  _useFalseColor;
}

@property (nonatomic, readonly) NSString *adjustmentDetails;
@property (nonatomic, readonly) NSString *adjustmentSummary;
@property (nonatomic, readonly) bool allowsUnadjustedOpportunisticDelivery;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PIColorNormalizationFilter *filter;
@property (readonly) unsigned long long hash;
@property (nonatomic) double intensity;
@property (nonatomic, readonly) PFStoryRecipeDisplayAssetNormalization *normalization;
@property (readonly) Class superclass;
@property (nonatomic) bool useColorCube;
@property (nonatomic) bool useFalseColor;
@property (nonatomic, readonly) bool wantsSingleHighQualityDelivery;

+ (id)_falseColorMatrixParameters;
+ (id)autoAdjustmentForAsset:(id)arg1;
+ (id)colorCubeForNormalization:(id)arg1 targetColorSpace:(struct CGColorSpace { }*)arg2;
+ (id)dummyAdjustment;
+ (id)dummyNormalization;

- (void).cxx_destruct;
- (id)adjustmentDetails;
- (id)adjustmentSummary;
- (bool)allowsUnadjustedOpportunisticDelivery;
- (id)applyToImage:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
- (long long)contentModeForProposedContentMode:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)filter;
- (unsigned long long)hash;
- (id)initWithNormalization:(id)arg1;
- (id)initWithNormalizationFilter:(id)arg1;
- (double)intensity;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDisplayAssetAdjustment:(id)arg1;
- (id)normalization;
- (struct CGSize { double x1; double x2; })requestSizeForProposedTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIntensity:(double)arg1;
- (void)setUseColorCube:(bool)arg1;
- (void)setUseFalseColor:(bool)arg1;
- (bool)useColorCube;
- (bool)useFalseColor;
- (bool)wantsSingleHighQualityDelivery;

@end
