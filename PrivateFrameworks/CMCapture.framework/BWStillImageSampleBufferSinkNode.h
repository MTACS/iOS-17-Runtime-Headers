
@interface BWStillImageSampleBufferSinkNode : BWSinkNode {
    BWStillImageSampleBufferSinkNodeAnalyticsConfiguration * _analyticsConfiguration;
    BWStillImageCaptureAnalyticsPayload * _cachedAnalyticsPayloadForPortraitFailures;
    bool  _captureTimePhotosCurationSupported;
    bool  _clientIsCameraOrDerivative;
    bool  _focusPixelBlurScoreEnabled;
    long long  _lastCaptureRequestTime;
    long long  _lastReportedSettingsID;
    NSArray * _propagatedAttachedMediaKeys;
    id /* block */  _sampleBufferAvailableHandler;
    int  _stillImageCapturePipeliningMode;
}

@property (nonatomic, copy) id /* block */ sampleBufferAvailableHandler;

+ (void)initialize;

- (id)analyticsConfiguration;
- (bool)captureTimePhotosCurationSupported;
- (bool)clientIsCameraOrDerivative;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (bool)focusPixelBlurScoreEnabled;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithInputMediaType:(unsigned int)arg1 sinkID:(id)arg2;
- (id)initWithSinkID:(id)arg1;
- (id)nodeSubType;
- (id)propagatedAttachedMediaKeys;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id /* block */)sampleBufferAvailableHandler;
- (void)setAnalyticsConfiguration:(id)arg1;
- (void)setCaptureTimePhotosCurationSupported:(bool)arg1;
- (void)setClientIsCameraOrDerivative:(bool)arg1;
- (void)setFocusPixelBlurScoreEnabled:(bool)arg1;
- (void)setPropagatedAttachedMediaKeys:(id)arg1;
- (void)setSampleBufferAvailableHandler:(id /* block */)arg1;
- (void)setStillImageCapturePipeliningMode:(int)arg1;
- (int)stillImageCapturePipeliningMode;

@end
