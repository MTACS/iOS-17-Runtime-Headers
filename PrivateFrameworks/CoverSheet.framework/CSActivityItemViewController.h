
@interface CSActivityItemViewController : UIViewController <CSActivityItemContentViewSizeProviding, CSListItemHosting, NCNotificationListSupplementaryViewPresentable, SBFBacklightSceneHostEnvironmentProviding> {
    ACUISActivityHostViewController * _activityHostViewController;
    bool  _contentVisible;
    bool  _listAppeared;
    <BSInvalidatable> * _restrictsTouchesAssertion;
    <CSListItemSceneHostEnvironmentObserving> * _sceneHostEnvironmentObserver;
    bool  _screenOn;
}

@property (nonatomic, readonly) NSArray *activityHostTouchRestrictedRects;
@property (nonatomic, retain) ACUISActivityHostViewController *activityHostViewController;
@property (nonatomic) double containerCornerRadius;
@property (getter=isContentVisible, nonatomic) bool contentVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isListAppeared, nonatomic) bool listAppeared;
@property (nonatomic, retain) <BSInvalidatable> *restrictsTouchesAssertion;
@property (nonatomic) <CSListItemSceneHostEnvironmentObserving> *sceneHostEnvironmentObserver;
@property (getter=isScreenOn, nonatomic) bool screenOn;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_invalidateRestrictsTouchesAssertion;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)arg1;
- (void)_updatePresentationModeWithReason:(id)arg1;
- (id)activityHostTouchRestrictedRects;
- (id)activityHostViewController;
- (struct CGSize { double x1; double x2; })contentSizeForContentView:(id)arg1;
- (void)dealloc;
- (id)initWithActivityHostViewController:(id)arg1;
- (bool)isContentVisible;
- (bool)isListAppeared;
- (bool)isScreenOn;
- (void)loadView;
- (void)notificationListSupplementaryViewPresentableContentWillBecomeVisible:(bool)arg1;
- (id)restrictsTouchesAssertion;
- (void)restrictsTouchesOnHostedScene:(bool)arg1;
- (id)sceneHostEnvironmentEntriesForBacklightSession;
- (id)sceneHostEnvironmentObserver;
- (void)setActivityHostViewController:(id)arg1;
- (void)setContentVisible:(bool)arg1;
- (void)setListAppeared:(bool)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setRestrictsTouchesAssertion:(id)arg1;
- (void)setSceneHostEnvironmentObserver:(id)arg1;
- (void)setScreenOn:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
