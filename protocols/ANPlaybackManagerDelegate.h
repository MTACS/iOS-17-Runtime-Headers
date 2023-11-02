
@protocol ANPlaybackManagerDelegate <NSObject>

@required

- (void)playbackManager:(ANPlaybackManager *)arg1 didFinishPlayingAnnouncement:(NSString *)arg2 withOptions:(unsigned long long)arg3;
- (void)playbackManager:(ANPlaybackManager *)arg1 didStartPlayingAnnouncement:(NSString *)arg2;
- (void)playbackManager:(ANPlaybackManager *)arg1 didStartPlayingAnnouncementsAtMachAbsoluteTime:(unsigned long long)arg2;
- (void)playbackManager:(ANPlaybackManager *)arg1 didUpdatePlaybackState:(unsigned long long)arg2 announcement:(NSString *)arg3;
- (void)playbackManagerDidFinishPlayingAnnouncements:(ANPlaybackManager *)arg1;

@end
