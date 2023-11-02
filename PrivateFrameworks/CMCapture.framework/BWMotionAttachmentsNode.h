
@interface BWMotionAttachmentsNode : BWNode {
    bool  _adjustsValidBufferRectForDarkShade;
    BWLimitedGMErrorLogger * _limitedGMErrorLogger;
    BWNodeOutput * _offlineVISMotionDataOutput;
    NSDictionary * _optionsDict;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    BWNodeOutput * _sourceVideoWithMotionAttachmentsOutput;
}

@property (nonatomic) bool adjustsValidBufferRectForDarkShade;
@property (nonatomic, readonly) BWNodeOutput *offlineVISMotionDataOutput;
@property (nonatomic, readonly) BWNodeOutput *sourceVideoWithMotionAttachmentsOutput;

+ (void)initialize;

- (bool)adjustsValidBufferRectForDarkShade;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithSensorIDDictionaryByPortType:(id)arg1 cameraInfoByPortType:(id)arg2 tuningParameters:(id)arg3 activePortTypes:(id)arg4 horizontalSensorBinningFactor:(int)arg5 verticalSensorBinningFactor:(int)arg6 maxSupportedFrameRate:(float)arg7 motionAttachmentsMode:(int)arg8 motionAttachmentsSource:(int)arg9 motionCallbackThreadPriority:(unsigned int)arg10 provideSourceVideoWithMotionAttachmentsOutput:(bool)arg11 provideOfflineVISMotionDataOutput:(bool)arg12;
- (id)nodeSubType;
- (id)nodeType;
- (id)offlineVISMotionDataOutput;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setAdjustsValidBufferRectForDarkShade:(bool)arg1;
- (id)sourceVideoWithMotionAttachmentsOutput;

@end
