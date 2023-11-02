
@interface ACFHTTPMethodInvocation : NSObject <ACFRunLoopScheduling> {
    id  _delegate;
    id  _internal;
    bool  _isWaitingForResponse;
    ACFHTTPMethod * _method;
    double  _timeout;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property <ACFHTTPMethodInvocationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, retain) ACFHTTPMethodInvocationInternal *internal;
@property bool isWaitingForResponse;
@property (readonly, retain) ACFHTTPMethod *method;
@property (readonly) Class superclass;
@property (readonly) double timeout;
@property (readonly, retain) NSURL *url;

+ (id)invocation;
+ (id)invocationWithMethod:(id)arg1 url:(id)arg2 timeout:(double)arg3 delegate:(id)arg4 invokeImmediately:(bool)arg5;
+ (id)invokeHTTPMethodSynchronously:(id)arg1 withURL:(id)arg2 timeout:(double)arg3 result:(id*)arg4;

- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithMethod:(id)arg1 url:(id)arg2 timeout:(double)arg3 delegate:(id)arg4 invokeImmediately:(bool)arg5;
- (id)internal;
- (void)invoke;
- (bool)isWaitingForResponse;
- (id)method;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIsWaitingForResponse:(bool)arg1;
- (double)timeout;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)url;

@end
