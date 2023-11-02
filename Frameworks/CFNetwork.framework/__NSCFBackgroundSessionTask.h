
@interface __NSCFBackgroundSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass> {
    NSError * _immediateError;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _proxyLock;
    NSMutableSet * _secKeyProxies;
    bool  _sentCancel;
    bool  _sentDidFinish;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_onSessionQueue_disavow;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;
- (void)_onqueue_adjustLoadingPoolPriority;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_adjustPriorityHint:(float)arg1 incremental:(bool)arg2;
- (void)_onqueue_cancel;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didReceiveInformationalResponse:(id)arg1;
- (void)_onqueue_didReceiveResponse:(id)arg1;
- (void)_onqueue_resume;
- (void)_onqueue_suspend;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_timingData;
- (void)addSecKeyProxy:(id)arg1;
- (void)dealloc;
- (id)initWithBackgroundTask:(id)arg1;
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;
- (id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3;
- (void)removeSecKeyProxy:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg1;
- (void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg1;
- (void)set_discretionaryOverride:(long long)arg1;

@end
