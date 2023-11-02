
@protocol AFUserNotificationAnnouncementSpeakingStateDelegate <NSObject>

@required

- (void)notificationAnnouncementObserver:(AFUserNotificationAnnouncementSpeakingStateObserver *)arg1 announcementSpeakingStateDidUpdate:(long long)arg2 forNotificationRequestIdentifiers:(NSArray *)arg3;

@end
