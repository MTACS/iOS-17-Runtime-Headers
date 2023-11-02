
@protocol ANAnnouncementCoordinatorDelegate <NSObject>

@required

- (void)coordinator:(ANAnnouncementCoordinator *)arg1 didReceiveAnnouncement:(ANAnnouncement *)arg2 forGroupID:(NSString *)arg3 forEndpointID:(NSUUID *)arg4;
- (void)coordinator:(ANAnnouncementCoordinator *)arg1 didUpdateAnnouncements:(NSArray *)arg2 forGroupID:(NSString *)arg3 forEndpointID:(NSUUID *)arg4;

@optional

- (void)coordinator:(ANAnnouncementCoordinator *)arg1 didFinishPlayingAnnouncementsForEndpointID:(NSUUID *)arg2;
- (void)coordinator:(ANAnnouncementCoordinator *)arg1 didStartPlayingAnnouncementsAtMachAbsoluteTime:(unsigned long long)arg2 forEndpointID:(NSUUID *)arg3;
- (void)coordinator:(ANAnnouncementCoordinator *)arg1 didUpdatePlaybackState:(unsigned long long)arg2 forEndpointID:(NSUUID *)arg3;

@end
