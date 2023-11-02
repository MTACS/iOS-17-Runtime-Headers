
@interface NTKGreenfieldViewController : UIViewController <NTKGreenfieldAddWatchFaceManagerDelegate, NTKGreenfieldCompanionContentViewControllerDelegate> {
    NTKGreenfieldAddWatchFaceManager * _addWatchFaceManager;
    UILabel * _complicationsCounterLabel;
    NSURL * _faceURL;
    bool  _hasLoadedURL;
    UINavigationController * _hiddenNavigationController;
    NTKGreenfieldCompanionLoadingViewController * _loadingViewController;
    NSString * _sourceApplicationBundleIdentifier;
}

@property (nonatomic, retain) NTKGreenfieldAddWatchFaceManager *addWatchFaceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *faceURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationController *hiddenNavigationController;
@property (nonatomic, retain) NTKGreenfieldCompanionLoadingViewController *loadingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didTapCancelButton;
- (void)_toggleCancelButton:(bool)arg1;
- (void)_toggleRightCounterLabel:(bool)arg1;
- (id)addWatchFaceManager;
- (void)addWatchFaceManager:(id)arg1 didFinishAddingFaceWithError:(id)arg2;
- (void)addWatchFaceManager:(id)arg1 updateStateToAddComplicationWithItemId:(id)arg2 installMode:(long long)arg3 skippedComplicationSlots:(id)arg4;
- (void)addWatchFaceManager:(id)arg1 updateStateToCompletedWithSkippedComplicationSlots:(id)arg2 canRevisit:(bool)arg3;
- (void)addWatchFaceManager:(id)arg1 updateStateToComplicationsNotAvailableWithSlots:(id)arg2 unavailableTitle:(id)arg3 unavailableDescription:(id)arg4;
- (void)addWatchFaceManager:(id)arg1 updateStateToRevisitComplicationWithItemId:(id)arg2 installMode:(long long)arg3 skippedComplicationSlots:(id)arg4;
- (void)addWatchFaceManager:(id)arg1 updateStateToWelcomeWithCanAddFaceDirectly:(bool)arg2;
- (void)companionContentViewController:(id)arg1 didStartInstallingAppWithItemId:(id)arg2;
- (void)companionContentViewController:(id)arg1 handleButtonEvent:(long long)arg2;
- (void)didStartLoadingInAddWatchFaceManager:(id)arg1;
- (id)faceURL;
- (id)hiddenNavigationController;
- (id)initWithUrl:(id)arg1 sourceApplicationBundleIdentifier:(id)arg2;
- (id)loadingViewController;
- (void)setAddWatchFaceManager:(id)arg1;
- (void)setFaceURL:(id)arg1;
- (void)setHiddenNavigationController:(id)arg1;
- (void)setLoadingViewController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
