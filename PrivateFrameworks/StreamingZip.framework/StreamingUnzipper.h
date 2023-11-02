
@interface StreamingUnzipper : NSObject <StreamingUnzipProtocol> {
    int  _activeDelegateMethods;
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    StreamingUnzipState * _currentState;
    void * _decompressionOutputBuffer;
    bool  _hasConnection;
    double  _lastExtractionProgressSent;
    long long  _sandboxToken;
    NSObject<OS_os_transaction> * _sessionTransaction;
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * inProcessDelegateQueue;
    <StreamingUnzipDelegateProtocol> * inProcessExtractorDelegate;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *inProcessDelegateQueue;
@property (nonatomic) <StreamingUnzipDelegateProtocol> *inProcessExtractorDelegate;
@property (nonatomic) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)_beginNonStreamablePassthroughWithRemainingBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)_extractionEnteredPassThroughMode;
- (void)_sendExtractionCompleteAtArchivePath:(id)arg1;
- (void)_sendExtractionProgress:(double)arg1;
- (void)_setErrorState;
- (void)_supplyBytes:(const char *)arg1 length:(unsigned long long)arg2 withReply:(id /* block */)arg3;
- (void)dealloc;
- (void)finishStreamWithReply:(id /* block */)arg1;
- (void)getPidForTestingWithReply:(id /* block */)arg1;
- (id)inProcessDelegateQueue;
- (id)inProcessExtractorDelegate;
- (id)initForClient:(id)arg1 connection:(id)arg2;
- (void)setActiveDelegateMethods:(int)arg1;
- (void)setInProcessDelegateQueue:(id)arg1;
- (void)setInProcessExtractorDelegate:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setupUnzipperWithOutputPath:(id)arg1 sandboxExtensionToken:(char *)arg2 options:(id)arg3 withReply:(id /* block */)arg4;
- (void)supplyBytes:(id)arg1 withReply:(id /* block */)arg2;
- (void)suspendStreamWithReply:(id /* block */)arg1;
- (void)terminateStreamWithReply:(id /* block */)arg1;
- (id)xpcConnection;

@end
