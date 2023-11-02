
@protocol BWSWFRProcessorControllerInputUpdatesDelegate <BWStillImageProcessorControllerInputUpdatesDelegate>

@required

- (void)input:(BWSWFRProcessorControllerInput *)arg1 addAmbientFrame:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)input:(BWSWFRProcessorControllerInput *)arg1 addFlashFrame:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)inputAddFrameFailed:(BWSWFRProcessorControllerInput *)arg1;

@end
