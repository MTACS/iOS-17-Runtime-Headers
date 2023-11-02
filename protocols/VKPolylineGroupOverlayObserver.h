
@protocol VKPolylineGroupOverlayObserver <NSObject>

@required

- (void)polylineGroup:(VKPolylineGroupOverlay *)arg1 didAddPolyline:(VKPolylineOverlay *)arg2;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg1 didFocusPolyline:(VKPolylineOverlay *)arg2;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg1 didRemovePolyline:(VKPolylineOverlay *)arg2;
- (void)polylineGroup:(VKPolylineGroupOverlay *)arg1 didSelectPolyline:(VKPolylineOverlay *)arg2;

@end
