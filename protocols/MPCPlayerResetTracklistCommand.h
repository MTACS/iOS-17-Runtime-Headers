
@protocol MPCPlayerResetTracklistCommand <MPCPlayerCommand>

@required

- (MPCPlayerCommandRequest *)clear;
- (MPCPlayerCommandRequest *)clearUpNextItems;
- (MPCPlayerCommandRequest *)replaceWithPlaybackIntent:(MPCPlaybackIntent *)arg1;
- (MPCPlayerCommandRequest *)replaceWithPlaybackIntent:(MPCPlaybackIntent *)arg1 replaceIntent:(long long)arg2;
- (NSArray *)specializedIntents;

@end
