
@protocol MPMusicPlayerControllerApplicationServer <MPMusicPlayerControllerServer>

@required

- (void)beginPlaybackAtHostTime:(NSDictionary *)arg1;
- (void)getNowPlayingsForContentItemIDs:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)performQueueModifications:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MPMusicPlayerControllerApplicationQueueModifications *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)prerollWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setDisableAutoPlay:(bool)arg1;
- (void)setDisableAutomaticCanBeNowPlaying:(bool)arg1;
- (void)setDisableRepeat:(bool)arg1;
- (void)setDisableShuffle:(bool)arg1;
- (void)setRelativeVolume:(float)arg1;

@end
