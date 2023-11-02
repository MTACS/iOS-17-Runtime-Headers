
@interface SeymourUI.AVDismissalBehavior : AVSeymourBehavior {
    void delegate;
    void seymourBehaviorContext;
}

- (void).cxx_destruct;
- (id)init;
- (void)seymourBehaviorContext:(id)arg1 didRecieveDoneButtonTapWithDismissalBlock:(id /* block */)arg2;
- (void)willMoveToContext:(id)arg1;

@end
