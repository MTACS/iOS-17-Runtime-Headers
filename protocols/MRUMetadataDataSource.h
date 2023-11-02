
@protocol MRUMetadataDataSource <NSObject>

@required

- (MRUArtwork *)artwork;
- (NSString *)bundleID;
- (<MRUMetadataDataSourceDelegate> *)delegate;
- (MRUNowPlayingInfo *)nowPlayingInfo;
- (void)setDelegate:(id <MRUMetadataDataSourceDelegate>)arg1;
- (MRUTimeControls *)timeControls;
- (MRUTransportControls *)transportControls;

@end
