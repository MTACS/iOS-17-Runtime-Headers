
@protocol BWNoiseReductionAndFusionProcessorDelegate <BWStillImageProcessorControllerDelegate>

@optional

- (void)processorController:(id <BWNoiseReductionAndFusionProcessorController>)arg1 didReceiveAllFramesForProcessorInput:(id <BWNoiseReductionAndFusionProcessorInput>)arg2;
- (void)processorController:(id <BWNoiseReductionAndFusionProcessorController>)arg1 didSelectLowLightReferenceFrame:(struct opaqueCMSampleBuffer { }*)arg2 processorInput:(id <BWNoiseReductionAndFusionProcessorInput>)arg3;
- (void)processorController:(id <BWNoiseReductionAndFusionProcessorController>)arg1 didSelectNewReferenceFrameWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 transform:(NSArray *)arg3 processorInput:(id <BWNoiseReductionAndFusionProcessorInput>)arg4;
- (int)processorController:(id <BWNoiseReductionAndFusionProcessorController>)arg1 processRawErrorRecoveryFrameForProcessorInput:(id <BWNoiseReductionAndFusionProcessorInput>)arg2 failureMetadata:(NSDictionary *)arg3;

@end
