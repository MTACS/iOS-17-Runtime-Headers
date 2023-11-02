
@protocol PBFGalleryControllerObserving <NSObject>

@optional

- (void)galleryController:(PBFGalleryController *)arg1 didUpdateCurrentGalleryConfiguration:(ATXFaceGalleryConfiguration *)arg2;
- (void)galleryControllerWillUpdateGalleryConfiguration:(PBFGalleryController *)arg1;

@end
