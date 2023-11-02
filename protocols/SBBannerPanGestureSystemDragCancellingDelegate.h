
@protocol SBBannerPanGestureSystemDragCancellingDelegate <NSObject>

@required

- (bool)bannerPanGestureRecognizer:(SBBannerPanGestureRecognizer *)arg1 shouldCancelSystemDragGestureWithTouches:(NSSet *)arg2 event:(UIEvent *)arg3;
- (bool)bannerPanGestureRecognizer:(SBBannerPanGestureRecognizer *)arg1 shouldDisableTouchCancellationForTouch:(UITouch *)arg2 event:(UIEvent *)arg3;

@end
