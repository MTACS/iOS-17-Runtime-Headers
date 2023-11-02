
@interface CopresenceCore.ConversationManagerHostConnection : _TtGC14CopresenceCore17XPCHostConnectionOS_28ConversationManagerInterface_ <CPConversationManagerXPCClient, CPConversationManagerXPCHost> {
    void $__lazy_storage_$_protectedStorage;
    void delegate;
    void featureFlags;
    void hasRequestedState;
    void identifiersForCustomEndpoints;
    void serverBag;
}

- (void).cxx_destruct;
- (void)addRemoteMembers:(id)arg1 toConversationWithUUID:(id)arg2;
- (void)buzzMember:(id)arg1 conversationUUID:(id)arg2;
- (void)createActivitySessionWith:(id)arg1 onConversationWithUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)includeMetricsReport:(id)arg1 onConversationWithUUID:(id)arg2;
- (void)kickMember:(id)arg1 conversationUUID:(id)arg2;
- (void)prepareForGroupActivityWithOverrides:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerIdentifierForCustomEndpoint:(id)arg1;
- (void)requestConversationContainersByGroupUUIDWithReply:(id /* block */)arg1;
- (void)requestEndpointWith:(id)arg1 activitySessionUUID:(id)arg2 activity:(id)arg3 completion:(id /* block */)arg4;
- (void)setActivityAuthorization:(bool)arg1 forBundleIdentifier:(id)arg2;
- (void)setDownlinkMuted:(bool)arg1 forRemoteParticipantsInConversationWithUUID:(id)arg2;
- (void)unregisterIdentifierForCustomEndpoint:(id)arg1;
- (void)updateConversationContainersWithConversationContainersByGroupUUID:(id)arg1;
- (void)updateConversationWith:(id)arg1 participantPresentationContexts:(id)arg2;

@end
