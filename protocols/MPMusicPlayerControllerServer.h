
@protocol MPMusicPlayerControllerServer <MPMusicPlayerControllerServerActions>

@required

- (void)appendDescriptor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MPMusicPlayerQueueDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getDescriptorWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPMusicPlayerQueueDescriptor *, NSError *, void*
- (void)getImageForArtworkIdentifier:(void *)arg1 itemIdentifier:(void *)arg2 atSize:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)getNowPlayingAtIndex:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPMusicPlayerControllerNowPlaying *, NSError *, void*
- (void)getNowPlayingWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPMusicPlayerControllerNowPlaying *, NSError *, void*
- (void)getTimeSnapshotWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPMusicPlayerControllerNowPlayingTimeSnapshot *, void*
- (void)prependDescriptor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MPMusicPlayerQueueDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDescriptor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MPMusicPlayerQueueDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setNowPlayingItem:(void *)arg1 itemIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: MPMediaItem *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setNowPlayingUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
