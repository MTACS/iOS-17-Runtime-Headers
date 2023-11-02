
@interface CLRunLoopSilo : CLSilo {
    CLRunLoopSiloThread * _siloThread;
    bool  _useCLPermissiveTimer;
}

- (void).cxx_destruct;
- (void)afterInterval:(double)arg1 async:(id /* block */)arg2;
- (void)assertInside;
- (void)assertOutside;
- (void)async:(id /* block */)arg1;
- (double)currentLatchedAbsoluteTimestamp;
- (id)debugDescription;
- (id)getTimeCoercibleVariantInstance;
- (void)heartBeat:(id)arg1;
- (bool)inPermissiveMode;
- (id)initWithCurrentRunLoopAndIdentifier:(id)arg1;
- (id)initWithCurrentRunLoopAndIdentifier:(id)arg1 bePermissive:(bool)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithUnderlyingRunLoop:(struct __CFRunLoop { }*)arg1;
- (bool)isSuspended;
- (id)newTimer;
- (void)resume;
- (id)runloop;
- (void)suspend;
- (void)sync:(id /* block */)arg1;

@end
