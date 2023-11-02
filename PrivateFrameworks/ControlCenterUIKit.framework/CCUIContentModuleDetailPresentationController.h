
@interface CCUIContentModuleDetailPresentationController : UIPresentationController <UIGestureRecognizerDelegate> {
    UIViewController * _anchoringViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleBackgroundTap:(id)arg1;
- (double)_preferredExpandedContentHeightForViewController:(id)arg1;
- (double)_preferredExpandedContentWidthForViewController:(id)arg1;
- (bool)_shouldRespectDefinesPresentationContext;
- (void)containerViewWillLayoutSubviews;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 anchoringViewController:(id)arg3;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionWillBegin;
- (bool)shouldPresentInFullscreen;

@end
