
@protocol ANLocalPlaybackSessionServiceInterfaceDelegate <NSObject>

@required

- (void)announcementsStateUpdate:(unsigned long long)arg1;
- (void)announcementsWillStartPlaying:(unsigned long long)arg1;
- (void)didReceiveAnnouncement:(ANAnnouncementContext *)arg1 forGroupID:(NSString *)arg2;

@end
