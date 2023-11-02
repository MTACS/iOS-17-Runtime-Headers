
@protocol MRUMetadataDataSourceDelegate <NSObject>

@optional

- (void)metadataDataSource:(id <MRUMetadataDataSource>)arg1 didChangeArtwork:(MRUArtwork *)arg2;
- (void)metadataDataSource:(id <MRUMetadataDataSource>)arg1 didChangeBundleID:(NSString *)arg2;
- (void)metadataDataSource:(id <MRUMetadataDataSource>)arg1 didChangeNowPlayingInfo:(MRUNowPlayingInfo *)arg2;
- (void)metadataDataSource:(id <MRUMetadataDataSource>)arg1 didChangeTimeControls:(MRUTimeControls *)arg2;
- (void)metadataDataSource:(id <MRUMetadataDataSource>)arg1 didChangeTransportControls:(MRUTransportControls *)arg2;

@end
