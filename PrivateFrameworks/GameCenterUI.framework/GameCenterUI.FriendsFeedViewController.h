
@interface GameCenterUI.FriendsFeedViewController : GameCenterUI.BaseJetCollectionViewController <GKPlayerAvatarViewDelegate> {
    void activityFeedPresenter;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })collectionViewFrameInsets;
- (id)initWithCoder:(id)arg1;
- (void)loadMoreWithContinuationToken:(id)arg1;
- (id)makeLayout;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
