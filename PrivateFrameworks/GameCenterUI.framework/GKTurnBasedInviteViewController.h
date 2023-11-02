
@interface GKTurnBasedInviteViewController : GKMultiplayerViewController {
    <GKTurnBasedInviteViewControllerDelegate> * _delegate;
    bool  _deletePreloadedMatch;
    NSMutableDictionary * _inviteMessageDictionary;
    GKTurnBasedMatch * _match;
    long long  _mode;
}

@property (nonatomic) <GKTurnBasedInviteViewControllerDelegate> *delegate;
@property (nonatomic) bool deletePreloadedMatch;
@property (nonatomic, retain) NSMutableDictionary *inviteMessageDictionary;
@property (getter=isLoadingOrRemovingPreloadedMatch, nonatomic, readonly) bool loadingOrRemovingPreloadedMatch;
@property (nonatomic, retain) GKTurnBasedMatch *match;
@property (nonatomic) long long mode;

- (void).cxx_destruct;
- (long long)automatchParticipantStatus;
- (bool)canStartForcedAutomatch;
- (void)cancel;
- (void)cleanupStateForCancelOrErrorWithHandler:(id /* block */)arg1;
- (void)createGameWithPlayersToInvite:(id)arg1 forSharing:(bool)arg2 handler:(id /* block */)arg3;
- (id)delegate;
- (bool)deletePreloadedMatch;
- (void)didClickCancelForServiceUnavailableAlert;
- (void)didInviteContactPlayers;
- (void)finishWithError:(id)arg1;
- (void)finishWithMatchID:(id)arg1;
- (void)handleNewParticipantCount:(long long)arg1;
- (void)inviteFriendsButtonPressed;
- (id)inviteMessageDictionary;
- (void)invitePlayers:(id)arg1;
- (bool)isInSetupMode;
- (bool)isLoadingOrRemovingPreloadedMatch;
- (id)match;
- (long long)mode;
- (void)performActionsForButtonCancelCurrentMatching;
- (void)playNow;
- (void)removeCurrentMatchAndSetFlagIfNotLoaded:(bool)arg1 withHandler:(id /* block */)arg2;
- (void)sendInvitesToContactPlayers:(id)arg1 legacyPlayers:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDeletePreloadedMatch:(bool)arg1;
- (void)setInviteMessageDictionary:(id)arg1;
- (void)setInvitesFailedWithError:(id)arg1;
- (void)setMatch:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)startGameButtonPressed;
- (void)updateStartGameButtonTitle;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
