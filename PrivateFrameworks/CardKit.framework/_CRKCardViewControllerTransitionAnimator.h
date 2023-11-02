
@interface _CRKCardViewControllerTransitionAnimator : NSObject {
    <_CRKCardViewControllerTransitionAnimatorDelegate> * _delegate;
}

@property (nonatomic) <_CRKCardViewControllerTransitionAnimatorDelegate> *delegate;

+ (id)sectionShuffleTransitionAnimator;

- (void).cxx_destruct;
- (void)_prepareAnimationFromCardViewController:(id)arg1 toCardViewController:(id)arg2 withAnimationCoordinator:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)transitionFromCardViewController:(id)arg1 toCardViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;

@end
