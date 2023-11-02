
@protocol ANRemotePlaybackSessionServiceClientInterface <NSObject>

@required

- (void)didReceiveAnnouncement:(ANAnnouncementContext *)arg1 forGroupID:(NSString *)arg2;
- (void)didUpdateAnnouncements:(NSArray *)arg1 forGroupID:(NSString *)arg2;

@end
