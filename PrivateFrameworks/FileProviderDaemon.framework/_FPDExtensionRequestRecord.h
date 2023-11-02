
@interface _FPDExtensionRequestRecord : NSObject {
    NSObservation * _fractionCompletedObservation;
    id /* block */  _handler;
    NSDate * _lastEventDate;
    NSObject<OS_os_log> * _log;
    NSProgress * _progress;
    NSObject<OS_dispatch_source> * _progressTimer;
    FPXPCAutomaticErrorProxy * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    SEL  _selector;
    NSDate * _timeout;
    NSObject<OS_dispatch_source> * _timer;
}

@property (readonly) FPXPCAutomaticErrorProxy *proxy;

- (void).cxx_destruct;
- (void)_handleTimeout;
- (void)_setupProgressTimer;
- (void)_setupTimer:(double)arg1;
- (const char *)_timeoutExpirationState;
- (void)cancelTimeout;
- (id)description;
- (id)initWithSelector:(SEL)arg1 proxy:(id)arg2 timeout:(double)arg3 queue:(id)arg4 log:(id)arg5 timeoutHandler:(id /* block */)arg6;
- (void)monitorProgress:(id)arg1;
- (id)proxy;

@end
