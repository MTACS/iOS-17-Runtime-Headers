
@interface VideosUI.CarouselViewController : UIViewController <TVCarouselViewDataSource, TVCarouselViewDelegate, UIContextMenuInteractionDelegate> {
    void $__lazy_storage_$_carouselViewContainer;
    void $__lazy_storage_$_cellVisibilityMonitor;
    void $__lazy_storage_$_visibleCellViewModels;
    void centeredItemIndex;
    void collectionViewModel;
    void contextMenuInteractor;
    void dataModelItems;
    void headerViewModel;
    void lastViewWidth;
    void selfVisibilityMonitor;
    void viewImpressioner;
}

- (void).cxx_destruct;
- (id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(id)arg1 didCenterItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)carouselView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)dealloc;
- (void)handleFullscreenPlaybackUIDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)vui_willMoveToParentViewController:(id)arg1;

@end
