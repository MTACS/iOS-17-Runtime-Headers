
@protocol BWNoiseReductionAndFusionProcessorInput <NSObject>

@required

+ (id)new;

- (void)addBypassedProcessorType:(unsigned long long)arg1 forBufferTypes:(NSArray *)arg2;
- (void)addFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)addOutputSampleBufferRouter:(void *)arg1 forBufferTypes:(void *)arg2; // needs 2 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct opaqueCMSampleBuffer { }*, unsigned long long, BWStillImageProcessorControllerInput *, int, void*, NSArray *
- (BWStillImageCaptureSettings *)captureSettings;
- (BWStillImageCaptureStreamSettings *)captureStreamSettings;
- (bool)emitErrorRecoveryFrame;
- (struct opaqueCMSampleBuffer { }*)errorRecoveryFrame;
- (struct opaqueCMSampleBuffer { }*)evMinusReferenceFrame;
- (int)fusionMode;
- (id)init;
- (bool)isMaster;
- (BWStillImageProcessorControllerOutputRouter *)outputSampleBufferRouterForBufferType:(unsigned long long)arg1;
- (NSString *)portType;
- (bool)receivedAllFrames;
- (int)receivedFrames;
- (struct opaqueCMSampleBuffer { }*)referenceFrame;
- (unsigned int)remainingProcessingCount;
- (void)setEmitErrorRecoveryFrame:(bool)arg1;
- (void)setFusionMode:(int)arg1;
- (void)setProcessedRawErrorRecoveryFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setRemainingProcessingCount:(unsigned int)arg1;
- (FigCaptureStillImageSettings *)settings;
- (BWStillImageSettings *)stillImageSettings;
- (void)stopAdaptiveBracketingWithGroup:(int)arg1;

@end
