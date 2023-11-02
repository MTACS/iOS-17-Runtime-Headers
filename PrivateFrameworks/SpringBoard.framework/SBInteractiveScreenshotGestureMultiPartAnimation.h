
@interface SBInteractiveScreenshotGestureMultiPartAnimation : NSObject {
    id /* block */  _completionHandler;
    NSMutableArray * _pendingAnimationIdentifiers;
}

- (void).cxx_destruct;
- (void)beginAnimationWithIdentifier:(id)arg1;
- (void)completeAnimationWithIdentifier:(id)arg1 finished:(bool)arg2 retargeted:(bool)arg3;
- (id)initWithCompletionHandler:(id /* block */)arg1;

@end
