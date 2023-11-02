
@interface CPSBannerViewController : UIViewController <BNPresentable> {
    CPSBannerItem * _bannerItem;
    CPSGuidanceBannerView * _bannerView;
    <CPSBannerViewControllerDelegate> * _delegate;
    PLPlatterView * _platterView;
    NSString * _requestIdentifier;
}

@property (nonatomic, readonly) CPSBannerItem *bannerItem;
@property (nonatomic, retain) CPSGuidanceBannerView *bannerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPSBannerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDraggingDismissalEnabled, nonatomic, readonly) bool draggingDismissalEnabled;
@property (getter=isDraggingInteractionEnabled, nonatomic, readonly) bool draggingInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PLPlatterView *platterView;
@property (nonatomic, readonly) long long presentableBehavior;
@property (nonatomic) <BNPresentableContext> *presentableContext;
@property (nonatomic, readonly) long long presentableType;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (getter=isTouchOutsideDismissalEnabled, nonatomic, readonly) bool touchOutsideDismissalEnabled;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_bannerTapped:(id)arg1;
- (void)_handleBackGesture:(id)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (id)bannerItem;
- (id)bannerView;
- (id)delegate;
- (id)initWithBannerItem:(id)arg1;
- (bool)isTouchOutsideDismissalEnabled;
- (id)platterView;
- (struct CGSize { double x1; double x2; })preferredContentSizeWithPresentationSize:(struct CGSize { double x1; double x2; })arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)presentableDidAppearAsBanner:(id)arg1;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (id)requestIdentifier;
- (id)requesterIdentifier;
- (void)setBannerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlatterView:(id)arg1;
- (void)updateBannerWithBannerItem:(id)arg1;
- (id)viewController;
- (void)viewDidLoad;

@end
