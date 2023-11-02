
@interface IMDClientConnectionManager : NSObject <IMDBroadcasterProviding> {
    void connectionListener;
}

@property (nonatomic, readonly) <IMDaemonListenerAVProtocol> *broadcasterForACConferenceListeners;
@property (nonatomic, readonly) <IMDaemonListenerAVProtocol> *broadcasterForAVConferenceListeners;
@property (nonatomic, readonly) <IMDaemonListenerAccountsProtocol> *broadcasterForAccountListeners;
@property (nonatomic, readonly) <IMDaemonListenerAnyProtocol> *broadcasterForAllListeners;
@property (nonatomic, readonly) <IMDaemonListenerChatProtocol> *broadcasterForBlackholeChatListeners;
@property (nonatomic, readonly) <IMDaemonListenerChatCountsProtocol> *broadcasterForChatCountsListeners;
@property (nonatomic, readonly) <IMDaemonListenerChatDatabaseProtocol> *broadcasterForChatDatabaseListeners;
@property (nonatomic, readonly) <IMDaemonListenerChatProtocol> *broadcasterForChatListeners;
@property (nonatomic, readonly) <IMDaemonListenerCloudSyncProtocol> *broadcasterForCloudSyncListeners;
@property (nonatomic, readonly) <IMDaemonListenerFileProviderProtocol> *broadcasterForFileProviderListeners;
@property (nonatomic, readonly) <IMDaemonListenerFileTransfersProtocol> *broadcasterForFileTransferListeners;
@property (nonatomic, readonly) <IMDaemonListenerSyncedSettingsProtocol> *broadcasterForSyncedSettingsListeners;

- (void).cxx_destruct;
- (id)broadcasterForACConferenceListeners;
- (id)broadcasterForACConferenceListenersSupportingService:(id)arg1;
- (id)broadcasterForAVConferenceListeners;
- (id)broadcasterForAVConferenceListenersSupportingService:(id)arg1;
- (id)broadcasterForAccountListeners;
- (id)broadcasterForAllListeners;
- (id)broadcasterForBlackholeChatListeners;
- (id)broadcasterForBlackholeChatListenersSupportingService:(id)arg1;
- (id)broadcasterForChatCountsListeners;
- (id)broadcasterForChatDatabaseListeners;
- (id)broadcasterForChatListeners;
- (id)broadcasterForChatListenersSupportingService:(id)arg1;
- (id)broadcasterForChatListenersUsingBlackholeRegistry:(bool)arg1;
- (id)broadcasterForCloudSyncListeners;
- (id)broadcasterForFileProviderListeners;
- (id)broadcasterForFileTransferListeners;
- (id)broadcasterForListenersSupportingService:(id)arg1;
- (id)broadcasterForNotificationListenersSupportingService:(id)arg1;
- (id)broadcasterForSentMessageListenersSupportingService:(id)arg1;
- (id)broadcasterForSyncedSettingsListeners;
- (id)broadcasterForVCConferenceListenersSupportingService:(id)arg1;
- (id)init;

@end
