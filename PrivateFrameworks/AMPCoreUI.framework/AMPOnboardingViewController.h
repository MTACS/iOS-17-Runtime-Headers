
@interface AMPOnboardingViewController : UIViewController <UIScrollViewDelegate> {
    _UIBackdropView * _backdropView;
    NSString * _descriptionText;
    UIImage * _image;
    NSObject<OS_dispatch_queue> * _metricsQueue;
    AMSUIOnboardingViewController * _onboardingController;
    id /* block */  _primaryButtonCallback;
    NSString * _primaryButtonText;
    OBPrivacyLinkController * _privacyLinkController;
    UIVisualEffectView * _statusBarVisualEffectView;
    NSString * _titleText;
    bool  _viewHasAppeared;
}

@property (nonatomic, retain) _UIBackdropView *backdropView;
@property (nonatomic, readonly) UITraitCollection *cappedTraitCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *descriptionText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *headerImage;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) bool isPresentedInFormSheet;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *metricsQueue;
@property (nonatomic, retain) AMSUIOnboardingViewController *onboardingController;
@property (nonatomic, copy) id /* block */ primaryButtonCallback;
@property (nonatomic, retain) NSString *primaryButtonText;
@property (nonatomic, readonly) OBPrivacyLinkController *privacyLinkController;
@property (nonatomic, retain) UIVisualEffectView *statusBarVisualEffectView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *titleText;
@property (nonatomic) bool viewHasAppeared;

- (void).cxx_destruct;
- (id)backdropView;
- (id)cappedTraitCollection;
- (id)childTraitCollectionForViewController:(id)arg1;
- (id)descriptionText;
- (void)didTapPrimaryButton:(id)arg1;
- (id)headerImage;
- (id)image;
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkController:(id)arg5;
- (id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkController:(id)arg4;
- (bool)isModalInPresentation;
- (bool)isPresentedInFormSheet;
- (id)metricsQueue;
- (id)onboardingController;
- (id /* block */)primaryButtonCallback;
- (id)primaryButtonText;
- (id)privacyLinkController;
- (void)setBackdropView:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setMetricsQueue:(id)arg1;
- (void)setOnboardingController:(id)arg1;
- (void)setPrimaryButtonCallback:(id /* block */)arg1;
- (void)setPrimaryButtonText:(id)arg1;
- (void)setStatusBarVisualEffectView:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setViewHasAppeared:(bool)arg1;
- (id)statusBarVisualEffectView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)titleText;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateOverrideTraits;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (bool)viewHasAppeared;
- (void)viewWillAppear:(bool)arg1;

@end
