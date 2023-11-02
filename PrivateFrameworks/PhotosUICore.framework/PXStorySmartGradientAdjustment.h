
@interface PXStorySmartGradientAdjustment : NSObject <PXGDisplayAssetAdjustment> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedSourceRect;
    double  _simpleBlurEdgeStretch;
    double  _simpleBlurExposure;
    double  _simpleBlurRadius;
    bool  _simpleBlurRepeatEdges;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    bool  _useSimpleBlur;
    bool  _useSmartColor;
}

@property (nonatomic, readonly) bool allowsUnadjustedOpportunisticDelivery;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedSourceRect;
@property (nonatomic) double simpleBlurEdgeStretch;
@property (nonatomic) double simpleBlurExposure;
@property (nonatomic) double simpleBlurRadius;
@property (nonatomic) bool simpleBlurRepeatEdges;
@property (readonly) Class superclass;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic) bool useSimpleBlur;
@property (nonatomic) bool useSmartColor;
@property (nonatomic, readonly) bool wantsSingleHighQualityDelivery;

- (bool)allowsUnadjustedOpportunisticDelivery;
- (id)applyToImage:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
- (long long)contentModeForProposedContentMode:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDisplayAssetAdjustment:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedSourceRect;
- (struct CGSize { double x1; double x2; })requestSizeForProposedTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNormalizedSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSimpleBlurEdgeStretch:(double)arg1;
- (void)setSimpleBlurExposure:(double)arg1;
- (void)setSimpleBlurRadius:(double)arg1;
- (void)setSimpleBlurRepeatEdges:(bool)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUseSimpleBlur:(bool)arg1;
- (void)setUseSmartColor:(bool)arg1;
- (double)simpleBlurEdgeStretch;
- (double)simpleBlurExposure;
- (double)simpleBlurRadius;
- (bool)simpleBlurRepeatEdges;
- (struct CGSize { double x1; double x2; })targetSize;
- (bool)useSimpleBlur;
- (bool)useSmartColor;
- (bool)wantsSingleHighQualityDelivery;

@end
