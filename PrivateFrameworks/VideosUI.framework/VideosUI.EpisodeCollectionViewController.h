
@interface VideosUI.EpisodeCollectionViewController : VideosUI.VUIViewController <UIContextMenuInteractionDelegate, VideosUI.VUICollectionViewDelegate, VideosUI.VUIScrollViewDelegate> {
    void cachedPrototypeCell;
    void cachedPrototypeCellMetrics;
    void cachedPrototypeLastWidth;
    void contextMenuInteractor;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentSnapshot;
    void dataSource;
    void viewImpressioner;
    void viewModel;
}

- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)vuiCollectionView:(id)arg1 didEndDisplaying:(id)arg2 for:(id)arg3;
- (void)vuiCollectionView:(id)arg1 didSelectItemAt:(id)arg2;
- (void)vuiCollectionView:(id)arg1 willDisplay:(id)arg2 for:(id)arg3;
- (void)vuiCollectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 at:(id)arg4;
- (void)vuiScrollViewDidEndDecelerating:(id)arg1;
- (void)vuiScrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)vuiScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)vuiScrollViewDidScroll:(id)arg1;
- (void)vuiScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)vui_loadView;
- (void)vui_viewDidLayoutSubviews;

@end
