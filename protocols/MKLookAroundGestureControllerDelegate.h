
@protocol MKLookAroundGestureControllerDelegate <NSObject>

@required

- (void)lookAroundGestureController:(MKLookAroundGestureController *)arg1 didTapAtPoint:(struct CGPoint { double x1; double x2; })arg2 areaAvailable:(bool)arg3;
- (void)lookAroundGestureController:(MKLookAroundGestureController *)arg1 didTapLabelMarker:(VKLabelMarker *)arg2;
- (void)lookAroundGestureController:(MKLookAroundGestureController *)arg1 didZoomWithDirection:(long long)arg2 type:(long long)arg3;
- (void)lookAroundGestureControllerDidPan:(MKLookAroundGestureController *)arg1;
- (void)lookAroundGestureControllerDidStartUserInteraction:(MKLookAroundGestureController *)arg1;
- (void)lookAroundGestureControllerDidStopUserInteraction:(MKLookAroundGestureController *)arg1;
- (bool)lookAroundGestureControllerShouldReceive:(MKLookAroundGestureController *)arg1 shouldReceiveTouch:(UITouch *)arg2;

@end
