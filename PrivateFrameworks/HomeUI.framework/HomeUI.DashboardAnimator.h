
@interface HomeUI.DashboardAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    void blurView;
    void style;
    void targetCollectionViewFrame;
    void targetCollectionViewLayout;
    void targetContentInset;
    void targetNavigationBarAppearance;
}

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)init;
- (double)transitionDuration:(id)arg1;

@end
