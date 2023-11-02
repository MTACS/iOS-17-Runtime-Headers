
@interface AMUIDataLayerViewController : UIViewController <AMUIAmbientViewControlling, AMUIInfographViewControllerDelegate, AMUIOpacityAdjusting> {
    long long  _chromeOrientationPolicy;
    UIViewController<AMUIAmbientViewControlling> * _concreteDataLayerViewController;
    <AMUIDateProviding> * _dateProvider;
    <AMUIDataLayerViewControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) NSDictionary *activeConfigurationMetadata;
@property (nonatomic) long long chromeOrientationPolicy;
@property (nonatomic, readonly) long long currentDataLayout;
@property (nonatomic, retain) <AMUIDateProviding> *dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMUIDataLayerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *viewForOpacityAdjustment;

+ (Class)_dataLayerClassForConfiguration:(id)arg1;
+ (long long)_dataLayoutForDataLayerClass:(Class)arg1;
+ (long long)dataLayoutForConfiguration:(id)arg1;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_registerForAmbientPresentationTraitChanges;
- (id)activeConfigurationMetadata;
- (id)ambientDefaultsForViewController:(id)arg1;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (long long)chromeOrientationPolicy;
- (id)createUnlockRequestForViewController:(id)arg1;
- (long long)currentDataLayout;
- (id)dateProvider;
- (id)defaultWidgetDescriptorStacksForViewController:(id)arg1;
- (id)delegate;
- (bool)handleDismiss;
- (void)invalidate;
- (void)loadView;
- (void)noteAmbientViewControllingDelegateDidUpdate;
- (void)requestUnlockForViewController:(id)arg1 withRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)setChromeOrientationPolicy:(long long)arg1;
- (void)setChromeVisibility:(bool)arg1 withAnimationSettings:(id)arg2 animationFence:(id)arg3;
- (void)setDateProvider:(id)arg1;
- (void)setDateTimeLayerHidden:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (bool)updatePosterConfiguration:(id)arg1 withAnimationSettings:(id)arg2;
- (void)viewController:(id)arg1 didUpdateActiveConfigurationMetadata:(id)arg2;
- (void)viewControllerWillBeginConfiguration:(id)arg1;
- (void)viewControllerWillBeginShowingTemporaryOverlay:(id)arg1;
- (void)viewControllerWillEndConfiguration:(id)arg1;
- (void)viewControllerWillEndShowingTemporaryOverlay:(id)arg1;
- (void)viewDidLoad;
- (id)viewForOpacityAdjustment;
- (id)widgetHostManagerForViewController:(id)arg1;

@end
