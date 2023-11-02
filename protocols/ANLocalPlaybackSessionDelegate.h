
@protocol ANLocalPlaybackSessionDelegate <ANAnnounceClientDelegate>

@optional

- (void)announcementsStateUpdate:(unsigned long long)arg1;
- (void)announcementsWillStartPlaying:(unsigned long long)arg1;
- (void)session:(ANLocalPlaybackSession *)arg1 didReceiveAnnouncement:(ANAnnouncementContext *)arg2;
- (void)session:(ANLocalPlaybackSession *)arg1 didUpdatePlaybackState:(unsigned long long)arg2;
- (void)session:(ANLocalPlaybackSession *)arg1 willStartPlayingAtMachTime:(unsigned long long)arg2;
- (void)sessionInterrupted:(ANLocalPlaybackSession *)arg1;
- (void)sessionInvalidated:(ANLocalPlaybackSession *)arg1;

@end
