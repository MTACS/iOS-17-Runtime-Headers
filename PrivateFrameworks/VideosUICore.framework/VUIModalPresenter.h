
@interface VUIModalPresenter : NSObject {
    NSHashTable * __presentationControllers;
    _UIProgressiveBlurPresentationAnimator * _dismissingAnimator;
    _UIProgressiveBlurPresentationAnimator * _presentingAnimator;
}

@property (nonatomic, readonly, copy) NSArray *presentedViewControllers;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_presentationControllers;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)presentedViewControllers;

@end
