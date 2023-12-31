
@interface _UISearchControllerAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)animateTransition:(id)arg1;
- (bool)collapesKeyboardWhenNotFocused;
- (void)didFocusSearchBarForController:(id)arg1;
- (void)didRelayoutSearchBarForController:(id)arg1;
- (void)didUnfocusSearchBarForController:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)willFocusOffscreenViewForController:(id)arg1 withHeading:(unsigned long long)arg2;

@end
