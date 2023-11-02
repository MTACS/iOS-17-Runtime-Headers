
@interface GameCenterUI.AchievementsListViewController : GameCenterUI.BaseViewController <UICollectionViewDelegate> {
    void achievementsCollectionContent;
    void achievementsCollectionView;
    void achivementsStatePresenter;
    void bootstrapPresenter;
    void emptyStateView;
    void gamesListBackgroundView;
    void gamesListCollectionView;
    void gamesListComponents;
    void gamesListDiffableDataSource;
    void gamesListStatePresenter;
    void loadingView;
    void presenter;
    void showLoadingViewTimer;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
