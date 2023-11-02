
@interface AMUIPosterSwitcherViewController : UIViewController <AMUIAmbientViewControlling, AMUIPosterCategoryViewControllerDelegate, AMUISwitcherDataSource, AMUISwitcherDelegate, AMUISwitcherLayout> {
    NSArray * _configurations;
    <AMUIDateProviding> * _dateProvider;
    <AMUIPosterSwitcherViewControllerDelegate> * _delegate;
    AMUISwitcherViewController * _extensionSwitcherViewController;
    NSArray * _items;
    AMUICountingSentinel * _lazy_unsettledSentinel;
    AMUIPosterSwitcherSettings * _settings;
    <BSInvalidatable> * _unsettledAssertion;
}

@property (nonatomic, readonly) NSDictionary *activeConfigurationMetadata;
@property (nonatomic, readonly) UIView *backgroundView;
@property (getter=isCircular, nonatomic, readonly) bool circular;
@property (nonatomic, copy) NSArray *configurations;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, retain) <AMUIDateProviding> *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMUIPosterSwitcherViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRSPosterConfiguration *mostVisibleConfiguration;
@property (nonatomic, readonly) double spacing;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long switcherAxis;
@property (getter=isSwitchingEnabled, nonatomic) bool switchingEnabled;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_switcherItemForConfiguration:(id)arg1;
- (id)_unsettledSentinel;
- (id)activeConfigurationMetadata;
- (id)ambientDefaultsForViewController:(id)arg1;
- (id)backgroundView;
- (id)configurations;
- (id)contentView;
- (id)createUnlockRequestForViewController:(id)arg1;
- (id)dateProvider;
- (void)dealloc;
- (id)defaultWidgetDescriptorStacksForViewController:(id)arg1;
- (id)delegate;
- (bool)handleDismiss;
- (void)invalidate;
- (bool)isCircular;
- (bool)isSwitchingEnabled;
- (id)mostVisibleConfiguration;
- (void)noteAmbientViewControllingDelegateDidUpdate;
- (void)posterCategoryViewController:(id)arg1 didSetInlineAuthenticationViewVisible:(bool)arg2;
- (void)posterCategoryViewController:(id)arg1 didSetPasscodeVisible:(bool)arg2;
- (void)posterCategoryViewController:(id)arg1 didSettleOnConfiguration:(id)arg2 interactive:(bool)arg3;
- (id)posterCategoryViewControllerAuthenticationHandler:(id)arg1;
- (void)posterCategoryViewControllerDidSuccessfulyCompleteInlineAuthentication:(id)arg1;
- (bool)posterCategoryViewControllerHasInlineAuthenticated:(id)arg1;
- (bool)posterCategoryViewControllerIsAuthenticated:(id)arg1;
- (void)requestUnlockForViewController:(id)arg1 withRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)setConfigurations:(id)arg1;
- (void)setDateProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSwitchingEnabled:(bool)arg1;
- (double)spacing;
- (void)switcher:(id)arg1 didSettleOnItem:(id)arg2 interactive:(bool)arg3;
- (id)switcher:(id)arg1 itemAtIndex:(long long)arg2;
- (void)switcher:(id)arg1 transitionDidBegin:(id)arg2;
- (void)switcher:(id)arg1 transitionDidEnd:(id)arg2;
- (void)switcher:(id)arg1 transitioningFromItem:(id)arg2 toItem:(id)arg3 progress:(double)arg4;
- (void)switcher:(id)arg1 updateItem:(id)arg2 view:(id)arg3 forPresentationProgress:(double)arg4;
- (long long)switcherAxis;
- (long long)switcherNumberOfItems:(id)arg1;
- (bool)updatePosterConfiguration:(id)arg1 withAnimationSettings:(id)arg2;
- (void)viewController:(id)arg1 didUpdateActiveConfigurationMetadata:(id)arg2;
- (void)viewControllerWillBeginConfiguration:(id)arg1;
- (void)viewControllerWillBeginShowingTemporaryOverlay:(id)arg1;
- (void)viewControllerWillEndConfiguration:(id)arg1;
- (void)viewControllerWillEndShowingTemporaryOverlay:(id)arg1;
- (void)viewDidLoad;
- (id)widgetHostManagerForViewController:(id)arg1;

@end
