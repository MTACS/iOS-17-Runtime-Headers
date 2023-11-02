
@interface SHSheetSceneViewController : UIViewController <SHSheetContentView, SHSheetSceneDelegate, SHSheetSceneSettingsDiffActionDelegate> {
    SHSheetScrollingTest * _currentTest;
    <SHSheetContentPresenter> * _presenter;
    LPLinkMetadata * _remoteHeaderMetadata;
    SHSheetScene * _scene;
    UIView * _sceneView;
    <SHSheetSession> * _session;
}

@property (nonatomic, retain) SHSheetScrollingTest *currentTest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) LPLinkMetadata *headerMetadata;
@property (nonatomic) <SHSheetContentPresenter> *presenter;
@property (nonatomic, retain) LPLinkMetadata *remoteHeaderMetadata;
@property (nonatomic, readonly) SHSheetScene *scene;
@property (nonatomic, readonly) UIView *sceneView;
@property (nonatomic, readonly) <SHSheetSession> *session;
@property (readonly) Class superclass;

+ (bool)_wantsContentOverlayInsetsUpdatesWhileDismissing;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_framePortrait;
- (long long)_hostProcessType;
- (id)_hostSheetPresentationController;
- (void)_installSceneView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_safeAreaInsetsPortrait;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_sceneWillEnterForeground:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (id)currentTest;
- (void)dealloc;
- (void)didUpdateAirDropTransferWithChange:(id)arg1;
- (id)headerMetadata;
- (id)initWithSession:(id)arg1;
- (id)presenter;
- (void)reloadActivity:(id)arg1;
- (void)reloadContent;
- (void)reloadMetadata:(id)arg1;
- (id)remoteHeaderMetadata;
- (void)runScrollingTestWithName:(id)arg1 type:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)scene;
- (void)scene:(id)arg1 didReceiveAction:(id)arg2;
- (void)scene:(id)arg1 didReceiveContentUpdateNotification:(id)arg2;
- (void)scene:(id)arg1 didReceiveDraggingAction:(id)arg2;
- (void)scene:(id)arg1 didReceiveSuggestionAction:(id)arg2;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneSettingsDidChange:(id)arg1;
- (id)sceneView;
- (id)session;
- (void)setCurrentTest:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)setRemoteHeaderMetadata:(id)arg1;
- (void)startPulsingActivity:(id)arg1 localizedTitle:(id)arg2;
- (void)stopPulsingActivity:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewSafeAreaInsetsDidChange;

@end
