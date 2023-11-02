
@protocol AVTViewSessionProviderDelegate <NSObject>

@required

- (void)sessionProviderDidEndCameraSession:(AVTViewSessionProvider *)arg1;
- (void)sessionProviderWillStartCameraSession:(AVTViewSessionProvider *)arg1;

@end
