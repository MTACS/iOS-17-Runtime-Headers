
@interface SKRemoteDismissingTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    UIViewController<SKRemoteDismissingViewController> * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) UIViewController<SKRemoteDismissingViewController> *viewController;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)dismissRemoteViewController:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (void)setViewController:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)viewController;

@end
