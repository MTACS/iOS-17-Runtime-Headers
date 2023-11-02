
@interface PRXTransitioningController : NSObject <UIViewControllerTransitioningDelegate> {
    <PRXPullDismissalProvider> * _pullDismissalProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PRXPullDismissalProvider> *pullDismissalProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)initWithPullDismissalProvider:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)pullDismissalProvider;

@end
