
@interface FRCImageProcessor : NSObject {
    NSDictionary * _colorProperties;
    NSObject<OS_dispatch_semaphore> * _completionSemaphore;
    struct __CVPixelBufferPool { } * _denormalizedBufferPool;
    unsigned long long  _height;
    long long  _inputRotation;
    bool  _inputScaling;
    bool  _isYUV;
    Normalization * _normalization;
    struct { 
        float mean; 
        float std_inv; 
        float anchor_mean[2]; 
        float anchor_std[2]; 
        int frame_type; 
    }  _normalizationParams;
    struct __CVBuffer { } * _normalizedFirst;
    struct __CVBuffer { } * _normalizedSecond;
    bool  _rgbaBuffersAllocated;
    struct __CVBuffer { } * _rgbaFirst;
    unsigned int  _rgbaPixelFormat;
    struct __CVBuffer { } * _rgbaSecond;
    FRCScaler * _scaler;
    long long  _usage;
    bool  _useGPUOnlyForPreProcessing;
    unsigned long long  _width;
}

@property (nonatomic, readonly) float firstFramePixelMean;
@property (nonatomic) long long inputRotation;
@property (nonatomic, readonly) struct __CVBuffer { }*normalizedFirst;
@property (nonatomic, readonly) struct __CVBuffer { }*normalizedSecond;
@property (nonatomic, readonly) float secondFramePixelMean;
@property (nonatomic) bool selfNormalization;

- (void).cxx_destruct;
- (void)allocateNormalizedBuffers;
- (void)allocteRGBABuffersForBuffer:(struct __CVBuffer { }*)arg1;
- (void)dealloc;
- (float)firstFramePixelMean;
- (id)initWithUsage:(long long)arg1;
- (long long)inputRotation;
- (struct __CVBuffer { }*)normalizedFirst;
- (struct __CVBuffer { }*)normalizedSecond;
- (void)postProcessNormalizedFrame:(struct __CVBuffer { }*)arg1 output:(struct __CVBuffer { }*)arg2 timeScale:(float)arg3 waitForCompletion:(bool)arg4;
- (void)preProcessFirstInput:(struct __CVBuffer { }*)arg1 secondInput:(struct __CVBuffer { }*)arg2 waitForCompletion:(bool)arg3;
- (unsigned int)rgbaPixelFormatForBuffer:(struct __CVBuffer { }*)arg1 useScaler:(bool)arg2;
- (float)secondFramePixelMean;
- (bool)selfNormalization;
- (void)setInputRotation:(long long)arg1;
- (void)setSelfNormalization:(bool)arg1;
- (bool)shouldCropOutputFrame:(struct __CVBuffer { }*)arg1;
- (bool)shouldScaleBuffer:(struct __CVBuffer { }*)arg1;
- (void)storeColorProperties:(struct __CVBuffer { }*)arg1;

@end
