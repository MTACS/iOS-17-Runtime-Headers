
@protocol MUPlacePhotoSectionControllerLookAroundDelegate <NSObject>

@required

- (MKLookAroundContainerView *)lookAroundContainerForPlacePhotoSectionController:(MUPlacePhotoSectionController *)arg1;
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 enterLookAroundForMapItem:(MKMapItem *)arg2 lookAroundView:(MKLookAroundView *)arg3;
- (bool)shouldMoveLookAroundStorefrontViewForPlacePhotoSectionController:(MUPlacePhotoSectionController *)arg1;

@end
