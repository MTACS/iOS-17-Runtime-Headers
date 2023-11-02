
@interface SBProductivityGestureEducationPillViewController : UIViewController <BNPresentable> {
    <SBProductivityGestureEducationPillViewControllerDelegate> * _delegate;
    SBProductivityGestureEducationItem * _item;
    PLPillView * _pillView;
}

@property (nonatomic, readonly, copy) NSURL *actionURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBProductivityGestureEducationPillViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDraggingDismissalEnabled, nonatomic, readonly) bool draggingDismissalEnabled;
@property (getter=isDraggingInteractionEnabled, nonatomic, readonly) bool draggingInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) SBProductivityGestureEducationItem *item;
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
- (void)_marqueeStarted:(id)arg1;
- (id)_pillActionContentItem;
- (id)_pillLeadingImageView;
- (id)_pillTitleContentItem;
- (id)_titleForItemType:(long long)arg1;
- (id)_titleKeyForEducationType:(long long)arg1;
- (id)_titleString;
- (id)actionURL;
- (id)delegate;
- (id)initWithItem:(id)arg1;
- (id)item;
- (long long)presentableBehavior;
- (id)presentableDescription;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)presentableWillAppearAsBanner:(id)arg1;
- (void)presentableWillNotAppearAsBanner:(id)arg1 withReason:(id)arg2;
- (id)requestIdentifier;
- (id)requesterIdentifier;
- (void)setDelegate:(id)arg1;
- (id)viewController;
- (void)viewDidLoad;

@end
