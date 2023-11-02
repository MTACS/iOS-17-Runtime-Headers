
@protocol BWSoftISPProcessorControllerInputUpdatesDelegate <BWStillImageProcessorControllerInputUpdatesDelegate>

@required

- (void)input:(BWSoftISPProcessorControllerInput *)arg1 addFrame:(struct opaqueCMSampleBuffer { }*)arg2;

@end
