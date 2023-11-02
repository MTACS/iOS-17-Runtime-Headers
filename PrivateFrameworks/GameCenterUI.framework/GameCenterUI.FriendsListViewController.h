
@interface GameCenterUI.FriendsListViewController : GameCenterUI.BaseJetCollectionViewController <UISearchControllerDelegate, UISearchResultsUpdating> {
    void friendsPresenter;
    void searchController;
}

@property (nonatomic, retain) _TtC12GameCenterUI13BasePresenter *dataPresenter;

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })collectionViewFrameInsets;
- (id)dataPresenter;
- (void)didDismissSearchController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)makeLayout;
- (void)setDataPresenter:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
