
@protocol IMDBroadcasterProviding <NSObject>

@required

- (<IMDaemonListenerAVProtocol> *)broadcasterForACConferenceListeners;
- (<IMDaemonListenerAVProtocol> *)broadcasterForACConferenceListenersSupportingService:(IMDService *)arg1;
- (<IMDaemonListenerAVProtocol> *)broadcasterForAVConferenceListeners;
- (<IMDaemonListenerAVProtocol> *)broadcasterForAVConferenceListenersSupportingService:(IMDService *)arg1;
- (<IMDaemonListenerAccountsProtocol> *)broadcasterForAccountListeners;
- (<IMDaemonListenerAnyProtocol> *)broadcasterForAllListeners;
- (<IMDaemonListenerChatProtocol> *)broadcasterForBlackholeChatListeners;
- (<IMDaemonListenerChatProtocol> *)broadcasterForBlackholeChatListenersSupportingService:(IMDService *)arg1;
- (<IMDaemonListenerChatCountsProtocol> *)broadcasterForChatCountsListeners;
- (<IMDaemonListenerChatDatabaseProtocol> *)broadcasterForChatDatabaseListeners;
- (<IMDaemonListenerChatProtocol> *)broadcasterForChatListeners;
- (<IMDaemonListenerChatProtocol> *)broadcasterForChatListenersSupportingService:(IMDService *)arg1;
- (<IMDaemonListenerChatProtocol> *)broadcasterForChatListenersUsingBlackholeRegistry:(bool)arg1;
- (<IMDaemonListenerCloudSyncProtocol> *)broadcasterForCloudSyncListeners;
- (<IMDaemonListenerFileProviderProtocol> *)broadcasterForFileProviderListeners;
- (<IMDaemonListenerFileTransfersProtocol> *)broadcasterForFileTransferListeners;
- (<IMDaemonListenerServiceProtocol> *)broadcasterForListenersSupportingService:(IMDService *)arg1;
- (<IMDaemonListenerNotificationsProtocol> *)broadcasterForNotificationListenersSupportingService:(IMDService *)arg1;
- (<IMDaemonListenerChatProtocol> *)broadcasterForSentMessageListenersSupportingService:(IMDService *)arg1;
- (<IMDaemonListenerSyncedSettingsProtocol> *)broadcasterForSyncedSettingsListeners;
- (<IMDaemonListenerAVProtocol> *)broadcasterForVCConferenceListenersSupportingService:(IMDService *)arg1;

@end
