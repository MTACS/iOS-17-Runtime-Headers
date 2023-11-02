
@interface SUIdleTracker : NSObject {
    void lock;
    void name;
    void queue;
    void refs;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timeout;
    void timeoutAction;
    void timer;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) bool idle;

- (void).cxx_destruct;
- (long long)count;
- (bool)idle;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 queue:(id)arg2 timeoutSeconds:(long long)arg3 timeoutAction:(id /* block */)arg4;
- (id)track;
- (id)trackWithName:(id)arg1;

@end
