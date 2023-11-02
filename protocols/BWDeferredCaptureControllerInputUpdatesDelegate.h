
@protocol BWDeferredCaptureControllerInputUpdatesDelegate <BWStillImageProcessorControllerInputUpdatesDelegate>

@required

- (void)input:(BWDeferredCaptureControllerInput *)arg1 encounteredProcessingError:(int)arg2;
- (void)inputReceivedIntermediate:(BWDeferredCaptureControllerInput *)arg1;

@end
