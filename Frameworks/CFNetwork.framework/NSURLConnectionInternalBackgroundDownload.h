
@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal <NSURLConnectionRequired, SSDownloadHandlerDelegate, SSDownloadManagerObserver> {
    long long  _ctLast;
    NSTimer * _deferredStartTimer;
    long long  _downloadIdent;
    SSDownloadHandler * _handler;
    NSAsyncSSDownloadManager * _manager;
    NSMutableArray * _pendingOps;
    NSCountedSet * _runloops;
    struct __CFRunLoopSource { } * _source;
    bool  _terminated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_enableLogging;

- (long long)_getDownloadIdent;
- (void)_invalidate;
- (void)_managerFailedToStartInTime;
- (void)_updateDownloadState:(id)arg1;
- (void)cancel;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)downloadHandler:(id)arg1 cancelSession:(id)arg2;
- (void)downloadHandler:(id)arg1 handleAuthenticationSession:(id)arg2;
- (bool)downloadHandler:(id)arg1 pauseSession:(id)arg2;
- (void)downloadHandlerDidDisconnect:(id)arg1;
- (id)initWithInfo:(const struct InternalInit { id x1; id x2; id x3; id x4; bool x5; long long x6; }*)arg1;
- (void)invokeForDelegate:(id /* block */)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)start;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

@end
