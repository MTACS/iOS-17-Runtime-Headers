
@protocol MKPlaceCardPhotosControllerDelegate <NSObject>

@optional

- (void)cleanLookAroundContainerForPlaceCardPhotosController:(MKPlacePhotosViewController *)arg1;
- (MKLookAroundContainerView *)lookAroundContainerForPlaceCardPhotosController:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosController:(MKPlacePhotosViewController *)arg1 didSelectViewPhotoWithID:(NSString *)arg2 presentingViewController:(UIViewController *)arg3;
- (void)placeCardPhotosController:(MKPlacePhotosViewController *)arg1 enterLookAroundForMapItem:(MKMapItem *)arg2 lookAroundView:(MKLookAroundView *)arg3;
- (void)placeCardPhotosControllerDidCloseFullscreenPhotos:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosControllerDidOpenFullscreenPhotos:(MKPlacePhotosViewController *)arg1;
- (bool)shouldMoveLookAroundStorefrontViewForPlaceCardPhotosController:(MKPlacePhotosViewController *)arg1;
- (bool)shouldUseSmallPhotosWithPhotosController:(MKPlacePhotosViewController *)arg1;

@end
