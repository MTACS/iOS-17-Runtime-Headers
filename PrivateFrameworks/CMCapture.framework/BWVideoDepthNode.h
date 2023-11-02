
@interface BWVideoDepthNode : BWNode <BWInferenceFormatProvider, BWInferencePixelBufferPoolProvider> {
    <MTLEvent> * _backpressureEvent;
    struct __CVBuffer { } * _blankDisparityPixelBuffer;
    BWFigVideoCaptureDevice * _captureDevice;
    struct opaqueCMFormatDescription { } * _depthFormatDescription;
    struct { 
        int width; 
        int height; 
    }  _depthOutputDimensions;
    BWInferenceVideoFormat * _disparityInputFormat;
    struct opaqueCMSampleBuffer { } * _disparityPostprocessingInStateSampleBuffer;
    struct opaqueCMSampleBuffer { } * _disparityPostprocessingOutStateSampleBuffer;
    BWVideoFormat * _disparityStateVideoFormat;
    BWPixelBufferPool * _featuresPool;
    BWVideoFormat * _featuresVideoFormat;
    BWInferenceEngine * _inferenceEngine;
    BWInferenceScheduler * _inferenceScheduler;
    NSSet * _inferenceTypesToSkip;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _inferenceTypesToSkipLock;
    struct __CVBuffer { } * _initialDisparityPixelBuffer;
    struct __CVBuffer { } * _initialFeaturesPixelBuffer;
    BWPixelBufferPool * _internalDisparityPool;
    BWVideoFormat * _internalDisparityVideoFormat;
    struct opaqueCMSampleBuffer { } * _previousDisparitySampleBuffer;
    struct opaqueCMSampleBuffer { } * _previousFeaturesSampleBuffer;
    BWInferenceVideoFormat * _primaryMediaInputFormat;
    bool  _structuredLightIsOccluded;
    bool  _videoDepthEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)initWithInferenceScheduler:(id)arg1 captureDevice:(id)arg2 videoDepthConfiguration:(id)arg3 extraDepthOutputRetainedBufferCount:(int)arg4;
- (id)inputFormatForAttachedMediaKey:(id)arg1;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1;
- (id)inputVideoFormatForAttachedMediaKey:(id)arg1;
- (bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (id)outputFormatForAttachedMediaKey:(id)arg1;
- (id)outputVideoFormatForAttachedMediaKey:(id)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setInferencesToSkip:(id)arg1;

@end
