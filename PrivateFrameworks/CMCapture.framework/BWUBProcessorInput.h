
@interface BWUBProcessorInput : BWStillImageProcessorControllerInput <BWNoiseReductionAndFusionProcessorInput> {
    int  _adaptiveBracketingStopFrameCount;
    <BWUBProcessorInputDelegate> * _delegate;
    bool  _emitErrorRecoveryFrame;
    struct opaqueCMSampleBuffer { } * _errorRecoveryFrame;
    NSMutableArray * _frames;
    int  _fusionMode;
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
@property (nonatomic, retain) <BWUBProcessorInputDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool emitErrorRecoveryFrame;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*errorRecoveryFrame;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer { }*evMinusReferenceFrame;
@property (nonatomic) int fusionMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMaster;
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
- (bool)emitErrorRecoveryFrame;
- (struct opaqueCMSampleBuffer { }*)errorRecoveryFrame;
- (struct opaqueCMSampleBuffer { }*)evMinusReferenceFrame;
- (int)fusionMode;
- (id)initWithSettings:(id)arg1 portType:(id)arg2;
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
