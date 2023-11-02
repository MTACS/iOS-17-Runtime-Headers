
@interface MLCResizeGPUDeviceOps : MLCGPUDeviceOps {
    bool  _alignCorners;
    bool  _isSpecialCasedNearestForwardKernel;
    float  _scaleFactorX;
    float  _scaleFactorY;
}

@property (nonatomic) bool alignCorners;
@property (nonatomic) bool isSpecialCasedNearestForwardKernel;
@property (nonatomic) float scaleFactorX;
@property (nonatomic) float scaleFactorY;

+ (id)deviceOpsWithForwardKernel:(id)arg1 gradientKernel:(id)arg2;

- (bool)alignCorners;
- (id)initWithForwardKernel:(id)arg1 gradientKernel:(id)arg2;
- (bool)isSpecialCasedNearestForwardKernel;
- (float)scaleFactorX;
- (float)scaleFactorY;
- (void)setAlignCorners:(bool)arg1;
- (void)setIsSpecialCasedNearestForwardKernel:(bool)arg1;
- (void)setScaleFactorX:(float)arg1;
- (void)setScaleFactorY:(float)arg1;

@end
