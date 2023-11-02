
@interface SBSystemGestureWorkspaceTransaction : SBMainWorkspaceTransaction {
    long long  _completionType;
    UIGestureRecognizer * _gestureRecognizer;
    NSString * _suppressionReason;
}

@property (nonatomic, readonly) long long completionType;
@property (nonatomic, retain) UIGestureRecognizer *gestureRecognizer;

- (void).cxx_destruct;
- (void)_begin;
- (void)_beginAnimation;
- (void)_didComplete;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)_setupAnimation;
- (long long)completionType;
- (void)finishWithCompletionType:(long long)arg1;
- (id)gestureRecognizer;
- (id)initWithTransitionRequest:(id)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (bool)shouldSuppressMedusaKeyboardDuringGesture;
- (void)systemGestureStateChanged:(id)arg1;

@end
