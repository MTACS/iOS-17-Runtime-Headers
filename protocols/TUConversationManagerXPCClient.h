
@protocol TUConversationManagerXPCClient <TUConversationMediaControllerXPCClient, TUConversationMessagesGroupProviderXPCClient, TUConversationReactionsControllerXPCClient>

@required

- (oneway void)activeParticipant:(TUConversationParticipant *)arg1 addedHighlightToConversation:(TUConversation *)arg2 highlightIdentifier:(NSString *)arg3 oldHighlightIdentifier:(NSString *)arg4 isFirstAdd:(bool)arg5;
- (oneway void)activeParticipant:(TUConversationParticipant *)arg1 removedHighlightFromConversation:(TUConversation *)arg2 highlightIdentifier:(NSString *)arg3;
- (oneway void)addedCollaborationDictionary:(NSDictionary *)arg1 forConversation:(TUConversation *)arg2;
- (oneway void)conversation:(TUConversation *)arg1 addedMembersLocally:(NSSet *)arg2;
- (oneway void)conversation:(TUConversation *)arg1 appLaunchState:(unsigned long long)arg2 forActivitySession:(TUConversationActivitySession *)arg3;
- (oneway void)conversation:(TUConversation *)arg1 buzzedMember:(TUConversationMember *)arg2;
- (oneway void)conversation:(TUConversation *)arg1 collaborationStateChanged:(long long)arg2 highlightIdentifier:(NSString *)arg3;
- (oneway void)conversation:(TUConversation *)arg1 didChangeSceneAssociationForActivitySession:(TUConversationActivitySession *)arg2;
- (oneway void)conversation:(TUConversation *)arg1 didChangeStateForActivitySession:(TUConversationActivitySession *)arg2;
- (oneway void)conversation:(TUConversation *)arg1 participant:(TUConversationParticipant *)arg2 addedNotice:(TUConversationNotice *)arg3;
- (oneway void)conversation:(TUConversation *)arg1 receivedActivitySessionEvent:(TUConversationActivityEvent *)arg2;
- (oneway void)conversation:(TUConversation *)arg1 screenSharingChangedForParticipant:(TUConversationParticipant *)arg2;
- (oneway void)conversationUpdatedMessagesGroupPhoto:(TUConversation *)arg1;
- (oneway void)receivedTrackedPendingMember:(TUConversationMember *)arg1 forConversationLink:(TUConversationLink *)arg2;
- (oneway void)remoteScreenShareAttributesChanged:(id <TUScreenShareAttributes>)arg1 isLocallySharing:(bool)arg2;
- (oneway void)remoteScreenShareEndedWithReason:(NSError *)arg1;
- (oneway void)screenSharingAvailableChanged:(bool)arg1;
- (oneway void)sharePlayAvailableChanged:(bool)arg1;
- (oneway void)updateActivatedConversationLinks:(NSArray *)arg1;
- (oneway void)updateActivityAuthorizedBundleIdentifierState:(NSDictionary *)arg1;
- (oneway void)updateConversationsByGroupUUID:(NSDictionary *)arg1;
- (oneway void)updateIncomingPendingConversationsByGroupUUID:(NSDictionary *)arg1;

@end
