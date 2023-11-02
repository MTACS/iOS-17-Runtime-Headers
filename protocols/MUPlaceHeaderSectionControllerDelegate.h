
@protocol MUPlaceHeaderSectionControllerDelegate <NSObject>

@required

- (void)placeHeaderSectionController:(MUPlaceHeaderSectionController *)arg1 didSelectShareWithPresentationOptions:(MUPresentationOptions *)arg2;
- (void)placeHeaderSectionController:(MUPlaceHeaderSectionController *)arg1 didTapMapItem:(MKMapItem *)arg2;

@optional

- (double)placeHeaderSectionControllerRequestsTrailingConstant:(MUPlaceHeaderSectionController *)arg1;

@end
