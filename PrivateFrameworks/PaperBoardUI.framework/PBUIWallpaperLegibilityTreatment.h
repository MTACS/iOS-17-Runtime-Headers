
@interface PBUIWallpaperLegibilityTreatment : NSObject <CABackdropLayerDelegate, CALayerDelegate, NSSecureCoding, PBUIImageTreatment> {
    UIColor * _averageColor;
    CALayer * _dimmedColorLayer;
    CALayer * _dimmingLayer;
    CAGradientLayer * _gradientLayer;
    CABackdropLayer * _luminanceBackdropLayer;
    bool  _needsDimmingTreatment;
    bool  _needsLuminanceTreatment;
}

@property (nonatomic, retain) UIColor *averageColor;
@property (nonatomic, readonly) bool canInterpolateToLowerScales;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsDimmingTreatment;
@property (nonatomic) bool needsLuminanceTreatment;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)averageColor;
- (id)colorByDimmingColor:(id)arg1;
- (bool)commitToRenderingTree:(id)arg1 options:(id)arg2 error:(out id*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)luminanceTreatmentFilters;
- (id)makeDimmingLayer;
- (id)makeGradientLayer;
- (id)makeLuminanceBackdropLayer;
- (bool)needsDimmingTreatment;
- (bool)needsLuminanceTreatment;
- (void)setAverageColor:(id)arg1;
- (void)setNeedsDimmingTreatment:(bool)arg1;
- (void)setNeedsLuminanceTreatment:(bool)arg1;

@end
