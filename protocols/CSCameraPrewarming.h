
@protocol CSCameraPrewarming <NSObject>

@required

- (void)notePrewarmRequestEnded;
- (void)notePrewarmRequestWasUseful;
- (void)prewarmCameraHardware:(bool)arg1 andApplication:(bool)arg2;

@end
