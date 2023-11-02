
@interface VUIConfirmationAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning> {
    <VUIConfirmationAnimatedTransitioningDelegate> * _delegate;
    bool  _presenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIConfirmationAnimatedTransitioningDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPresenting, nonatomic, readonly) bool presenting;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (id)delegate;
- (id)init;
- (id)initWithPresenting:(bool)arg1;
- (bool)isPresenting;
- (void)setDelegate:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end
