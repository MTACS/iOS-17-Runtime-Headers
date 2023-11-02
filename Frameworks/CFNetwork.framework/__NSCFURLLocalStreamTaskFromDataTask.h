
@interface __NSCFURLLocalStreamTaskFromDataTask : __NSCFURLLocalStreamTask <__NSCFURLSessionConnectionDelegate> {
    struct __CFReadStream { } * _myReadToHisWrite;
    bool  _myReadToHisWriteEOF;
    struct { 
        long long domain; 
        int error; 
    }  _myReadToHisWriteError;
    bool  _myReadToHisWriteSignaled;
    struct __CFWriteStream { } * _myWriteToHisRead;
    bool  _myWriteToHisReadEOF;
    struct { 
        long long domain; 
        int error; 
    }  _myWriteToHisReadError;
    bool  _myWriteToHisReadSignaled;
    NSMutableArray * _myWriteToHisReadWork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)connection:(id)arg1 _conditionalRequirementsChanged:(bool)arg2;
- (void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(id /* block */)arg3;
- (void)connection:(id)arg1 alternatePathAvailable:(int)arg2;
- (void)connection:(id)arg1 challenged:(id)arg2 authCallback:(id /* block */)arg3;
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(id /* block */)arg3;
- (void)connection:(id)arg1 didReceiveInformationalResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(id /* block */)arg3;
- (void)connection:(id)arg1 didReceiveSocketInputStream:(id)arg2 outputStream:(id)arg3;
- (void)connection:(id)arg1 didReceiveTCPConnection:(struct shared_ptr<TransportConnection> { struct TransportConnection {} *x1; struct __shared_weak_count {} *x2; })arg2 extraBytes:(id)arg3;
- (void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(id /* block */)arg3;
- (void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamFromOffset:(long long)arg3 callback:(id /* block */)arg4;
- (void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4;
- (void)connection:(id)arg1 waitingWithReason:(long long)arg2;
- (void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(id /* block */)arg4;
- (void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(id /* block */)arg3;
- (void)connectionWillFinishLoading:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithTask:(id)arg1 disavow:(id /* block */)arg2;
- (id)initWithTask:(id)arg1 inputStream:(id)arg2 ouptutStream:(id)arg3 disavow:(id /* block */)arg4;
- (id)initWithTask:(id)arg1 remainingInputStream:(id)arg2 remainingOutputStream:(id)arg3 disavow:(id /* block */)arg4;

@end
