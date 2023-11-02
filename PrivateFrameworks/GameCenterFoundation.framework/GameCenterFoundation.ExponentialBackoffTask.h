
@interface GameCenterFoundation.ExponentialBackoffTask : NSObject {
    void delay;
    void delegate;
    void initialDelay;
    void maxDelay;
    void maxRetryCount;
    void name;
    void queue;
    void retryCount;
    void state;
    void timer;
}

@property (nonatomic) <_TtP20GameCenterFoundation30ExponentialBackoffTaskDelegate_> *delegate;

- (void).cxx_destruct;
- (void)cancel;
- (id)delegate;
- (id)init;
- (id)initWithName:(id)arg1 queue:(id)arg2 initialDelay:(double)arg3 maxDelay:(double)arg4 maxRetryCount:(long long)arg5;
- (void)setDelegate:(id)arg1;
- (void)startWithTask:(id /* block */)arg1 successCondition:(id /* block */)arg2;

@end
