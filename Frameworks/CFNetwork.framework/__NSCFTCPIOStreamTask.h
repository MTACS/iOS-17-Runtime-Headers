
@interface __NSCFTCPIOStreamTask : NSURLSessionTask {
    NSData * __initialDataPayload;
    unsigned char  _captureStreamsUponCompletion;
    NSMutableArray * _completedSuspendedWork;
    int  _connectionState;
    __NSCFURLLocalStreamTaskWorkRead * _currentReadTask;
    __NSCFURLLocalStreamTaskWorkWrite * _currentWriteTask;
    id /* block */  _disavow;
    bool  _doingWorkOnThisQueue;
    struct shared_ptr<TCPIO_EstablishBase> { 
        struct TCPIO_EstablishBase {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _establish;
    bool  _goneSecure;
    struct shared_ptr<HTTPProtocol> { 
        struct HTTPProtocol {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _httpProtocol;
    struct shared_ptr<TransportConnectionObjCPP> { 
        struct TransportConnectionObjCPP {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _ios;
    NSMutableArray * _pendingWork;
    bool  _readClosed;
    struct { 
        long long domain; 
        int error; 
    }  _readError;
    bool  _readInProgress;
    CFNetworkTimer * _readTimer;
    bool  _receivedEof;
    bool  _receivedServerTrustChallenge;
    unsigned char  _secure;
    bool  _streamsCaptured;
    NSObject<OS_dispatch_queue> * _workQueueForStreamTask;
    bool  _writeClosed;
    bool  _writeEOF;
    struct { 
        long long domain; 
        int error; 
    }  _writeError;
    bool  _writeInProgress;
    CFNetworkTimer * _writeTimer;
}

@property (copy) NSData *_initialDataPayload;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initialDataPayload;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)_onSessionQueue_disavow;
- (void)_onqueue_addBlockOp:(id /* block */)arg1 description:(const char *)arg2;
- (void)_onqueue_addBlockOp:(id /* block */)arg1 description:(const char *)arg2 shouldWaitForTls:(bool)arg3;
- (void)_onqueue_adjustLoadingPoolPriority;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_callbackCompletedWork;
- (void)_onqueue_cancel;
- (void)_onqueue_captureStreams;
- (void)_onqueue_checkForCompletion;
- (void)_onqueue_cleanUpConnectionEstablishmentState;
- (void)_onqueue_closeRead;
- (void)_onqueue_closeWrite;
- (void)_onqueue_connectionEstablishedWithError:(struct { long long x1; int x2; })arg1 callbackReferent:(id)arg2;
- (void)_onqueue_dealWithSessionClientCertAuth:(long long)arg1 credential:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_onqueue_dealWithSessionTrustAuth:(long long)arg1 credential:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_onqueue_errorOrCancelError;
- (void)_onqueue_ioTick;
- (void)_onqueue_needClientCert:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_onqueue_needServerTrust:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_onqueue_postConnectConfiguration:(id)arg1 parameters:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_onqueue_preConnectionConfiguration:(id)arg1 parameters:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_onqueue_processReadWork:(id)arg1;
- (void)_onqueue_processWriteWork:(id)arg1;
- (void)_onqueue_resume;
- (bool)_onqueue_sendSessionChallenge:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_onqueue_setTransportConnection:(struct shared_ptr<TransportConnection> { struct TransportConnection {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)_onqueue_startSecureConnection;
- (void)_onqueue_stopSecureConnection;
- (void)_onqueue_suspend;
- (void)_onqueue_timeoutOccured;
- (void)_onqueue_tlsCompletion;
- (void)_onqueue_tlsDisabled;
- (bool)_onqueue_usingProxy;
- (void)_task_onqueue_didFinish;
- (void)cancel;
- (void)captureStreams;
- (void)closeRead;
- (void)closeWrite;
- (void)copyStreamProperty:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithHost:(id)arg1 port:(long long)arg2 taskGroup:(id)arg3 disavow:(id /* block */)arg4;
- (id)initWithTask:(id)arg1 connection:(struct shared_ptr<TransportConnection> { struct TransportConnection {} *x1; struct __shared_weak_count {} *x2; })arg2 extraBytes:(id)arg3 disavow:(id /* block */)arg4;
- (bool)isKindOfClass:(Class)arg1;
- (void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)set_initialDataPayload:(id)arg1;
- (bool)shouldDoWorkConsideringTlsState;
- (void)startSecureConnection;
- (void)stopSecureConnection;
- (id)workQueue;
- (void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;

@end
