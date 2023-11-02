
@interface NNMKAnalytics : NSObject

+ (bool)_reportingEnabled;
+ (id)sharedInstance;

- (void)NNMKSendEventLazyWithKey:(id)arg1 metadataBuilder:(id /* block */)arg2;
- (long long)_delayInMSFromDate:(id)arg1;
- (void)reportAction:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)reportAppBackgroundRefreshed;
- (void)reportAppLaunched;
- (void)reportAppResumed;
- (void)reportAttachmentDataReceivedWithType:(unsigned long long)arg1 sizeInBytes:(unsigned long long)arg2 mode:(unsigned long long)arg3;
- (void)reportAttachmentDisplayedWithType:(unsigned long long)arg1 actionable:(bool)arg2 source:(unsigned long long)arg3;
- (void)reportAttachmentDownloadFailedInMode:(unsigned long long)arg1;
- (void)reportAttachmentTappedWithType:(unsigned long long)arg1 actionable:(bool)arg2 source:(unsigned long long)arg3;
- (void)reportCannedReplyUsed:(id)arg1 sendingType:(unsigned long long)arg2;
- (void)reportCellRighSwipeActionChanged:(id)arg1;
- (void)reportContentDisplayedForMessageWithId:(id)arg1 hasMainAlternative:(bool)arg2 hasTextAlternative:(bool)arg3;
- (void)reportContentDownloadFailedInMode:(unsigned long long)arg1;
- (void)reportContentDownloadedForMessageWithId:(id)arg1 textSizeInBytes:(unsigned long long)arg2 htmlSizeInBytes:(unsigned long long)arg3 startTime:(id)arg4;
- (void)reportContentSyncedForMessageWithId:(id)arg1 textSizeInBytes:(unsigned long long)arg2 htmlSizeInBytes:(unsigned long long)arg3 fullSyncVersion:(unsigned long long)arg4 dateSynced:(id)arg5;
- (void)reportCredentialsExpired;
- (void)reportDisplayingMessageWithType:(unsigned long long)arg1 isNotification:(bool)arg2;
- (void)reportFailedFetchWithType:(unsigned long long)arg1 inMode:(unsigned long long)arg2;
- (void)reportFetch:(unsigned long long)arg1 inMode:(unsigned long long)arg2 accountType:(id)arg3;
- (void)reportFullSyncRequestedFromDevice:(unsigned long long)arg1 corruptionDetected:(bool)arg2 migrationRelated:(bool)arg3 idsFailureRelated:(bool)arg4 fullSyncVersionMatchRelated:(bool)arg5;
- (void)reportHaltSyncRequestedFromSource:(unsigned long long)arg1;
- (void)reportMailboxSelectionChanged:(id)arg1 source:(unsigned long long)arg2;
- (void)reportMessageDeletionReceivedForMessageWithId:(id)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3;
- (void)reportMessageDeliveryDurationWithStartDate:(id)arg1 inMode:(unsigned long long)arg2;
- (void)reportMessageDeliveryFailedInMode:(unsigned long long)arg1;
- (void)reportMessageReceivedWithId:(id)arg1 willGenerateNotification:(bool)arg2 fullSyncVersion:(unsigned long long)arg3 dateSynced:(id)arg4;
- (void)reportMessageSentFrom:(long long)arg1 sendingType:(unsigned long long)arg2 attachmentCount:(unsigned long long)arg3 sizeInBytes:(unsigned long long)arg4;
- (void)reportMessageUpdateReceivedForMessageWithId:(id)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3;
- (void)reportMoreMessagesReceivedConversationSpecific:(bool)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3;
- (void)reportNotificationReceivedInMode:(unsigned long long)arg1 accountType:(id)arg2;
- (void)reportNotificationReceivedInMode:(unsigned long long)arg1 isPCC:(bool)arg2 accountType:(id)arg3;
- (void)reportOpenedMailboxWithFilter:(id)arg1 mailboxType:(unsigned long long)arg2 accountType:(id)arg3;
- (void)reportOriginalMessageContentSizeInBytes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)reportReachedActionButtonsWithSource:(unsigned long long)arg1;
- (void)reportRenderedNotificationUsingLocalContent:(bool)arg1 mailboxSynced:(bool)arg2 messageSynced:(bool)arg3 contentDownloaded:(bool)arg4;
- (void)reportSubscribedToNotificationForAccountType:(id)arg1 isPCC:(bool)arg2;
- (void)reportThreadViewedWithMessageCount:(long long)arg1;
- (void)reportWebKitLinkTapped;
- (void)reportWebKitRenderingProcessCrash;
- (id)stringForAction:(unsigned long long)arg1;
- (id)stringForAttachmentType:(unsigned long long)arg1;
- (id)stringForCompositionSource:(long long)arg1;
- (id)stringForDeviceMode:(unsigned long long)arg1;
- (id)stringForDeviceSource:(unsigned long long)arg1;
- (id)stringForFetchType:(unsigned long long)arg1;
- (id)stringForMailboxFilterType:(unsigned long long)arg1;
- (id)stringForMailboxType:(unsigned long long)arg1;
- (id)stringForMessageType:(unsigned long long)arg1;
- (id)stringForSendingType:(unsigned long long)arg1;
- (id)stringForSource:(unsigned long long)arg1;

@end
