
@protocol PUCropGestureHandlerDelegate <NSObject>

@required

- (void)didBeginTrackingWithCropGestureHandler:(PUCropGestureHandler *)arg1;
- (void)didEndTrackingWithCropGestureHandler:(PUCropGestureHandler *)arg1;
- (void)didTrackWithCropGestureHandler:(PUCropGestureHandler *)arg1;
- (void)willBeginTrackingWithCropGestureHandler:(PUCropGestureHandler *)arg1;

@end
