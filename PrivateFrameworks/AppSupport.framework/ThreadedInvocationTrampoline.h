
@interface ThreadedInvocationTrampoline : InvocationTrampoline {
    bool  _immediateForMatchingThread;
    NSThread * _thread;
}

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(bool)arg3;

@end
