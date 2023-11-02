
@interface ConversationKit.TapToRadarBannerViewController : UIViewController <BNPresentable> {
    void addressList;
    void bannerSource;
    void groupUUIDString;
    void isBannerPresent;
    void pillLeadingImageView;
    void pillTrailingImageView;
    void pillView;
    void pillViewSubtitle;
    void pillViewTitle;
    void requestID;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } bannerContentOutsets;
@property (nonatomic, readonly) NSString *requestIdentifier;
@property (nonatomic, readonly) NSString *requesterIdentifier;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bannerContentOutsets;
- (void)handleTap:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSizeWithPresentationSize:(struct CGSize { double x1; double x2; })arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)presentableWillAppearAsBanner:(id)arg1;
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (id)requestIdentifier;
- (id)requesterIdentifier;
- (id)viewController;
- (void)viewDidLoad;

@end
