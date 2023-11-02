
@interface GKMatchmakerHostViewController : GKExtensionRemoteViewController <GKMatchmakerHostProtocol, GKMatchmakerServiceProtocol> {
    GKMatchmakerViewController * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GKMatchmakerViewController *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)dismissAutomaticallyAfterExtensionCompletion;
+ (id)matchmakerExtension;

- (void).cxx_destruct;
- (void)applicationWillEnterForeground;
- (id)delegate;
- (void)extensionIsCanceling;
- (void)extensionIsFinishing;
- (id)extensionObjectProxy;
- (void)groupActivityJoiningPlayer:(id)arg1 devicePushToken:(id)arg2 participantServerIdentifier:(id)arg3;
- (void)inviterCancelled;
- (void)messageFromExtension:(id)arg1;
- (void)recipientsPropertiesProvided:(id)arg1;
- (void)setAcceptedInviteInternal:(id)arg1;
- (void)setAutomatchFailedWithError:(id)arg1;
- (void)setAutomatchPlayerCount:(long long)arg1;
- (void)setCanStartWithMinimumPlayers:(bool)arg1;
- (void)setConnectingStateForPlayer:(id)arg1;
- (void)setDefaultInvitationMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEligibilityForGroupSession:(bool)arg1;
- (void)setExistingPlayers:(id)arg1;
- (void)setFailedWithError:(id)arg1;
- (void)setHosted:(bool)arg1;
- (void)setInvitesFailedWithError:(id)arg1;
- (void)setMatchRequestInternal:(id)arg1;
- (void)setMatchmakingMode:(long long)arg1;
- (void)setNearbyPlayer:(id)arg1 reachable:(bool)arg2;
- (void)setPlayer:(id)arg1 connected:(bool)arg2;
- (void)setPlayer:(id)arg1 responded:(long long)arg2;
- (void)setPlayer:(id)arg1 sentData:(id)arg2;
- (void)setSharePlaySharingControllerResult:(bool)arg1;
- (void)shareMatchWithRequest:(id)arg1 handler:(id /* block */)arg2;

@end
