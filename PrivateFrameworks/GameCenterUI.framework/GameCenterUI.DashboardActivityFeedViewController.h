
@interface GameCenterUI.DashboardActivityFeedViewController : GameCenterUI.BaseJetCollectionViewController <GKPlayerAvatarViewDelegate> {
    void activityFeedPresenter;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })collectionViewFrameInsets;
- (id)initWithCoder:(id)arg1;
- (void)loadMoreWithContinuationToken:(id)arg1;
- (id)makeLayout;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
