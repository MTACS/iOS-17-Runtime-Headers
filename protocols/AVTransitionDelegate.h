
@protocol AVTransitionDelegate <NSObject>

@required

- (UIColor *)transitionBackgroundViewBackgroundColor:(AVTransition *)arg1;
- (UIColor *)transitionPresentedViewBackgroundColor:(AVTransition *)arg1;
- (void)transitionWillComplete:(void *)arg1 success:(void *)arg2 continueBlock:(void *)arg3; // needs 3 arg types, found 8: AVTransition *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
