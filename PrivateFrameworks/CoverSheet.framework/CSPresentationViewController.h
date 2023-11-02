
@interface CSPresentationViewController : CSCoverSheetViewControllerBase <BSDescriptionProviding> {
    NSArray * _activeContentViewControllers;
    NSMutableArray * _contentViewControllers;
    unsigned long long  _mutatingPresentation;
    <CSPresentationViewControllerDelegate> * _presentationDelegate;
    unsigned long long  _transitioning;
}

@property (nonatomic, readonly, copy) NSArray *contentViewControllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=hasContent, nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CSPresentationViewControllerDelegate> *presentationDelegate;
@property (nonatomic, readonly, copy) NSArray *presentedViewControllers;
@property (getter=isPresentingContent, nonatomic, readonly) bool presentingContent;
@property (readonly) Class superclass;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;

- (void).cxx_destruct;
- (void)_didTransitionViewController:(id)arg1 toPresented:(bool)arg2;
- (void)_reflowPresentationWithAnimationSettings:(id)arg1;
- (void)_updateContentViewControllersAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_updatePresentationForViewController:(id)arg1 presentation:(id)arg2 animationSettings:(id)arg3;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregatePresentation:(id)arg1;
- (id)contentViewControllers;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)dismissContentViewController:(id)arg1 animated:(bool)arg2;
- (void)dismissContentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)dismissContentViewControllers:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)dismissPresentationAnimated:(bool)arg1;
- (void)dismissPresentationAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)handleAppearanceUpdateFromController:(id)arg1 animationSettings:(inout id*)arg2;
- (bool)handleEvent:(id)arg1;
- (bool)hasContent;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isPresentingContent;
- (bool)isTransitioning;
- (long long)participantState;
- (void)presentContentViewController:(id)arg1 animated:(bool)arg2;
- (void)presentContentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentContentViewControllers:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentationDelegate;
- (id)presentedViewControllers;
- (void)rebuildEverythingForReason:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updatePresentationAnimated:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
