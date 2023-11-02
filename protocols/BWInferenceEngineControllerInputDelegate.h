
@protocol BWInferenceEngineControllerInputDelegate <BWStillImageProcessorControllerInputUpdatesDelegate>

@required

- (void)inputReceivedNewData:(BWInferenceEngineControllerInput *)arg1;

@end
