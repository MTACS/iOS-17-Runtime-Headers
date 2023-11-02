
@interface GKTurnBasedMatchDetailViewController : GKBasicCollectionViewController {
    NSObject<GKTurnBasedMatchDetailViewControllerDelegate> * _delegateWeak;
    GKGame * _game;
    GKTurnBasedMatchDetailHeaderView * _headerView;
    double  _initialSectionHeaderHeight;
    bool  _isInGame;
    GKTurnBasedMatch * _match;
    GKTurnBasedParticipantsDataSource * _participantsDataSource;
    bool  _shouldShowPlay;
    bool  _shouldShowQuit;
}

@property (nonatomic) NSObject<GKTurnBasedMatchDetailViewControllerDelegate> *delegate;
@property (nonatomic, retain) GKGame *game;
@property (nonatomic, retain) GKTurnBasedMatchDetailHeaderView *headerView;
@property (nonatomic) double initialSectionHeaderHeight;
@property (nonatomic) bool isInGame;
@property (nonatomic, retain) GKTurnBasedMatch *match;
@property (nonatomic, retain) GKTurnBasedParticipantsDataSource *participantsDataSource;
@property (nonatomic) bool shouldShowPlay;
@property (nonatomic) bool shouldShowQuit;

- (void).cxx_destruct;
- (id)_gkRepresentedObject;
- (void)acceptInvitation:(id)arg1;
- (void)addBackgroundVisualEffect;
- (void)buyButtonPressed:(id)arg1;
- (void)chooseMatch:(id)arg1;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)configureDataSource;
- (void)configureHeader:(id)arg1 indexPath:(id)arg2;
- (void)configureMatchDetailHeader:(id)arg1;
- (void)configureViewFactories;
- (void)dealloc;
- (void)declineInvitation:(id)arg1;
- (id)delegate;
- (void)didEnterNoContentState;
- (void)didUpdateModel;
- (void)doneButtonPressed:(id)arg1;
- (id)game;
- (void)handleTurnBasedEvent:(id)arg1;
- (id)headerView;
- (id)init;
- (double)initialSectionHeaderHeight;
- (bool)isInGame;
- (id)match;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)participantsDataSource;
- (id)preferredFocusEnvironments;
- (void)quitMatch:(id)arg1;
- (void)removeMatch:(id)arg1;
- (void)setActionButtonEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setInitialSectionHeaderHeight:(double)arg1;
- (void)setIsInGame:(bool)arg1;
- (void)setMatch:(id)arg1;
- (void)setParticipantsDataSource:(id)arg1;
- (void)setShouldShowPlay:(bool)arg1;
- (void)setShouldShowQuit:(bool)arg1;
- (void)setupActionButton;
- (bool)shouldShowPlay;
- (bool)shouldShowQuit;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateUIBasedOnTraitCollection;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
