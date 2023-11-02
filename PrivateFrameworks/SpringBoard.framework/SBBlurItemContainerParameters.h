
@interface SBBlurItemContainerParameters : NSObject {
    SBFFluidBehaviorSettings * _blurAnimationSettings;
    double  _blurRadius;
    long long  _inputIntermediateBitDepth;
    long long  _inputQuality;
    double  _rasterizationScale;
    bool  _shouldRasterize;
}

@property (nonatomic, readonly) SBFFluidBehaviorSettings *blurAnimationSettings;
@property (nonatomic, readonly) double blurRadius;
@property (nonatomic, readonly) long long inputIntermediateBitDepth;
@property (nonatomic, readonly) long long inputQuality;
@property (nonatomic, readonly) double rasterizationScale;
@property (nonatomic, readonly) bool shouldRasterize;

+ (id)defaultCrossblurBlurParameters;

- (void).cxx_destruct;
- (id)blurAnimationSettings;
- (double)blurRadius;
- (id)initWithBlurRadius:(double)arg1 shouldRasterize:(bool)arg2 rasterizationScale:(double)arg3 inputQuality:(long long)arg4 inputIntermediateBitDepth:(long long)arg5 blurAnimationSettings:(id)arg6;
- (long long)inputIntermediateBitDepth;
- (long long)inputQuality;
- (double)rasterizationScale;
- (bool)shouldRasterize;

@end
