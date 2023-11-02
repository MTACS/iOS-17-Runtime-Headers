
@interface GameCenterUI.PlayerProfilePresenter : GameCenterUI.BaseSplitPresenter {
    void nicknamePresenter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  nicknameUpdatedSubscription;
    void onNicknameChanged;
    void onShowAvatarEditor;
    void pageContext;
    void pageMericsPresenter;
    void primarySections;
    void profileType;
    void requiredData;
    void requiredDataPresenter;
    void secondarySections;
    void sections;
}

@property (nonatomic) bool displayInSplitView;
@property (nonatomic, readonly) bool isSignedIn;
@property (nonatomic, retain) _TtC12GameCenterUI17NicknamePresenter *nicknamePresenter;
@property (nonatomic, readonly) NSArray *rightBarButtonItems;
@property (nonatomic, readonly) bool showRemoveFriendOption;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) bool wantsHiddenNavigationBar;
@property (nonatomic, readonly) bool wantsHiddenTitle;

+ (bool)isSettings;

- (void).cxx_destruct;
- (void)addFriends;
- (id)contextMenuAction;
- (void)didSignOut;
- (bool)displayInSplitView;
- (id)initWithPlayerId:(id)arg1;
- (bool)isSignedIn;
- (void)loadMoreActivityFeedWithContinuationToken:(id)arg1;
- (id)nicknamePresenter;
- (void)profileSettings;
- (void)removeFriend;
- (void)reportPlayer;
- (id)rightBarButtonItems;
- (void)setAllowsNearByMultiplayerInvites:(bool)arg1;
- (void)setDisplayInSplitView:(bool)arg1;
- (void)setNicknamePresenter:(id)arg1;
- (void)showAvatarEditor;
- (void)showRecentlyPlayedWithFriends;
- (bool)showRemoveFriendOption;
- (void)signIntoGameCenter;
- (id)title;
- (void)updateSnapshot;
- (void)viewFriendRequests;
- (bool)wantsHiddenNavigationBar;
- (bool)wantsHiddenTitle;

@end
