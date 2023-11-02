
@interface IMADockViewController : UIViewController <CKBrowserSwitcherFooterViewDelegate> {
    IMAAppPresenter * _appPresenter;
    CKBrowserSwitcherFooterView * _appStrip;
    CKBrowserSwitcherFooterViewDataSource * _appStripDataSource;
    <IMADockViewControllerDelegate> * _delegate;
    bool  _showIconBorders;
}

@property (nonatomic) bool alwaysPresentAppsExpanded;
@property (nonatomic, readonly) UIViewController *currentAppViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IMADockViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesCompactAppForStickerDrag;
@property (nonatomic, readonly) double minimizedDockHeight;
@property (nonatomic) bool showIconBorders;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)alwaysPresentAppsExpanded;
- (id)appStrip;
- (void)cleanupRunningApps;
- (id)currentAppViewController;
- (id)delegate;
- (void)hideAppViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)hidesCompactAppForStickerDrag;
- (id)imageViewForSticker:(id)arg1;
- (id)init;
- (double)minimizedDockHeight;
- (void)setAlwaysPresentAppsExpanded:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidesCompactAppForStickerDrag:(bool)arg1;
- (void)setShowIconBorders:(bool)arg1;
- (bool)showIconBorders;
- (void)switcherView:(id)arg1 didMagnify:(bool)arg2;
- (void)switcherView:(id)arg1 didSelectPluginAtIndex:(id)arg2;
- (void)updateAppStripFrame;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
