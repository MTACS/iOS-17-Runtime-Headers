
@interface _UIDelayedPresentationContext : NSObject {
    id /* block */  _cancellationHandler;
    bool  _enableUserInteraction;
    NSInvocation * _presentInvocation;
    long long  _reqcnt;
    double  _timeout;
    NSObject<OS_dispatch_source> * _timerSource;
    UIWindowScene * _windowSceneIgnoringEvents;
}

@property (nonatomic, copy) id /* block */ cancellationHandler;
@property (nonatomic, retain) NSInvocation *presentInvocation;
@property UIWindowScene *windowSceneIgnoringEvents;

- (void).cxx_destruct;
- (id /* block */)cancellationHandler;
- (void)dealloc;
- (long long)decrementRequestCount;
- (id)delayingController;
- (long long)incrementRequestCount;
- (id)initWithTimeout:(double)arg1 cancellationHandler:(id /* block */)arg2;
- (id)invocationTarget;
- (id)presentInvocation;
- (long long)requestCount;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setPresentInvocation:(id)arg1;
- (void)setWindowSceneIgnoringEvents:(id)arg1;
- (id)windowSceneIgnoringEvents;

@end
