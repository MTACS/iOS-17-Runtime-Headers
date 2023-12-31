
@protocol MPCPlayerInsertItemsCommand <MPCPlayerCommand>

@required

- (MPCPlayerCommandRequest *)insertAfterPlayingItemWithPlaybackIntent:(MPCPlaybackIntent *)arg1;
- (MPCPlayerCommandRequest *)insertAtEndOfTracklistWithPlaybackIntent:(MPCPlaybackIntent *)arg1;
- (MPCPlayerCommandRequest *)insertAtEndOfUpNextWithPlaybackIntent:(MPCPlaybackIntent *)arg1;
- (MPCPlayerCommandRequest *)insertPlaybackIntent:(MPCPlaybackIntent *)arg1 afterItem:(MPCPlayerResponseItem *)arg2;

@end
