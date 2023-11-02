
@interface _SiriUINavigationControllerDelegateAdapter : NSObject <UINavigationControllerDelegate> {
    <UINavigationControllerDelegate> * _externalDelegate;
    <SiriUINavigationTransitioning> * _transitionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <UINavigationControllerDelegate> *externalDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SiriUINavigationTransitioning> *transitionController;

- (void).cxx_destruct;
- (id)externalDelegate;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)setExternalDelegate:(id)arg1;
- (void)setTransitionController:(id)arg1;
- (id)transitionController;

@end
