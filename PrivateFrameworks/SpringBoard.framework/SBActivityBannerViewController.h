
@interface SBActivityBannerViewController : SBActivityViewController <ACUISActivityHostViewControllerDelegate, BNPresentable> {
    UIView * _backgroundTintView;
    <SBActivityBannerViewControllerDelegate> * _bannerDelegate;
    PLPlatterView * _platterView;
}

@property (nonatomic, readonly) UIView *backgroundTintView;
@property (nonatomic) <SBActivityBannerViewControllerDelegate> *bannerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDraggingDismissalEnabled, nonatomic, readonly) bool draggingDismissalEnabled;
@property (getter=isDraggingInteractionEnabled, nonatomic, readonly) bool draggingInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PLPlatterView *platterView;
@property (nonatomic, readonly) long long presentableBehavior;
@property (nonatomic) <BNPresentableContext> *presentableContext;
@property (nonatomic, readonly) long long presentableType;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (getter=isTouchOutsideDismissalEnabled, nonatomic, readonly) bool touchOutsideDismissalEnabled;
@property (nonatomic, readonly) UIViewController *viewController;

+ (id)requesterIdentifier;

- (void).cxx_destruct;
- (id)_activityIdentifier;
- (bool)_hasBackgroundTintColor;
- (void)_layoutSubviews;
- (bool)_shouldHaveBackgroundTint;
- (bool)_shouldSetBlackBackground;
- (void)activityHostViewControllerBackgroundTintColorDidChange:(id)arg1;
- (id)backgroundTintView;
- (id)bannerDelegate;
- (bool)isDraggingDismissalEnabled;
- (bool)isDraggingInteractionEnabled;
- (id)platterView;
- (struct CGSize { double x1; double x2; })preferredContentSizeWithPresentationSize:(struct CGSize { double x1; double x2; })arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (id)requestIdentifier;
- (id)requesterIdentifier;
- (void)setBannerDelegate:(id)arg1;
- (id)viewController;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
