
@interface CKAppMenuPresentationController : UIPresentationController <UIGestureRecognizerDelegate> {
    UITapGestureRecognizer * _tapRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapRecognizer;

- (void).cxx_destruct;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceView:(id)arg3;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)setTapRecognizer:(id)arg1;
- (void)tapOutsideMenu;
- (id)tapRecognizer;

@end
