
@protocol MRUNowPlayingControllerObserver <NSObject>

@optional

- (void)nowPlayingController:(MRUNowPlayingController *)arg1 didChangeQuickControlItem:(MRUTransportControlItem *)arg2;
- (void)nowPlayingController:(MRUNowPlayingController *)arg1 endpointController:(MRUEndpointController *)arg2 didChangeRoute:(MPAVEndpointRoute *)arg3;
- (void)nowPlayingController:(MRUNowPlayingController *)arg1 mediaSuggestionsController:(MRUMediaSuggestionsController *)arg2 didChangeMediaSuggestions:(NSArray *)arg3;
- (void)nowPlayingController:(MRUNowPlayingController *)arg1 metadataController:(MRUMetadataController *)arg2 didChangeArtwork:(MRUArtwork *)arg3;
- (void)nowPlayingController:(MRUNowPlayingController *)arg1 metadataController:(MRUMetadataController *)arg2 didChangeBundleID:(NSString *)arg3;
- (void)nowPlayingController:(MRUNowPlayingController *)arg1 metadataController:(MRUMetadataController *)arg2 didChangeNowPlayingInfo:(MRUNowPlayingInfo *)arg3;
- (void)nowPlayingController:(MRUNowPlayingController *)arg1 metadataController:(MRUMetadataController *)arg2 didChangeTimeControls:(MRUTimeControls *)arg3;
- (void)nowPlayingController:(MRUNowPlayingController *)arg1 metadataController:(MRUMetadataController *)arg2 didChangeTransportControls:(MRUTransportControls *)arg3;
- (void)nowPlayingController:(MRUNowPlayingController *)arg1 queueHandoffCoordinator:(MRUNowPlayingQueueHandoffCoordinator *)arg2 didChangeState:(long long)arg3;
- (void)nowPlayingController:(MRUNowPlayingController *)arg1 tvRemoteController:(MRUTVRemoteController *)arg2 didChangeShowTVRemote:(bool)arg3;
- (bool)nowPlayingControllerShouldAutomaticallyUpdateResponse:(MRUNowPlayingController *)arg1;

@end
