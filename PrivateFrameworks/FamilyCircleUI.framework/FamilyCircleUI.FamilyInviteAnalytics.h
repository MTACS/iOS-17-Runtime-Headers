
@interface FamilyCircleUI.FamilyInviteAnalytics : NSObject

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (void)sendFamilyInviteInteractionEventWithAction:(id)arg1 inviteState:(id)arg2 isReceiver:(bool)arg3;
- (void)sendFamilyInviteStatusUpdateEventWithUpdateStatus:(id)arg1 success:(bool)arg2;
- (void)sendFamilySuggestionsEventWithFamilySuggestionsCount:(long long)arg1 hasBoostedContacts:(bool)arg2;
- (void)sendOtherContactInvitedEventWithInviteTransport:(id)arg1 inviteCompletionStatus:(long long)arg2;
- (void)sendSuggestedContactInvitedEventWithInviteCompletionStatus:(long long)arg1;
- (void)sendTapInviteOnSuggestedContactEvent;
- (void)sendTapInviteOthersEvent;

@end
