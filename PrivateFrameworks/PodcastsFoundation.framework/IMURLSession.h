
@interface IMURLSession : AMSURLSession {
    bool  _followsRedirects;
    long long  _state;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (nonatomic) bool followsRedirects;
@property (nonatomic, readonly) bool isUsable;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)_configureProtocolHandler;
- (void)finishTasksAndInvalidate;
- (bool)followsRedirects;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)invalidateAndCancel;
- (bool)isUsable;
- (void)setFollowsRedirects:(bool)arg1;
- (long long)state;

@end
