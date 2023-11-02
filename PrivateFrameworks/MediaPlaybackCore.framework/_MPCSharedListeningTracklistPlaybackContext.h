
@interface _MPCSharedListeningTracklistPlaybackContext : MPPlaybackContext {
    NSIndexPath * _startItemIndexPath;
    MSVSectionedCollection * _tracklist;
}

@property (nonatomic, retain) NSIndexPath *startItemIndexPath;
@property (nonatomic, retain) MSVSectionedCollection *tracklist;

- (void).cxx_destruct;
- (id)getSharedListeningTracklistWithCompletion:(id /* block */)arg1;
- (void)setStartItemIndexPath:(id)arg1;
- (void)setTracklist:(id)arg1;
- (id)startItemIndexPath;
- (id)tracklist;

@end
