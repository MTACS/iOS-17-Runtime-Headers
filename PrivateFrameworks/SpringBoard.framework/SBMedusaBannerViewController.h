
@interface SBMedusaBannerViewController : UIViewController <BNPresentable> {
    long long  _orientation;
    long long  _peekConfiguration;
    PLPillView * _pillView;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDraggingDismissalEnabled, nonatomic, readonly) bool draggingDismissalEnabled;
@property (getter=isDraggingInteractionEnabled, nonatomic, readonly) bool draggingInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long presentableBehavior;
@property (nonatomic) <BNPresentableContext> *presentableContext;
@property (nonatomic, readonly) long long presentableType;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (getter=isTouchOutsideDismissalEnabled, nonatomic, readonly) bool touchOutsideDismissalEnabled;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)_bannerView;
- (id)initWithType:(long long)arg1 orientation:(long long)arg2 peekConfiguration:(long long)arg3;
- (id)requestIdentifier;
- (id)requesterIdentifier;
- (id)viewController;
- (void)viewDidLoad;

@end
