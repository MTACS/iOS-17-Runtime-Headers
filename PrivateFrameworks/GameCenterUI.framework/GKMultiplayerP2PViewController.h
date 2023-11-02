
@interface GKMultiplayerP2PViewController : GKMultiplayerViewController <TUConversationManagerDelegate> {
    GKInvite * _acceptedInvite;
    NSSet * _activeRemoteParticipants;
    NSObject<OS_dispatch_queue> * _conversationManagerQueue;
    bool  _datasourceConfigured;
    <GKMultiplayerP2PViewControllerDelegate> * _delegate;
    bool  _hosted;
    double  _inviteeConnectionTimeStamp;
    long long  _mode;
    bool  _sharePlayEnabled;
    bool  _startStagedActivity;
    bool  _userCancelledMatching;
}

@property (nonatomic, retain) GKInvite *acceptedInvite;
@property (nonatomic, retain) NSSet *activeRemoteParticipants;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *conversationManagerQueue;
@property bool datasourceConfigured;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GKMultiplayerP2PViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHosted, nonatomic) bool hosted;
@property (nonatomic) double inviteeConnectionTimeStamp;
@property (nonatomic) long long mode;
@property bool sharePlayEnabled;
@property (nonatomic) bool startStagedActivity;
@property (readonly) Class superclass;
@property bool userCancelledMatching;

+ (void)addContactCheckTaskForMessageID:(id)arg1 respondingPlayer:(id)arg2 dataSource:(id)arg3 toGroup:(id)arg4;

- (void).cxx_destruct;
- (id)acceptedInvite;
- (id)activeRemoteParticipants;
- (void)applicationWillEnterForeground;
- (long long)automatchParticipantStatus;
- (bool)canStartForcedAutomatch;
- (void)cancel;
- (void)cancelAlertWithoutDelegateCallback;
- (void)cancelPendingInvites;
- (void)configureDataSource;
- (void)configureDataSourceWithCompletionHandler:(id /* block */)arg1;
- (void)configureWhenEnteringTheLobby;
- (void)configureWhenLeavingTheLobby;
- (void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;
- (id)conversationManagerQueue;
- (bool)datasourceConfigured;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateAutoMatchPlayerCount;
- (void)displayCancelConfirmationDialog;
- (void)finishWithError:(id)arg1;
- (void)groupActivityJoiningPlayer:(id)arg1 devicePushToken:(id)arg2 participantServerIdentifier:(id)arg3;
- (bool)haveInvitedPlayers;
- (bool)havePendingPlayers;
- (void)incrementOneAutoMatchPlayerCountIfPossible;
- (id)initWithAcceptedInvite:(id)arg1;
- (id)initWithMatchRequest:(id)arg1;
- (void)inviteFriendsButtonPressed;
- (void)invitePlayers:(id)arg1;
- (double)inviteeConnectionTimeStamp;
- (void)inviterCancelled;
- (bool)isCanceling;
- (bool)isHosted;
- (bool)isInSetupMode;
- (void)loadShareURLWithContactPlayers:(id)arg1 completion:(id /* block */)arg2;
- (long long)mode;
- (bool)needRecipientPropertiesForPlayer:(id)arg1;
- (void)performActionsForButtonCancelCurrentMatching:(bool)arg1;
- (void)playNow;
- (void)playerConnected:(id)arg1;
- (void)playerDisconnected:(id)arg1;
- (void)prepopulateSharePlayActiveParticipants;
- (void)presentSharePlaySharingController;
- (void)processStatusUpdateMessageFromPlayer:(id)arg1 bytes:(const char *)arg2 withLength:(unsigned int)arg3;
- (void)removedPlayer:(id)arg1;
- (void)resetInviteesStatus;
- (void)sendInvitesToContactPlayers:(id)arg1 legacyPlayers:(id)arg2;
- (void)sendInvitesToSharePlayPlayer:(id)arg1 devicePushToken:(id)arg2;
- (void)sendStatusUpdate;
- (void)setAcceptedInvite:(id)arg1;
- (void)setActiveRemoteParticipants:(id)arg1;
- (void)setAutomatchFailedWithError:(id)arg1;
- (void)setAutomatchPlayerCount:(long long)arg1;
- (void)setConnectingStateForPlayer:(id)arg1;
- (void)setDatasourceConfigured:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExistingPlayers:(id)arg1;
- (void)setFailedWithError:(id)arg1;
- (void)setHosted:(bool)arg1;
- (void)setInviteeConnectionTimeStamp:(double)arg1;
- (void)setInvitesFailedWithError:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setPlayer:(id)arg1 connected:(bool)arg2;
- (void)setPlayer:(id)arg1 responded:(long long)arg2;
- (void)setPlayer:(id)arg1 sentData:(id)arg2;
- (void)setShareInvitees;
- (void)setSharePlayEnabled:(bool)arg1;
- (void)setStartStagedActivity:(bool)arg1;
- (void)setUserCancelledMatching:(bool)arg1;
- (bool)sharePlayEnabled;
- (void)sharePlayFetchFirstActiveConversationWithHandler:(id /* block */)arg1;
- (bool)shouldChangeModeFromOldMode:(long long)arg1 toNewMode:(long long)arg2;
- (void)showAutomatchingErrorAlert;
- (void)showInviterDisconnectedAlert;
- (void)showMatchDisconnectedAlertForPlayer:(id)arg1;
- (void)showNoInternetAlert;
- (void)showParentalControlsRestrictionAlert;
- (void)startGame;
- (void)startGameButtonPressed;
- (bool)startStagedActivity;
- (void)updateFooterButtonStates;
- (void)updateForNewMode;
- (void)updateMode;
- (void)updateRecipientProperties:(id)arg1;
- (void)updateStartGameButtonTitle;
- (bool)userCancelledMatching;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willPresentPlayerPicker:(id)arg1;

@end