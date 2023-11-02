
@protocol FCUserInfoObserving <NSObject>

@optional

- (void)userInfo:(FCUserInfo *)arg1 didChangeAccessTokenForTagID:(NSString *)arg2;
- (void)userInfo:(FCUserInfo *)arg1 didChangePuzzleTypeSettingsForPuzzleTypeID:(NSString *)arg2;
- (void)userInfo:(FCUserInfo *)arg1 didRemoveAccessTokenForTagID:(NSString *)arg2 userInitiated:(bool)arg3;
- (void)userInfoDidChangeAdsUserID:(FCUserInfo *)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeDateLastPuzzleNotifications:(FCUserInfo *)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeDateLastViewedSaved:(FCUserInfo *)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeDateLastViewedSharedWithYou:(FCUserInfo *)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeEditorialArticleVersion:(FCUserInfo *)arg1;
- (void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(FCUserInfo *)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeFeldsparID:(FCUserInfo *)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeMarketingNotificationsEnabled:(FCUserInfo *)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeNewIssueNotificationsEnabled:(FCUserInfo *)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeNotificationsUserID:(FCUserInfo *)arg1;
- (void)userInfoDidChangeOnboardingStatus:(FCUserInfo *)arg1;
- (void)userInfoDidChangePuzzleNotificationsEnabled:(FCUserInfo *)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeShortcutsOnboardingState:(FCUserInfo *)arg1;
- (void)userInfoDidChangeSportsOnboardingState:(FCUserInfo *)arg1;
- (void)userInfoDidChangeSportsSyncState:(FCUserInfo *)arg1;
- (void)userInfoDidChangeSportsTopicNotificationsEnabledState:(FCUserInfo *)arg1 fromCloud:(bool)arg2;
- (void)userInfoDidChangeSportsUserID:(FCUserInfo *)arg1;

@end
