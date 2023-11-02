
@protocol MUPlacePhotoGalleryViewControllerDelegate <NSObject>

@required

- (UIImageView *)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1;

@optional

- (void)placePhotoGallery:(MUPlacePhotoGalleryViewController *)arg1 attributionViewTappedAtIndex:(unsigned long long)arg2;
- (void)placePhotoGallery:(MUPlacePhotoGalleryViewController *)arg1 didSelectDeleteImageAtIndex:(unsigned long long)arg2;
- (void)placePhotoGallery:(MUPlacePhotoGalleryViewController *)arg1 didSelectReportImageAtIndex:(unsigned long long)arg2;
- (void)placePhotoGallery:(MUPlacePhotoGalleryViewController *)arg1 openButtonTappedAtIndex:(unsigned long long)arg2;
- (void)placePhotoGallery:(MUPlacePhotoGalleryViewController *)arg1 selectedAddPhotoWithEntryPoint:(long long)arg2 usingPresentationOptions:(MUPresentationOptions *)arg3;
- (void)placePhotoGallery:(MUPlacePhotoGalleryViewController *)arg1 willCloseAtIndex:(unsigned long long)arg2;
- (void)placePhotoGalleryAdditionalViewTapped:(MUPlacePhotoGalleryViewController *)arg1;
- (void)placePhotoGalleryDidCloseAtIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidFinishDismissing:(MUPlacePhotoGalleryViewController *)arg1;
- (void)placePhotoGalleryDidScrollLeftToIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidScrollRightToIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidScrollToIndex:(unsigned long long)arg1;
- (void)placePhotoGalleryDidSelectEditPhotoCredit:(MUPlacePhotoGalleryViewController *)arg1;
- (MUPlaceUserAttributionViewModel *)placePhotoGalleryRequestsUserAttribution:(MUPlacePhotoGalleryViewController *)arg1;

@end
