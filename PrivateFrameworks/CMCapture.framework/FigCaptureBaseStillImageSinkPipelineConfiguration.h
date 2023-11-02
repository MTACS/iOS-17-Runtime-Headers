
@interface FigCaptureBaseStillImageSinkPipelineConfiguration : NSObject <NSSecureCoding> {
    bool  _allowedToModifyInputBuffers;
    bool  _allowsMultipleInflightCaptures;
    struct { 
        int width; 
        int height; 
    }  _cinematicFramingWarpingOutputDimensions;
    bool  _cinematicFramingWarpingRequired;
    bool  _clientIsCameraOrDerivative;
    struct { 
        int width; 
        int height; 
    }  _depthDataDimensions;
    int  _horizontalSensorBinningFactor;
    bool  _inputIs10Bit;
    float  _maxSupportedFrameRate;
    int  _motionAttachmentsSource;
    int  _noiseReductionAndFusionScheme;
    int  _outputColorSpaceProperties;
    unsigned int  _outputPixelFormat;
    float  _portraitEffectsMatteMainImageDownscalingFactor;
    FigCaptureSinkConfiguration * _sinkConfiguration;
    bool  _stillImageStabilizationSupported;
    bool  _usesHighEncodingPriority;
    int  _verticalSensorBinningFactor;
}

@property (nonatomic) bool allowedToModifyInputBuffers;
@property (nonatomic) bool allowsMultipleInflightCaptures;
@property (nonatomic) struct { int x1; int x2; } cinematicFramingWarpingOutputDimensions;
@property (nonatomic) bool cinematicFramingWarpingRequired;
@property (nonatomic) bool clientIsCameraOrDerivative;
@property (nonatomic) struct { int x1; int x2; } depthDataDimensions;
@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) bool inputIs10Bit;
@property (nonatomic) float maxSupportedFrameRate;
@property (nonatomic) int motionAttachmentsSource;
@property (nonatomic) int noiseReductionAndFusionScheme;
@property (nonatomic) int outputColorSpaceProperties;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) float portraitEffectsMatteMainImageDownscalingFactor;
@property (nonatomic, retain) FigCaptureSinkConfiguration *sinkConfiguration;
@property (nonatomic) bool stillImageStabilizationSupported;
@property (nonatomic) bool usesHighEncodingPriority;
@property (nonatomic) int verticalSensorBinningFactor;

+ (bool)supportsSecureCoding;

- (bool)allowedToModifyInputBuffers;
- (bool)allowsMultipleInflightCaptures;
- (struct { int x1; int x2; })cinematicFramingWarpingOutputDimensions;
- (bool)cinematicFramingWarpingRequired;
- (bool)clientIsCameraOrDerivative;
- (void)dealloc;
- (struct { int x1; int x2; })depthDataDimensions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (int)horizontalSensorBinningFactor;
- (id)initWithCoder:(id)arg1;
- (bool)inputIs10Bit;
- (bool)isEqual:(id)arg1;
- (float)maxSupportedFrameRate;
- (int)motionAttachmentsSource;
- (int)noiseReductionAndFusionScheme;
- (int)outputColorSpaceProperties;
- (unsigned int)outputPixelFormat;
- (float)portraitEffectsMatteMainImageDownscalingFactor;
- (void)setAllowedToModifyInputBuffers:(bool)arg1;
- (void)setAllowsMultipleInflightCaptures:(bool)arg1;
- (void)setCinematicFramingWarpingOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setCinematicFramingWarpingRequired:(bool)arg1;
- (void)setClientIsCameraOrDerivative:(bool)arg1;
- (void)setDepthDataDimensions:(struct { int x1; int x2; })arg1;
- (void)setHorizontalSensorBinningFactor:(int)arg1;
- (void)setInputIs10Bit:(bool)arg1;
- (void)setMaxSupportedFrameRate:(float)arg1;
- (void)setMotionAttachmentsSource:(int)arg1;
- (void)setNoiseReductionAndFusionScheme:(int)arg1;
- (void)setOutputColorSpaceProperties:(int)arg1;
- (void)setOutputPixelFormat:(unsigned int)arg1;
- (void)setPortraitEffectsMatteMainImageDownscalingFactor:(float)arg1;
- (void)setSinkConfiguration:(id)arg1;
- (void)setStillImageStabilizationSupported:(bool)arg1;
- (void)setUsesHighEncodingPriority:(bool)arg1;
- (void)setVerticalSensorBinningFactor:(int)arg1;
- (id)sinkConfiguration;
- (bool)stillImageStabilizationSupported;
- (bool)usesHighEncodingPriority;
- (int)verticalSensorBinningFactor;

@end
