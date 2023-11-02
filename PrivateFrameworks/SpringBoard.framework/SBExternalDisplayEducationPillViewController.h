
@interface SBExternalDisplayEducationPillViewController : UIViewController <BNPresentable> {
    <SBExternalDisplayEducationPillViewControllerDelegate> * _delegate;
    bool  _extendedDisplayEnabled;
    PLPillView * _pillView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBExternalDisplayEducationPillViewControllerDelegate> *delegate;
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
- (void)_handleSingleTap:(id)arg1;
- (id)_pillSubtitleContentItem;
- (id)delegate;
- (id)initWithExtendedDisplayEnabled:(bool)arg1;
- (long long)presentableBehavior;
- (id)presentableDescription;
- (id)requestIdentifier;
- (id)requesterIdentifier;
- (void)setDelegate:(id)arg1;
- (id)viewController;
- (void)viewDidLoad;

@end
