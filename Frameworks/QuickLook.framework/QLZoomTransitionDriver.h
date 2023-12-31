
@interface QLZoomTransitionDriver : QLTransitionDriver {
    UIView * _uncroppedView;
}

+ (void)cropView:(id)arg1 toAvoidNavigationOffset:(double)arg2 presenting:(bool)arg3 animationDuration:(double)arg4;

- (void).cxx_destruct;
- (void)_performZoomTransition;
- (void)animateTransition;
- (void)tearDown;

@end
