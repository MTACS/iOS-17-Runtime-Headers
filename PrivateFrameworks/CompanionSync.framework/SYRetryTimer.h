
@interface SYRetryTimer : NSObject {
    double  _backoffFactor;
    double  _interval;
    int  _maxRetries;
    int  _numRetries;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)cancel;
- (bool)incrementBackoff;
- (id)initWithInterval:(double)arg1 backoffFactor:(double)arg2 maxRetries:(int)arg3 queue:(id)arg4 callout:(id /* block */)arg5;

@end
