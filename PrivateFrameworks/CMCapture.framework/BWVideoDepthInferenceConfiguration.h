
@interface BWVideoDepthInferenceConfiguration : BWInferenceConfiguration {
    <MTLEvent> * _backpressureEvent;
    NSDictionary * _cameraInfoByPortType;
    unsigned long long  _concurrencyWidth;
    struct { 
        int width; 
        int height; 
    }  _featuresDimensions;
    unsigned int  _featuresPixelFormat;
    struct { 
        int width; 
        int height; 
    }  _inputDimensions;
    float  _networkBias;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    unsigned int  _outputPixelFormat;
    NSString * _portType;
    bool  _requiresAppleDepthPostProcessing;
    bool  _requiresCroppingOfDepthBuffer;
    bool  _requiresVerticalFlipOfDepthBuffer;
    ADEspressoStereoV2InferenceDescriptor * _stereoV2inferenceDescriptor;
    unsigned int  _temporalDepthInputPixelFormat;
    int  _videoDepthAlgorithm;
    int  _videoDepthLayout;
}

@property (nonatomic, readonly) <MTLEvent> *backpressureEvent;
@property (nonatomic, readonly) NSDictionary *cameraInfoByPortType;
@property (nonatomic, readonly) unsigned long long concurrencyWidth;
@property (nonatomic, readonly) struct { int x1; int x2; } featuresDimensions;
@property (nonatomic, readonly) unsigned int featuresPixelFormat;
@property (nonatomic, readonly) struct { int x1; int x2; } inputDimensions;
@property (nonatomic, readonly) float networkBias;
@property (nonatomic, readonly) struct { int x1; int x2; } outputDimensions;
@property (nonatomic, readonly) unsigned int outputPixelFormat;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic) bool requiresAppleDepthPostProcessing;
@property (nonatomic, readonly) bool requiresCroppingOfDepthBuffer;
@property (nonatomic, readonly) bool requiresVerticalFlipOfDepthBuffer;
@property (nonatomic, readonly) ADEspressoStereoV2InferenceDescriptor *stereoV2inferenceDescriptor;
@property (nonatomic, readonly) unsigned int temporalDepthInputPixelFormat;
@property (nonatomic, readonly) int videoDepthAlgorithm;
@property (nonatomic, readonly) int videoDepthLayout;

- (id)backpressureEvent;
- (id)cameraInfoByPortType;
- (unsigned long long)concurrencyWidth;
- (void)dealloc;
- (struct { int x1; int x2; })featuresDimensions;
- (unsigned int)featuresPixelFormat;
- (id)initWithConcurrencyWidth:(unsigned long long)arg1 videoDepthLayout:(int)arg2 captureDevice:(id)arg3 backpressureEvent:(id)arg4;
- (id)initWithConcurrencyWidth:(unsigned long long)arg1 videoDepthLayout:(int)arg2 captureDevice:(id)arg3 overrideOutputDimensions:(struct { int x1; int x2; })arg4 backpressureEvent:(id)arg5;
- (id)initWithConcurrencyWidth:(unsigned long long)arg1 videoDepthLayout:(int)arg2 captureDevice:(id)arg3 requiresCroppingOfDepthBuffer:(bool)arg4 requiresVerticalFlipOfDepthBuffer:(bool)arg5 backpressureEvent:(id)arg6;
- (struct { int x1; int x2; })inputDimensions;
- (float)networkBias;
- (struct { int x1; int x2; })outputDimensions;
- (unsigned int)outputPixelFormat;
- (id)portType;
- (bool)requiresAppleDepthPostProcessing;
- (bool)requiresCroppingOfDepthBuffer;
- (bool)requiresVerticalFlipOfDepthBuffer;
- (void)setRequiresAppleDepthPostProcessing:(bool)arg1;
- (id)stereoV2inferenceDescriptor;
- (unsigned int)temporalDepthInputPixelFormat;
- (int)videoDepthAlgorithm;
- (int)videoDepthLayout;

@end
