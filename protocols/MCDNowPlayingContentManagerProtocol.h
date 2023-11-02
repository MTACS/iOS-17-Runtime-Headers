
@protocol MCDNowPlayingContentManagerProtocol

@required

- (void)beginRequestObservation;
- (MPModelPlaylist *)currentPlayingPlaylist;
- (MPModelPlaylistEntry *)currentPlayingPlaylistEntry;
- (MPModelRadioStation *)currentPlayingRadioStation;
- (MPModelSong *)currentPlayingSong;
- (void)endRequestObservation;
- (id)initWithDelegate:(id <MCDNowPlayingContentManagerDelegate>)arg1 dataSource:(id <MCDNowPlayingDataSource>)arg2 bundleID:(NSString *)arg3;
- (bool)limitedUI;
- (NSString *)nowPlayingBundleID;
- (long long)playerState;
- (void)setLimitedUI:(bool)arg1;
- (void)setTableCellClass:(Class)arg1;
- (Class)tableCellClass;
- (void)viewWillDisappear;

@end
