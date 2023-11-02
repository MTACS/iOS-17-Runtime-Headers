
@interface VideosUI.EpicInlineViewController : VUIBaseViewController {
    void collectionImpressioner;
    void horizontalCollectionViewModel;
    void horizontalStackViewController;
    void lastViewWidth;
    void scrollViewMonitor;
    void shelfViewModel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleAppDidEnterBackground:(id)arg1;
- (void)handleAppWillEnterForeground:(id)arg1;
- (void)handleIsPlaybackUIBeingShownDidChange:(id)arg1;
- (void)handleVPPADismissed:(id)arg1;
- (void)handleVPPAPresented:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)vui_loadView;
- (void)vui_viewDidAppear:(bool)arg1;
- (void)vui_viewDidDisappear:(bool)arg1;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillLayoutSubviews;
- (void)vui_willMoveToParentViewController:(id)arg1;

@end
