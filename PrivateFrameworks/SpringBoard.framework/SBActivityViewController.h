
@interface SBActivityViewController : UIViewController <ACUISActivityHostViewControllerDelegate> {
    ACUISActivityHostViewController * _activityHostViewController;
    SBActivityItem * _activityItem;
    <SBActivityViewControllerDelegate> * _delegate;
    unsigned long long  _presentationMode;
    unsigned long long  _visibility;
}

@property (nonatomic, retain) ACUISActivityHostViewController *activityHostViewController;
@property (nonatomic, readonly) SBActivityItem *activityItem;
@property (nonatomic, readonly) NSSet *audioCategoriesDisablingVolumeHUD;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBActivityViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredActivityContentSize;
@property (nonatomic) unsigned long long presentationMode;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long visibility;
@property (nonatomic, readonly) bool wantsIdleTimerDisabled;

- (void).cxx_destruct;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)arg1;
- (void)_unlockAndLaunchAppIfPossible:(id)arg1 withAction:(id)arg2;
- (void)_viewWillLayoutSubviews;
- (id)activityHostViewController;
- (void)activityHostViewController:(id)arg1 didSetIdleTimerDisabled:(bool)arg2;
- (void)activityHostViewController:(id)arg1 requestsLaunchWithAction:(id)arg2;
- (void)activityHostViewControllerAudioCategoriesDisablingVolumeHUDDidChange:(id)arg1;
- (void)activityHostViewControllerBackgroundTintColorDidChange:(id)arg1;
- (void)activityHostViewControllerHostShouldCancelTouches:(id)arg1;
- (id)activityItem;
- (id)audioCategoriesDisablingVolumeHUD;
- (void)dealloc;
- (id)delegate;
- (void)ensureContent:(double)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithActivityItem:(id)arg1 sceneType:(long long)arg2 payloadID:(id)arg3;
- (id)initWithActivityItem:(id)arg1 viewController:(id)arg2;
- (void)invalidate;
- (struct CGSize { double x1; double x2; })preferredActivityContentSize;
- (unsigned long long)presentationMode;
- (void)setActivityHostViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setVisibility:(unsigned long long)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (unsigned long long)visibility;
- (bool)wantsIdleTimerDisabled;

@end
