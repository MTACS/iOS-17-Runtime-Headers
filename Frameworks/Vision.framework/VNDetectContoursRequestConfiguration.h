
@interface VNDetectContoursRequestConfiguration : VNImageBasedRequestConfiguration {
    float  _contrastAdjustment;
    NSNumber * _contrastPivot;
    bool  _detectsDarkOnLight;
    bool  _forceUseInputCVPixelBufferDirectly;
    bool  _inHierarchy;
    unsigned long long  _maximumImageDimension;
}

@property (nonatomic) float contrastAdjustment;
@property (nonatomic, retain) NSNumber *contrastPivot;
@property (nonatomic) bool detectsDarkOnLight;
@property (nonatomic) bool forceUseInputCVPixelBufferDirectly;
@property (nonatomic) bool inHierarchy;
@property (nonatomic) unsigned long long maximumImageDimension;

- (void).cxx_destruct;
- (float)contrastAdjustment;
- (id)contrastPivot;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)detectsDarkOnLight;
- (bool)forceUseInputCVPixelBufferDirectly;
- (bool)inHierarchy;
- (id)initWithRequestClass:(Class)arg1;
- (unsigned long long)maximumImageDimension;
- (void)setContrastAdjustment:(float)arg1;
- (void)setContrastPivot:(id)arg1;
- (void)setDetectsDarkOnLight:(bool)arg1;
- (void)setForceUseInputCVPixelBufferDirectly:(bool)arg1;
- (void)setInHierarchy:(bool)arg1;
- (void)setMaximumImageDimension:(unsigned long long)arg1;

@end
