
@protocol TUConversationManagerDataSourceDelegate <NSObject>

@required

- (void)activeParticipant:(TUConversationParticipant *)arg1 addedHighlightToConversation:(TUConversation *)arg2 highlightIdentifier:(NSString *)arg3 oldHighlightIdentifier:(NSString *)arg4 isFirstAdd:(bool)arg5;
- (void)activeParticipant:(TUConversationParticipant *)arg1 removedHighlightFromConversation:(TUConversation *)arg2 highlightIdentifier:(NSString *)arg3;
- (void)activityAuthorizationsChangedForDataSource:(id <TUConversationManagerDataSource>)arg1 oldActivityAuthorizedBundleIdentifiers:(NSDictionary *)arg2;
- (void)addedCollaborationDictionary:(NSDictionary *)arg1 forConversation:(TUConversation *)arg2;
- (void)conversation:(TUConversation *)arg1 addedMembersLocally:(NSSet *)arg2;
- (void)conversation:(TUConversation *)arg1 buzzedMember:(TUConversationMember *)arg2;
- (void)conversation:(TUConversation *)arg1 collaborationStateChanged:(long long)arg2 highlightIdentifier:(NSString *)arg3;
- (void)conversation:(TUConversation *)arg1 didChangeSceneAssociationForActivitySession:(TUConversationActivitySession *)arg2;
- (void)conversation:(TUConversation *)arg1 didChangeStateForActivitySession:(TUConversationActivitySession *)arg2;
- (void)conversation:(TUConversation *)arg1 participant:(TUConversationParticipant *)arg2 addedNotice:(TUConversationNotice *)arg3;
- (void)conversation:(TUConversation *)arg1 receivedActivitySessionEvent:(TUConversationActivityEvent *)arg2;
- (void)conversation:(TUConversation *)arg1 screenSharingChangedForParticipant:(TUConversationParticipant *)arg2;
- (void)conversationManagerDataSource:(id <TUConversationManagerDataSource>)arg1 conversation:(TUConversation *)arg2 appLaunchState:(unsigned long long)arg3 forActivitySession:(TUConversationActivitySession *)arg4;
- (void)conversationManagerDataSource:(id <TUConversationManagerDataSource>)arg1 didChangeActivatedConversationLinks:(NSArray *)arg2;
- (void)conversationManagerDataSource:(void *)arg1 messagesGroupDetailsForMessagesGroupId:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: <TUConversationManagerDataSource> *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)conversationUpdatedMessagesGroupPhoto:(TUConversation *)arg1;
- (void)conversationsChangedForDataSource:(id <TUConversationManagerDataSource>)arg1 conversationsByGroupUUID:(NSDictionary *)arg2 oldConversationsByGroupUUID:(NSDictionary *)arg3;
- (void)conversationsChangedForDataSource:(id <TUConversationManagerDataSource>)arg1 updatedIncomingPendingConversationsByGroupUUID:(NSDictionary *)arg2;
- (void)receivedTrackedPendingMember:(TUConversationMember *)arg1 forConversationLink:(TUConversationLink *)arg2;
- (void)remoteScreenShareAttributesChanged:(id <TUScreenShareAttributes>)arg1 isLocallySharing:(bool)arg2;
- (void)remoteScreenShareEndedWithReason:(NSError *)arg1;
- (void)screenSharingAvailableChanged:(bool)arg1;
- (void)serverDisconnectedForDataSource:(id <TUConversationManagerDataSource>)arg1 oldConversationsByGroupUUID:(NSDictionary *)arg2;
- (void)sharePlayAvailableChanged:(bool)arg1;

@end
