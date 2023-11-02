
@interface ICCloudNotificationsController : NSObject

@property (nonatomic, readonly) PDSRegistrar *pdsClient;

+ (void)registerForUserNotificationsWithCompletionHandler:(id /* block */)arg1;
+ (id)sharedController;

- (void)batchUpdateTopicSubscriptionsAllAccountsInContext:(id)arg1;
- (void)batchUpdateTopicSubscriptionsForDSIDs:(id)arg1;
- (bool)isSubscribedToMentionNotificationsForAccount:(id)arg1;
- (id)pdsClient;
- (void)removeAllPDSRegistrationsForUser:(id)arg1;
- (void)removeAllTopicSubscriptionsForAccount:(id)arg1;
- (void)sendMentionNotificationToParticipant:(id)arg1 inlineAttachmentRecordName:(id)arg2 shareRecordName:(id)arg3 shareOwnerUserId:(id)arg4 accountId:(id)arg5 noteRecordName:(id)arg6 senderName:(id)arg7 noteTitle:(id)arg8 mentionSnippet:(id)arg9 callback:(id /* block */)arg10;
- (void)updateSubscriptionPreferenceForMentionNotifications:(bool)arg1 forAccount:(id)arg2;

@end
