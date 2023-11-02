
@protocol PXGDisplayAssetAdjustment <NSObject, NSCopying>

@required

- (bool)allowsUnadjustedOpportunisticDelivery;
- (CIImage *)applyToImage:(CIImage *)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
- (long long)contentModeForProposedContentMode:(long long)arg1;
- (bool)isEqualToDisplayAssetAdjustment:(id <PXGDisplayAssetAdjustment>)arg1;
- (struct CGSize { double x1; double x2; })requestSizeForProposedTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)wantsSingleHighQualityDelivery;

@end
