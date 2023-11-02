
@interface MLCOptimizer : NSObject <NSCopying> {
    bool  _appliesGradientClipping;
    float  _customGlobalNorm;
    MLCDevice * _device;
    NSArray * _deviceOps;
    float  _gradientClipMax;
    float  _gradientClipMin;
    int  _gradientClippingType;
    float  _gradientRescale;
    float  _learningRate;
    float  _maximumClippingNorm;
    unsigned long long  _numOptimizerDataBuffers;
    NSMutableArray * _oneStepOptimizerBuffers;
    float  _regularizationScale;
    int  _regularizationType;
}

@property (nonatomic) bool appliesGradientClipping;
@property (nonatomic, readonly) float customGlobalNorm;
@property (nonatomic, retain) MLCDevice *device;
@property (nonatomic, retain) NSArray *deviceOps;
@property (nonatomic, readonly) float gradientClipMax;
@property (nonatomic, readonly) float gradientClipMin;
@property (nonatomic, readonly) int gradientClippingType;
@property (nonatomic, readonly) float gradientRescale;
@property (nonatomic) float learningRate;
@property (nonatomic, readonly) float maximumClippingNorm;
@property (nonatomic) unsigned long long numOptimizerDataBuffers;
@property (nonatomic, retain) NSMutableArray *oneStepOptimizerBuffers;
@property (nonatomic, readonly) float regularizationScale;
@property (nonatomic, readonly) int regularizationType;

- (void).cxx_destruct;
- (bool)appliesGradientClipping;
- (void)bindDevice:(id)arg1 deviceOps:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)customGlobalNorm;
- (id)description;
- (id)device;
- (id)deviceOps;
- (float)gradientClipMax;
- (float)gradientClipMin;
- (int)gradientClippingType;
- (float)gradientRescale;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 applyGradientClipping:(bool)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationScale:(float)arg6 regularizationType:(int)arg7;
- (id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 applyGradientClipping:(bool)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationScale:(float)arg6 regularizationType:(int)arg7 gradientClippingType:(int)arg8 maximumClippingNorm:(float)arg9 customGlobalNorm:(float)arg10;
- (float)learningRate;
- (float)maximumClippingNorm;
- (unsigned long long)numOptimizerDataBuffers;
- (id)oneStepOptimizerBuffers;
- (float)regularizationScale;
- (int)regularizationType;
- (void)setAppliesGradientClipping:(bool)arg1;
- (void)setDevice:(id)arg1;
- (void)setDeviceOps:(id)arg1;
- (void)setLearningRate:(float)arg1;
- (void)setNumOptimizerDataBuffers:(unsigned long long)arg1;
- (void)setOneStepOptimizerBuffers:(id)arg1;

@end
