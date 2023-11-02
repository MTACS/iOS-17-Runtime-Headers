
@interface WFCompactPlatterViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate, WFBannerPresentable, WFCompactPlatterPresentation, WFCompactPlatterSizingDelegate> {
    <WFCompactAppearanceProvider> * _appearanceProvider;
    WFWorkflowRunningContext * _associatedRunningContext;
    UIViewController * _contentViewController;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumPlatterSize;
    <WFCompactPlatterContentContainer> * _platterContentContainer;
    bool  _platterHeightAnimationsDisabled;
    WFCompactPlatterView * _platterView;
    <BNPresentableContext> * _presentableContext;
    UIScrollView * _scrollView;
    WFCompactPlatterTransitioningDelegate * _wf_transitioningDelegate;
}

@property (nonatomic, retain) <WFCompactAppearanceProvider> *appearanceProvider;
@property (nonatomic, retain) WFWorkflowRunningContext *associatedRunningContext;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDraggingDismissalEnabled, nonatomic, readonly) bool draggingDismissalEnabled;
@property (getter=isDraggingInteractionEnabled, nonatomic, readonly) bool draggingInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumPlatterSize;
@property (nonatomic) <WFCompactPlatterContentContainer> *platterContentContainer;
@property (nonatomic) bool platterHeightAnimationsDisabled;
@property (nonatomic, readonly) WFCompactPlatterView *platterView;
@property (nonatomic, readonly) long long presentableBehavior;
@property (nonatomic) <BNPresentableContext> *presentableContext;
@property (nonatomic, readonly) long long presentableType;
@property (nonatomic, readonly) bool providesHostedContent;
@property (nonatomic, readonly, copy) NSString *requestIdentifier;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (getter=isTouchOutsideDismissalEnabled, nonatomic, readonly) bool touchOutsideDismissalEnabled;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, retain) WFCompactPlatterTransitioningDelegate *wf_transitioningDelegate;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)appearanceProvider;
- (id)associatedRunningContext;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bannerContentOutsets;
- (double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2;
- (id)contentViewController;
- (id)init;
- (void)invalidateContentSize;
- (void)invalidatePlatterSize;
- (void)loadView;
- (double)maximumExpectedVisibleContentHeight;
- (struct CGSize { double x1; double x2; })minimumPlatterSize;
- (id)platterContentContainer;
- (bool)platterHeightAnimationsDisabled;
- (double)platterHeightForWidth:(double)arg1 withMaximumHeight:(double)arg2;
- (id)platterView;
- (void)platterViewDidInvalidateSize:(id)arg1;
- (id)presentableContext;
- (bool)providesHostedContent;
- (id)requestIdentifier;
- (id)requesterIdentifier;
- (void)scrollToTopAnimated:(bool)arg1;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAppearanceProvider:(id)arg1;
- (void)setAssociatedRunningContext:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setMinimumPlatterSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPlatterContentContainer:(id)arg1;
- (void)setPlatterHeightAnimationsDisabled:(bool)arg1;
- (void)setPresentableContext:(id)arg1;
- (void)setTransitioningDelegate:(id)arg1;
- (void)setWf_transitioningDelegate:(id)arg1;
- (bool)shouldHideSashView;
- (void)systemDismissedBanner;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)updateContentSizeAndPlatterPosition;
- (void)updatePlatterPosition;
- (void)updateScrollViewSeparators;
- (id)viewController;
- (void)viewDidLayoutSubviews;
- (id)wf_transitioningDelegate;

@end
