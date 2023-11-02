
@interface BWDeferredCaptureControllerInput : BWStillImageProcessorControllerInput {
    NSNumber * _canProcessEnhancedResolution;
    BWDeferredCaptureContainer * _captureContainer;
    int  _compressionProfile;
    BWDeferredCaptureControllerConfiguration * _configuration;
    bool  _depthDataGenerationFailed;
    bool  _proxyBufferReady;
    BWStillImageSettings * _settings;
    bool  _skipInferences;
}

@property (nonatomic, readonly) BWDeferredCaptureContainer *captureContainer;
@property (nonatomic, readonly) int compressionProfile;
@property (nonatomic, readonly) BWDeferredPipelineParameters *pipelineParameters;
@property (nonatomic, readonly) bool skipInferences;

- (void)_addDictionary:(id)arg1 tag:(id)arg2;
- (void)_addInference:(id)arg1 inferenceAttachmentKey:(id)arg2 portType:(id)arg3;
- (void)_addInferenceBuffer:(struct __CVBuffer { }*)arg1 inferenceAttachedMediaKey:(id)arg2 portType:(id)arg3;
- (void)addBuffer:(struct __CVBuffer { }*)arg1 bufferType:(unsigned long long)arg2 captureFrameFlags:(unsigned long long)arg3 metadata:(id)arg4 rawThumbnailsBuffer:(struct __CVBuffer { }*)arg5 rawThumbnailsMetadata:(id)arg6;
- (void)addDictionary:(id)arg1 tag:(id)arg2;
- (void)addPhotoDescriptor:(id)arg1;
- (void)addSensorRawSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)canProcessEnhancedResolution:(bool)arg1 skipInferences:(bool)arg2;
- (id)captureContainer;
- (int)compressionProfile;
- (void)dealloc;
- (void)depthDataGenerationFailed;
- (void)encounteredProcessingError:(int)arg1;
- (id)initWithSettings:(id)arg1 configuration:(id)arg2 sourceNodePixelBufferAttributes:(id)arg3;
- (id)pipelineParameters;
- (void)proxyReadyWithFPNREnabled:(bool)arg1;
- (bool)skipInferences;

@end
