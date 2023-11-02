
@protocol MRUMetadataControllerObserver <NSObject>

@optional

- (void)metadataController:(MRUMetadataController *)arg1 didChangeArtwork:(MRUArtwork *)arg2;
- (void)metadataController:(MRUMetadataController *)arg1 didChangeBundleID:(NSString *)arg2;
- (void)metadataController:(MRUMetadataController *)arg1 didChangeNowPlayingInfo:(MRUNowPlayingInfo *)arg2;
- (void)metadataController:(MRUMetadataController *)arg1 didChangeTimeControls:(MRUTimeControls *)arg2;
- (void)metadataController:(MRUMetadataController *)arg1 didChangeTransportControls:(MRUTransportControls *)arg2;

@end
