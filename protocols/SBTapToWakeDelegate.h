
@protocol SBTapToWakeDelegate <NSObject>

@required

- (void)tapToWakeControllerDidRecognizePencilWakeGesture:(SBTapToWakeController *)arg1;
- (void)tapToWakeControllerDidRecognizeWakeGesture:(SBTapToWakeController *)arg1;

@end
