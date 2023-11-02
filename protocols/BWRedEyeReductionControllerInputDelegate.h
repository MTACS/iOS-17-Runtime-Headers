
@protocol BWRedEyeReductionControllerInputDelegate <NSObject>

@required

- (void)didReceiveAllFramesForInput:(BWRedEyeReductionControllerInput *)arg1;
- (void)didReceiveFrameForInput:(BWRedEyeReductionControllerInput *)arg1;

@end
