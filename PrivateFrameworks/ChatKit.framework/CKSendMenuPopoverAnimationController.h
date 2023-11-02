
@interface CKSendMenuPopoverAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    CKSendMenuPopoverPresentationConfiguration * _configuration;
    bool  _presenting;
}

@property (nonatomic, readonly) CKSendMenuPopoverPresentationControllerAnchorItem *anchorItem;
@property (nonatomic, retain) CKSendMenuPopoverPresentationConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPresenting, nonatomic) bool presenting;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)anchorItem;
- (void)animateDismissTransitionUsingContext:(id)arg1 containerView:(id)arg2 popoverViewController:(id)arg3;
- (void)animatePresentTransitionUsingContext:(id)arg1 containerView:(id)arg2 popoverViewController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (id)configuration;
- (id)initWithConfiguration:(id)arg1 presenting:(bool)arg2;
- (bool)isPresenting;
- (void)setConfiguration:(id)arg1;
- (void)setPresenting:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end
