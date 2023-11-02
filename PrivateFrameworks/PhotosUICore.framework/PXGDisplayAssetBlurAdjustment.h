
@interface PXGDisplayAssetBlurAdjustment : NSObject <PXGDisplayAssetAdjustment> {
    double  _blurRadius;
    double  _darkeningOverlayOpacity;
}

@property (nonatomic, readonly) bool allowsUnadjustedOpportunisticDelivery;
@property (nonatomic, readonly) double blurRadius;
@property (nonatomic, readonly) double darkeningOverlayOpacity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsSingleHighQualityDelivery;

- (bool)allowsUnadjustedOpportunisticDelivery;
- (id)applyToImage:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
- (double)blurRadius;
- (long long)contentModeForProposedContentMode:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)darkeningOverlayOpacity;
- (unsigned long long)hash;
- (id)initWithBlurRadius:(double)arg1 darkeningOverlayOpacity:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDisplayAssetAdjustment:(id)arg1;
- (struct CGSize { double x1; double x2; })requestSizeForProposedTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)wantsSingleHighQualityDelivery;

@end
