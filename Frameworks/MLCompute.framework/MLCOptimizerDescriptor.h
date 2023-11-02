
@interface MLCOptimizerDescriptor : NSObject <NSCopying> {
    bool  _appliesGradientClipping;
    float  _customGlobalNorm;
    float  _gradientClipMax;
    float  _gradientClipMin;
    int  _gradientClippingType;
    float  _gradientRescale;
    float  _learningRate;
    float  _maximumClippingNorm;
    float  _regularizationScale;
    int  _regularizationType;
}

@property (nonatomic, readonly) bool appliesGradientClipping;
@property (nonatomic, readonly) float customGlobalNorm;
@property (nonatomic, readonly) float gradientClipMax;
@property (nonatomic, readonly) float gradientClipMin;
@property (nonatomic, readonly) int gradientClippingType;
@property (nonatomic, readonly) float gradientRescale;
@property (nonatomic, readonly) float learningRate;
@property (nonatomic, readonly) float maximumClippingNorm;
@property (nonatomic, readonly) float regularizationScale;
@property (nonatomic, readonly) int regularizationType;

+ (id)descriptorWithLearningRate:(float)arg1 gradientRescale:(float)arg2 appliesGradientClipping:(bool)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationType:(int)arg6 regularizationScale:(float)arg7;
+ (id)descriptorWithLearningRate:(float)arg1 gradientRescale:(float)arg2 appliesGradientClipping:(bool)arg3 gradientClippingType:(int)arg4 gradientClipMax:(float)arg5 gradientClipMin:(float)arg6 maximumClippingNorm:(float)arg7 customGlobalNorm:(float)arg8 regularizationType:(int)arg9 regularizationScale:(float)arg10;
+ (id)descriptorWithLearningRate:(float)arg1 gradientRescale:(float)arg2 regularizationType:(int)arg3 regularizationScale:(float)arg4;

- (bool)appliesGradientClipping;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)customGlobalNorm;
- (id)description;
- (float)gradientClipMax;
- (float)gradientClipMin;
- (int)gradientClippingType;
- (float)gradientRescale;
- (unsigned long long)hash;
- (id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 applyGradientClipping:(bool)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationType:(int)arg6 regularizationScale:(float)arg7;
- (id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 applyGradientClipping:(bool)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationType:(int)arg6 regularizationScale:(float)arg7 gradientClippingType:(int)arg8 maximumClippingNorm:(float)arg9 customGlobalNorm:(float)arg10;
- (bool)isEqual:(id)arg1;
- (float)learningRate;
- (float)maximumClippingNorm;
- (float)regularizationScale;
- (int)regularizationType;

@end
