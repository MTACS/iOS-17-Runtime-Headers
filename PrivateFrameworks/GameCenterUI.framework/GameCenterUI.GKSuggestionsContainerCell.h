
@interface GameCenterUI.GKSuggestionsContainerCell : GameCenterUI.GKSuggestionsContainerBaseCell <GameCenterUI.GKPickerGroupCellProxy, GameCenterUI.GKSuggestionsPlayerSelectionProxy, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void containerView;
    void containerViewLeadingConstraint;
    void containerViewTrailingConstraint;
    void dataLoaded;
    void dataSourceIdentifier;
    void horizontalInset;
    void multiplayerPickerDataSource;
    void nearbyIconTapHandler;
    void nearbyPlayers;
    void presentationViewController;
    void suggestionsCollectionView;
    void suggestionsDataSource;
    void suggestionsDelegate;
}

@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic) UIView *containerView;
@property (nonatomic) NSLayoutConstraint *containerViewLeadingConstraint;
@property (nonatomic) NSLayoutConstraint *containerViewTrailingConstraint;
@property (nonatomic) GKDashboardMultiplayerPickerDataSource *multiplayerPickerDataSource;
@property (nonatomic, copy) id /* block */ nearbyIconTapHandler;
@property (nonatomic) UIViewController *presentationViewController;
@property (nonatomic) UICollectionView *suggestionsCollectionView;

+ (double)defaultCellHeight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (bool)canBecomeFocused;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)configureWithDelegate:(id)arg1 nearbyPlayers:(id)arg2;
- (id)containerView;
- (id)containerViewLeadingConstraint;
- (id)containerViewTrailingConstraint;
- (void)didAttemptSelectingAlreadySelectedPlayers:(id)arg1 inGroup:(id)arg2;
- (void)didDeselectPlayerGroup:(id)arg1 indexPath:(id)arg2 dataSourceIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)didDeselectPlayers:(id)arg1 indexPath:(id)arg2 dataSourceIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)didExceedAvailablePlayers;
- (void)didSelectPlayerGroup:(id)arg1 indexPath:(id)arg2 dataSourceIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)didSelectPlayers:(id)arg1 indexPath:(id)arg2 dataSourceIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)donateGroupToPeopleSuggester:(id)arg1;
- (long long)getMaxPlayerCount;
- (long long)getSelectedPlayerCount;
- (id)getSuggestedPlayerGroups;
- (void)handleLongPressGesture:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)multiplayerPickerDataSource;
- (id /* block */)nearbyIconTapHandler;
- (bool)playerIsSelectable:(id)arg1;
- (bool)playerIsSelected:(id)arg1;
- (id)presentationViewController;
- (void)setContainerView:(id)arg1;
- (void)setContainerViewLeadingConstraint:(id)arg1;
- (void)setContainerViewTrailingConstraint:(id)arg1;
- (void)setMultiplayerPickerDataSource:(id)arg1;
- (void)setNearbyIconTapHandler:(id /* block */)arg1;
- (void)setPresentationViewController:(id)arg1;
- (void)setSuggestionsCollectionView:(id)arg1;
- (id)suggestionsCollectionView;
- (void)updateNearbyPlayers:(id)arg1;
- (void)updateVisibleItemsWithPlayers:(id)arg1 excludedIndexPath:(id)arg2;

@end
