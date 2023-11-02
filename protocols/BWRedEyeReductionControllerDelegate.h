
@protocol BWRedEyeReductionControllerDelegate <BWStillImageProcessorControllerDelegate>

@required

- (void)processorController:(BWRedEyeReductionController *)arg1 willProcessRedEyeReductionForProcessorInput:(BWRedEyeReductionControllerInput *)arg2;

@end
