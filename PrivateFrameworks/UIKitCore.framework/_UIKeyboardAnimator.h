
@interface _UIKeyboardAnimator : NSObject {
    _UIKeyboardAnimatorAnimationStyle * _style;
}

- (void).cxx_destruct;
- (void)applyToKeyboardOperations:(id /* block */)arg1;
- (void)completeAnimationWithState:(id)arg1;
- (id)init;
- (void)performAnimation:(id /* block */)arg1 afterStarted:(id /* block */)arg2 onCompletion:(id /* block */)arg3;
- (void)prepareForAnimationWithState:(id)arg1;
- (void)runAnimationWithState:(id)arg1;

@end
