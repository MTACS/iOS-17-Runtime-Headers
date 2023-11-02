
@interface __NSCFURLLocalSessionConnection : __NSCFURLSessionConnection <NSCopying, NSURLAuthenticationChallengeSender> {
    bool  _actuallyTriedCredentialsSuppliedInURL;
    bool  _canceled;
    long long  _clientBufferLength;
    bool  _didCheckCredentialsSuppliedInURL;
    bool  _didCheckMixedReplace;
    unsigned int  _didReceiveDataCount;
    unsigned long long  _didReceiveResponseDisposition;
    bool  _isMixedReplace;
    struct URLConnectionLoader { int (**x1)(); struct __CFAllocator {} *x2; int (**x3)(); unsigned char x4; unsigned char x5; struct InterfaceRequiredForLoader {} *x6; id x7; int (**x8)(); int (**x9)(); id x10; id x11; long long x12; struct RedirectionRecorder {} *x13; unsigned char x14; unsigned char x15; unsigned char x16; id x17; unsigned char x18; double x19; double x20; unsigned char x21; struct URLProtocol {} *x22; id x23; unsigned char x24; struct CoreSchedulingSet {} *x25; double x26; double x27; unsigned long long x28; struct ConfigFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; unsigned int x_29_1_6 : 1; unsigned int x_29_1_7 : 1; unsigned int x_29_1_8 : 1; } x29; unsigned char x30; unsigned char x31; unsigned char x32; unsigned char x33; unsigned long long x34; unsigned int x35; unsigned char x36; bool x37; } * _loader;
    struct SessionConnectionLoadable { int (**x1)(); int (**x2)(); int (**x3)(); id x4; } * _loaderClient;
    unsigned long long  _maxDataSegmentCoalesceThreshhold;
    unsigned long long  _maxDataSegmentCount;
    long long  _pendingCompletion;
    NSObject<OS_dispatch_data> * _pendingData;
    NSError * _pendingError;
    NSObject<OS_dispatch_data> * _sniffData;
    NSURLResponse * _sniffResponse;
    int  _state;
    long long  _suspended;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_ackBytes:(long long)arg1;
- (void)_alternatePathAvailable:(int)arg1;
- (void)_captureTransportConnection:(struct shared_ptr<TransportConnection> { struct TransportConnection {} *x1; struct __shared_weak_count {} *x2; })arg1 extraBytes:(id)arg2;
- (void)_capturedSocketInputStream:(id)arg1 outputStream:(id)arg2;
- (void)_conditionalRequirementsChanged:(bool)arg1;
- (void)_connectionIsWaitingWithReason:(long long)arg1;
- (void)_didFinishWithError:(id)arg1;
- (void)_didReceiveChallenge:(id)arg1;
- (void)_didReceiveData:(id)arg1;
- (void)_didReceiveInformationalResponse:(id)arg1;
- (void)_didReceiveResponse:(id)arg1 sniff:(bool)arg2;
- (void)_didSendBodyData:(struct UploadProgressInfo { long long x1; long long x2; long long x3; })arg1;
- (void)_didUseCachedResponse;
- (void)_needNewBodyStream;
- (void)_needNewBodyStreamFromOffset:(long long)arg1;
- (void)_redirectRequest:(id)arg1 redirectResponse:(id)arg2 completion:(id /* block */)arg3;
- (void)_willSendRequestForEstablishedConnection:(id)arg1 completion:(id /* block */)arg2;
- (void)cancel;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)dealloc;
- (void)expectedProgressTargetChanged;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)resume;
- (void)setBytesPerSecondLimit:(long long)arg1;
- (void)setIsDownload:(bool)arg1;
- (void)setPoolPriority:(long long)arg1;
- (void)setPriorityHint:(float)arg1 incremental:(bool)arg2;
- (void)suspend;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)withLoaderAsync:(id /* block */)arg1;

@end
