
@interface IMDelayedInvocationTrampoline : IMInvocationTrampoline {
    double  _delay;
    NSArray * _modes;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 delay:(double)arg2 modes:(id)arg3;

@end
