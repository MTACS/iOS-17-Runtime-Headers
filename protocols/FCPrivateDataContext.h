
@protocol FCPrivateDataContext <NSObject>

@required

- (FCAudioPlaylist *)audioPlaylist;
- (<FCPrivateDataContextInternal> *)internalPrivateDataContext;
- (bool)isPrivateDataSyncingEnabled;
- (FCIssueReadingHistory *)issueReadingHistory;
- (FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
- (FCPersonalizationData *)personalizationData;
- (FCPrivateChannelMembershipController *)privateChannelMembershipController;
- (NSString *)privateDataDirectory;
- (<FCPushNotificationHandling> *)privatePushNotificationHandler;
- (FCKeyValueStore *)privateStoreWithName:(NSString *)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (FCPuzzleHistory *)puzzleHistory;
- (FCPuzzleTypeSettings *)puzzleTypeSettings;
- (FCReadingHistory *)readingHistory;
- (FCReadingList *)readingList;
- (FCShortcutList *)shortcutList;
- (FCSubscriptionList *)subscriptionList;
- (FCTagSettings *)tagSettings;
- (FCUserEventHistory *)userEventHistory;
- (FCUserInfo *)userInfo;

@end
