
@protocol MKUserTrackingView <NSObject>

@required

- (void)_setUserTrackingMode:(long long)arg1 animated:(bool)arg2 fromTrackingButton:(bool)arg3;
- (bool)canRotateForHeading;
- (bool)hasUserLocation;
- (bool)isCurrentlyRotated;
- (long long)userTrackingMode;

@optional

- (bool)hasRenderedSomething;
- (bool)postsMapViewInitialRenderingNotification;

@end
