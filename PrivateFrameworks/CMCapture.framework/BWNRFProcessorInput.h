
@interface BWNRFProcessorInput : BWStillImageProcessorControllerInput <BWNoiseReductionAndFusionProcessorInput> {
    int  _adaptiveBracketingStopFrameCount;
    <BWNRFProcessorInputDelegate> * _delegate;
    bool  _emitErrorRecoveryFrame;
    struct opaqueCMSampleBuffer { } * _errorRecoveryFrame;
    NSMutableArray * _frames;
    int  _fusionMode;
    struct __CVBuffer { } * _gainMapPixelBuffer;
    int  _ispMotionHighPassFilterConvergenceFlags;
    bool  _keepFrames;
    NSMutableDictionary * _oisRecenteringLoggingData;
    bool  _receivedAllFrames;
    int  _receivedFrames;
    struct opaqueCMSampleBuffer { } * _referenceFrame;
    unsigned int  _remainingProcessingCount;
}

@property (nonatomic, readonly) BWStillImageCaptureSettings *captureSettings;
@property (nonatomic, readonly) BWStillImageCaptureStreamSettings *captureStreamSettings;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <BWNRFProcessorInputDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool emitErrorRecoveryFrame;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*errorRecoveryFrame;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*evMinusReferenceFrame;
@property (nonatomic, readonly) int expectedFrameCount;
@property (nonatomic) int fusionMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMaster;
@property (nonatomic, readonly) int ispMotionHighPassFilterConvergenceFlags;
@property (nonatomic) bool keepFrames;
@property (nonatomic, readonly) NSMutableDictionary *oisRecenteringLoggingData;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*originalImage;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic, readonly) bool receivedAllFrames;
@property (nonatomic, readonly) int receivedFrames;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*referenceFrame;
@property (nonatomic) unsigned int remainingProcessingCount;
@property (nonatomic, readonly) FigCaptureStillImageSettings *settings;
@property (nonatomic, readonly) BWStillImageSettings *stillImageSettings;
@property (readonly) Class superclass;

- (void)addFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)emitErrorRecoveryFrame;
- (struct opaqueCMSampleBuffer { }*)errorRecoveryFrame;
- (struct opaqueCMSampleBuffer { }*)evMinusReferenceFrame;
- (int)expectedFrameCount;
- (int)fusionMode;
- (id)initWithSettings:(id)arg1 portType:(id)arg2;
- (int)ispMotionHighPassFilterConvergenceFlags;
- (bool)keepFrames;
- (id)oisRecenteringLoggingData;
- (struct opaqueCMSampleBuffer { }*)originalImage;
- (bool)receivedAllFrames;
- (int)receivedFrames;
- (struct opaqueCMSampleBuffer { }*)referenceFrame;
- (unsigned int)remainingProcessingCount;
- (void)setDelegate:(id)arg1;
- (void)setEmitErrorRecoveryFrame:(bool)arg1;
- (void)setFusionMode:(int)arg1;
- (void)setKeepFrames:(bool)arg1;
- (void)setProcessedRawErrorRecoveryFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setRemainingProcessingCount:(unsigned int)arg1;
- (void)stopAdaptiveBracketingWithGroup:(int)arg1;

@end
