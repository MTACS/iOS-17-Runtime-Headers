
@interface ConversationKit.MutedTalkerBannerViewController : UIViewController <BNPresentable, CNKMutedTalkerBannerViewControllerProtocol> {
    void bannerSource;
    void currentRequestID;
    void delegate;
    void isBannerPresent;
    void isMuted;
    void pillImageView;
    void pillView;
    void pillViewSubtitle;
    void pillViewTitle;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } bannerContentOutsets;
@property (nonatomic) <CNKMutedTalkerBannerViewControllerDelegate> *delegate;
@property (nonatomic, readonly) long long presentableBehavior;
@property (nonatomic, readonly) NSString *requestIdentifier;
@property (nonatomic, readonly) NSString *requesterIdentifier;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bannerContentOutsets;
- (id)delegate;
- (void)dismissBanner;
- (void)handleTap:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)playBannerSound;
- (struct CGSize { double x1; double x2; })preferredContentSizeWithPresentationSize:(struct CGSize { double x1; double x2; })arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
- (long long)presentableBehavior;
- (void)presentableWillAppearAsBanner:(id)arg1;
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (id)requestIdentifier;
- (id)requesterIdentifier;
- (void)setDelegate:(id)arg1;
- (void)showBanner;
- (void)updatePillViewWithIsMuted:(bool)arg1;
- (id)viewController;
- (void)viewDidLoad;

@end
