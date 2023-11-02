
@protocol MKLookAroundViewDelegate <NSObject>

@required

- (void)lookAroundView:(MKLookAroundView *)arg1 didChangeCameraFrame:(GEOCameraFrame *)arg2;
- (void)lookAroundView:(MKLookAroundView *)arg1 didChangeLocationInfo:(GEOLocationInfo *)arg2;
- (void)lookAroundView:(MKLookAroundView *)arg1 didDeselectLabelMarker:(VKLabelMarker *)arg2;
- (void)lookAroundView:(MKLookAroundView *)arg1 didSelectLabelMarker:(VKLabelMarker *)arg2;
- (void)lookAroundView:(MKLookAroundView *)arg1 didTapAtPoint:(struct CGPoint { double x1; double x2; })arg2 areaAvailable:(bool)arg3;
- (void)lookAroundView:(MKLookAroundView *)arg1 didTapLabelMarker:(VKLabelMarker *)arg2;
- (void)lookAroundView:(MKLookAroundView *)arg1 didZoomWithDirection:(long long)arg2 type:(long long)arg3;
- (void)lookAroundViewDidPan:(MKLookAroundView *)arg1;
- (void)lookAroundViewDidStartUserInteraction:(MKLookAroundView *)arg1;
- (void)lookAroundViewDidStopUserInteraction:(MKLookAroundView *)arg1;
- (void)lookAroundViewWillChangeLocationInfo:(MKLookAroundView *)arg1;

@optional

- (bool)lookAroundView:(MKLookAroundView *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (void)lookAroundViewDidChangeRegion:(MKLookAroundView *)arg1;
- (void)lookAroundViewWillChangeRegion:(MKLookAroundView *)arg1;

@end
