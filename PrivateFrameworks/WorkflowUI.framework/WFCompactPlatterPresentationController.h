
@interface WFCompactPlatterPresentationController : UIPresentationController <WFCompactPlatterContentContainer> {
    <UIViewControllerTransitionCoordinator> * _activeTransitionCoordinator;
    long long  _transitionState;
}

@property (nonatomic) <UIViewControllerTransitionCoordinator> *activeTransitionCoordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController<WFCompactPlatterPresentation> *presentedViewController;
@property (readonly) Class superclass;
@property (nonatomic) long long transitionState;

+ (struct CGSize { double x1; double x2; })preferredSizeForPresentingInContainerViewOfSize:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentedViewFrameInContainerView:(id)arg1 containerViewSize:(struct CGSize { double x1; double x2; })arg2 withSizeCalculation:(bool)arg3 ofPresentedPlatter:(id)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })usableFrameForPresentingInContainerViewOfSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (bool)_containerIgnoresDirectTouchEvents;
- (bool)_shouldDisableInteractionDuringTransitions;
- (id)activeTransitionCoordinator;
- (void)dealloc;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfDismissedViewInContainerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)keyboardWillChange;
- (double)maximumExpectedHeightForPlatterPresentation:(id)arg1;
- (void)platterPresentationDidInvalidateSize:(id)arg1;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentedViewFrameInContainerViewOfSize:(struct CGSize { double x1; double x2; })arg1 withSizeCalculation:(bool)arg2;
- (void)setActiveTransitionCoordinator:(id)arg1;
- (void)setTransitionState:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (long long)transitionState;
- (void)updatePresentedViewFrameAnimatedAlongsideKeyboard:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
