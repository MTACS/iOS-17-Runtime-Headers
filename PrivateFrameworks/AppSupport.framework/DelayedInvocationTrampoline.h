
@interface DelayedInvocationTrampoline : InvocationTrampoline {
    double  _delay;
}

- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 delay:(double)arg2;

@end
