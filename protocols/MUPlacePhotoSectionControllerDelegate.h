
@protocol MUPlacePhotoSectionControllerDelegate <NSObject>

@optional

- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 didSelectPhotoCategoryAtIndex:(unsigned long long)arg2;
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 didSelectPhotoToReport:(id <GEOMapItemPhoto>)arg2 withPhotoGalleryViewController:(MUPlacePhotoGalleryViewController *)arg3;
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 didSelectViewPhoto:(MKMapItemPhoto *)arg2 withID:(NSString *)arg3 presentingViewController:(UIViewController *)arg4;
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 photoGalleryDidScroll:(MUPlacePhotoGalleryViewController *)arg2;
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 requestsAddPhotosToMapsWithEntryPoint:(long long)arg2 options:(MUPresentationOptions *)arg3;
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 requestsSceneActivationForPhotoGalleryViewController:(MUPlacePhotoGalleryViewController *)arg2;
- (void)placePhotoSectionController:(MUPlacePhotoSectionController *)arg1 requestsToOpenPhotoAttribution:(_MKMapItemPhotosAttribution *)arg2 presentationOptions:(MUPresentationOptions *)arg3;
- (void)placePhotoSectionControllerDidCloseFullscreenPhotos:(MUPlacePhotoSectionController *)arg1;
- (void)placePhotoSectionControllerDidOpenFullscreenPhotos:(MUPlacePhotoSectionController *)arg1;
- (void)placePhotoSectionControllerRequestsToOpenThumbnailGallery:(MUPlacePhotoSectionController *)arg1 withStartingIndex:(unsigned long long)arg2;

@end
