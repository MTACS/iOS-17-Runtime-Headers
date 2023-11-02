
@protocol ANTrackPlayerDelegate <NSObject>

@required

- (void)trackPlayer:(ANTrackPlayer *)arg1 didFinishPlayingTrackType:(long long)arg2 announcementID:(NSString *)arg3 error:(NSError *)arg4;
- (void)trackPlayer:(ANTrackPlayer *)arg1 didUpdatePlaybackState:(unsigned long long)arg2 announcementID:(NSString *)arg3;

@end
