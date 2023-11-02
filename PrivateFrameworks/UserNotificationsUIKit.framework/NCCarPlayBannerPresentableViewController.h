
@interface NCCarPlayBannerPresentableViewController : UIViewController <BNPresentable, BNPresentableObservable, NCCarPlayBannerContentViewDelegate> {
    NCCarPlayBannerContentView * _bannerContentView;
    UITapGestureRecognizer * _contentSelectPressGesture;
    <NCCarPlayBannerPresentableViewControllerDelegate> * _delegate;
    bool  _fillsContainer;
    NCNotificationRequest * _notificationRequest;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCCarPlayBannerPresentableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDraggingDismissalEnabled, nonatomic, readonly) bool draggingDismissalEnabled;
@property (getter=isDraggingInteractionEnabled, nonatomic, readonly) bool draggingInteractionEnabled;
@property (nonatomic) bool fillsContainer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NCNotificationRequest *notificationRequest;
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
- (void)_handleBackGesture:(id)arg1;
- (void)_handleSwipeGesture:(id)arg1;
- (void)_handleTapOnContent:(id)arg1;
- (void)_notifyObserversWithBlock:(id /* block */)arg1;
- (id)_platterView;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)addPresentableObserver:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bannerContentOutsets;
- (bool)bannerContentViewShouldShowOKButton:(id)arg1;
- (bool)bn_shouldAnimateViewTransitionToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)delegate;
- (id)description;
- (bool)fillsContainer;
- (id)initWithNotificationRequest:(id)arg1;
- (void)invalidateDisplayProperties;
- (void)loadView;
- (id)notificationRequest;
- (struct CGSize { double x1; double x2; })preferredContentSizeWithPresentationSize:(struct CGSize { double x1; double x2; })arg1 containerSize:(struct CGSize { double x1; double x2; })arg2;
- (id)presentableDescription;
- (void)presentableDidAppearAsBanner:(id)arg1;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)presentableWillAppearAsBanner:(id)arg1;
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (void)removePresentableObserver:(id)arg1;
- (id)requestIdentifier;
- (id)requesterIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setFillsContainer:(bool)arg1;
- (void)updateRequestToInstance:(id)arg1;
- (void)userInteractionDidEndForBannerForPresentable:(id)arg1;
- (void)userInteractionWillBeginForBannerForPresentable:(id)arg1;
- (id)viewController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
