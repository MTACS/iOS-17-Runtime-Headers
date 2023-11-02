
@interface TeaUI.SwipeActionAnimationDelegate : NSObject <CAAnimationDelegate> {
    void completion;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  swipeState;
}

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)init;

@end
