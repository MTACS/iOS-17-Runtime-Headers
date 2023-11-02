
@interface ConversationKit.CallCenter : NSObject <TUAudioDeviceControllerDelegate, TUConversationManagerDelegate, TUConversationMediaControllerDelegate, TUConversationReactionsControllerDelegate, TURouteControllerDelegate> {
    void delegate;
    void placeholderCallCenter;
    void tuCallCenter;
}

- (void).cxx_destruct;
- (void)audioDeviceControllerMutedTalkerDidEnd:(id)arg1;
- (void)audioDeviceControllerMutedTalkerDidStart:(id)arg1;
- (void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 activitySessionsChangedForConversation:(id)arg2 fromOldConversation:(id)arg3;
- (void)conversationManager:(id)arg1 addedActiveConversation:(id)arg2;
- (void)conversationManager:(id)arg1 avModeChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 cameraMixedWithScreenDidChangeForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 collaborationChanged:(id)arg2 forConversation:(id)arg3 collaborationState:(long long)arg4;
- (void)conversationManager:(id)arg1 conversation:(id)arg2 buzzedMember:(id)arg3;
- (void)conversationManager:(id)arg1 conversation:(id)arg2 launchStateChanged:(unsigned long long)arg3 forActivitySession:(id)arg4;
- (void)conversationManager:(id)arg1 conversation:(id)arg2 participant:(id)arg3 addedCollaborationNotice:(id)arg4;
- (void)conversationManager:(id)arg1 conversation:(id)arg2 participant:(id)arg3 addedNotice:(id)arg4;
- (void)conversationManager:(id)arg1 conversation:(id)arg2 updatedMessagesGroupPhoto:(id)arg3;
- (void)conversationManager:(id)arg1 ignoreLMIRequestsChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 letMeInRequestStateChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 linkChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 linkInvitedMemberHandlesChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 localVideoToggledForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 migratingFromConversation:(id)arg2 toConversation:(id)arg3;
- (void)conversationManager:(id)arg1 oneToOneModeChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 otherInvitedHandlesChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 pendingMembersChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 rejectedMembersChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 remoteMembersChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 remoteScreenShareAttributesChanged:(id)arg2 isLocallySharing:(bool)arg3;
- (void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;
- (void)conversationManager:(id)arg1 resolvedAudioVideoModeChangedForConversation:(id)arg2;
- (void)conversationManager:(id)arg1 screenSharingAvailableChanged:(bool)arg2;
- (void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;
- (id)init;
- (void)mediaController:(id)arg1 participantMediaPrioritiesChangedForConversation:(id)arg2;
- (void)reactionsController:(id)arg1 conversation:(id)arg2 participant:(id)arg3 didReact:(id)arg4;
- (void)reactionsController:(id)arg1 conversation:(id)arg2 participantDidStopReacting:(id)arg3;
- (void)routesChangedForRouteController:(id)arg1;

@end
