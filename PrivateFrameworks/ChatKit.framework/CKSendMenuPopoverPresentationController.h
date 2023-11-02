
@interface CKSendMenuPopoverPresentationController : UIPresentationController <CKSendMenuPopoverPresentationDimmingViewDelegate> {
    CKSendMenuPopoverPresentationConfiguration * _configuration;
    CKSendMenuPopoverPresentationDimmingView * _dimmingView;
    UITapGestureRecognizer * _dismissGestureRecognizer;
    CKPopoverViewLayout * _popoverLayout;
    long long  _presentationState;
}

@property (nonatomic, retain) CKSendMenuPopoverPresentationControllerAnchorItem *anchorItem;
@property (nonatomic, retain) CKSendMenuPopoverPresentationConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKSendMenuPopoverPresentationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKSendMenuPopoverPresentationDimmingView *dimmingView;
@property (nonatomic, retain) UITapGestureRecognizer *dismissGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKPopoverViewLayout *popoverLayout;
@property (nonatomic, readonly) CKSendMenuPresentationPopoverView *popoverView;
@property (nonatomic, readonly) CKSendMenuPopoverViewController *popoverViewController;
@property (nonatomic) long long presentationState;
@property (getter=isPresenting, readonly) bool presenting;
@property (nonatomic, retain) UIViewController *sendMenuViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_anchorViewCenterInContainer;
- (void)_informDelegateAboutCurrentPopoverLayoutWithPreviousMetrics:(id)arg1;
- (id)anchorItem;
- (void)anchorViewDidMove;
- (id)configuration;
- (void)containerViewWillLayoutSubviews;
- (id)delegate;
- (id)dimmingView;
- (id)dismissGestureRecognizer;
- (void)dismissalTransitionDidEnd:(bool)arg1;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithConfiguration:(id)arg1 popoverViewController:(id)arg2 presentingViewController:(id)arg3;
- (bool)isPresenting;
- (id)newPopoverLayoutMetrics;
- (id)popoverLayout;
- (id)popoverView;
- (id)popoverViewController;
- (void)presentCardWithContentViewController:(id)arg1 style:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (long long)presentationState;
- (void)presentationTransitionDidEnd:(bool)arg1;
- (void)presentationTransitionWillBegin;
- (id)presentedView;
- (void)sendMenuPopoverPresentationDimmingViewDidReceiveTap:(id)arg1;
- (id)sendMenuViewController;
- (void)setAnchorItem:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setDismissGestureRecognizer:(id)arg1;
- (void)setPopoverLayout:(id)arg1;
- (void)setPresentationState:(long long)arg1;
- (void)setSendMenuViewController:(id)arg1;
- (bool)shouldPresentInFullscreen;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
