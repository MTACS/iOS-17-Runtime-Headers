
@interface PKPaymentAuthorizationPresentationTarget : NSObject {
    id /* block */  _presentationCompletion;
    UIViewController * _presentingViewController;
    bool  _shouldAnimatePresentation;
    UIViewController * _viewControllerToPresent;
}

@property (nonatomic, copy) id /* block */ presentationCompletion;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic) bool shouldAnimatePresentation;
@property (nonatomic, retain) UIViewController *viewControllerToPresent;

- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)presentPendingViewControllerIfNecessary;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id /* block */)presentationCompletion;
- (id)presentingViewController;
- (void)setPresentationCompletion:(id /* block */)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setShouldAnimatePresentation:(bool)arg1;
- (void)setViewControllerToPresent:(id)arg1;
- (bool)shouldAnimatePresentation;
- (id)viewControllerToPresent;

@end
