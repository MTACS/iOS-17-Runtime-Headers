
@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired> {
    struct _CFURLConnection { } * _cfConn;
    int  _cfConnLock;
    struct _CFURLAuthChallenge { } * _currCFChallenge;
    NSURLAuthenticationChallenge * _currNSChallenge;
    long long  _expectedTotalBytes;
    struct __CFString { } * _fileName;
    bool  _shouldSkipCancelOnRelease;
    long long  _totalBytes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_invalidate;
- (void)_resumeLoading;
- (void)_setDelegateQueue:(id)arg1;
- (void)_setShouldSkipCancelOnRelease:(bool)arg1;
- (void)_suspendLoading;
- (id)_timingData;
- (void)cancel;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)dealloc;
- (id)initWithInfo:(const struct InternalInit { id x1; id x2; id x3; id x4; bool x5; long long x6; }*)arg1;
- (void)invokeForDelegate:(id /* block */)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)start;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

@end
