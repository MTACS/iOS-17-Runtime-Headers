
@protocol AXSSMotionTrackingInputManagerDelegate <NSObject>

@optional

- (void)motionTrackingInputManager:(AXSSMotionTrackingInputManager *)arg1 updatedCompatibleInputs:(NSArray *)arg2;
- (void)motionTrackingInputManager:(AXSSMotionTrackingInputManager *)arg1 updatedInputToUse:(AXSSMotionTrackingInput *)arg2;

@end
