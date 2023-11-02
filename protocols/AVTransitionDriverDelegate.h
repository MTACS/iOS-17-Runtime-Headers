
@protocol AVTransitionDriverDelegate <NSObject>

@required

- (void)transitionDriver:(void *)arg1 didBeginTrackingTransitionInteraction:(void *)arg2 readyToProceedHandler:(void *)arg3; // needs 3 arg types, found 7: <AVTransitionDriver> *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)transitionDriver:(id <AVTransitionDriver>)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldReceiveTouch:(UITouch *)arg3;
- (bool)transitionDriver:(id <AVTransitionDriver>)arg1 shouldDriveTransitionInteractionOfType:(long long)arg2;
- (void)transitionDriverDidCancelInteraction:(id <AVTransitionDriver>)arg1;
- (void)transitionDriverDidContinueInteraction:(id <AVTransitionDriver>)arg1;
- (void)transitionDriverDidFinishInteraction:(id <AVTransitionDriver>)arg1;

@end
