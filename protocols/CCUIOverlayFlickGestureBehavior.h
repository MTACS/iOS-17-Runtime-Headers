
@protocol CCUIOverlayFlickGestureBehavior <NSObject>

@required

- (unsigned long long)dismissalFlickAllowedDirections;
- (double)dismissalFlickMaximumTime;
- (double)dismissalFlickMinimumVelocity;

@end
