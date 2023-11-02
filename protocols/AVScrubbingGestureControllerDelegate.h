
@protocol AVScrubbingGestureControllerDelegate <NSObject>

@optional

- (AVScrubbingGestureConfiguration *)configurationForScrubbingGestureController:(AVScrubbingGestureController *)arg1;
- (void)scrubbingGestureControllerStateDidChange:(AVScrubbingGestureController *)arg1;

@end
