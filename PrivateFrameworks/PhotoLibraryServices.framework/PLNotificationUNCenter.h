
@interface PLNotificationUNCenter : NSObject <UNUserNotificationCenterDelegate> {
    <PLNotificationUNCenterDelegate> * _delegate;
    UNUserNotificationCenter * _unc;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLNotificationUNCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_UNNotificationInitialize;
+ (id)_categoryIdentifierForNotification:(id)arg1;
+ (id)_contentUserInfoForNotification:(id)arg1;
+ (id)_expiringCMMCategory;
+ (unsigned long long)_interruptionLevelForNotification:(id)arg1;
+ (id)_invitationAcceptedCategory;
+ (id)_invitationsCategoryWithJunkAction:(bool)arg1;
+ (id)_notificationEnablementKeyForNotificationType:(long long)arg1;
+ (id)_readyToViewInvitationCMMCategory;
+ (id)_sharedLibraryParticipantAssetTrashNotificationCategory;
+ (id)_sharedLibrarySuggestionsCategory;
+ (id)_soundForNotification:(id)arg1;
+ (id)_suggestedCMMCategory;
+ (id)_threadIdentifierForNotification:(id)arg1;
+ (id)_updatesCategory;
+ (id)_updatesCommentedCategory;
+ (id)_updatesLikedCategory;

- (void).cxx_destruct;
- (id)_copiedContentFromContent:(id)arg1 WithImageData:(id)arg2 identifier:(id)arg3;
- (void)_findNotificationForRequestIdentifier:(id)arg1 withPendingHandler:(id /* block */)arg2 deliveredHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)_makeTempThumbnailFileForImageData:(id)arg1 identifier:(id)arg2;
- (id)_makeTempThumbnailFileForNotification:(id)arg1;
- (id)_notificationContentWithNotification:(id)arg1 withImageURL:(id)arg2 sound:(bool)arg3;
- (void)_updateAppBadge;
- (id)delegate;
- (void)enumerateExistingNotificationsUsingBlock:(id /* block */)arg1;
- (void)findExistingNotificationByIdentifier:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (void)mergeExistingAndSendNotificationForNotification:(id)arg1 requestIdentifier:(id)arg2 thumbnailHandler:(id /* block */)arg3;
- (void)mergeExistingAndSendNotificationForNotification:(id)arg1 thumbnailHandler:(id /* block */)arg2;
- (void)removeAllNotifications;
- (void)removeNotificationWithRequestIdentifiers:(id)arg1;
- (void)removeNotificationsForNotifications:(id)arg1;
- (void)sendNotificationForNotification:(id)arg1;
- (void)sendNotificationForNotification:(id)arg1 withAttachmentURL:(id)arg2 forceToSound:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)updateBadgeCountWithDelay:(unsigned long long)arg1;
- (void)updateImageData:(id)arg1 forNotificationWithIdentifier:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
