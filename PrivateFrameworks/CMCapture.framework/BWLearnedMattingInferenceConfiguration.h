
@interface BWLearnedMattingInferenceConfiguration : BWTiledEspressoInferenceConfiguration {
    bool  _appliesFinalCropRect;
    float  _mainImageDownscalingFactor;
    bool  _produceLowResPersonMaskClone;
    float  _targetAspectRatio;
}

@property (nonatomic) bool appliesFinalCropRect;
@property (nonatomic) float mainImageDownscalingFactor;
@property (nonatomic) bool produceLowResPersonMaskClone;
@property (nonatomic) float targetAspectRatio;

- (bool)appliesFinalCropRect;
- (void)dealloc;
- (float)mainImageDownscalingFactor;
- (bool)produceLowResPersonMaskClone;
- (void)setAppliesFinalCropRect:(bool)arg1;
- (void)setMainImageDownscalingFactor:(float)arg1;
- (void)setProduceLowResPersonMaskClone:(bool)arg1;
- (void)setTargetAspectRatio:(float)arg1;
- (float)targetAspectRatio;

@end
