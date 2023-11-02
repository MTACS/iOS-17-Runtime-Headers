
@interface FPXPCAutomaticErrorProxy : NSObject <FPXPCAutomaticErrorProxy, NSCopying> {
    NSError * _error;
    bool  _isSynchronous;
    NSString * _name;
    int  _pid;
    Protocol * _protocol;
    id /* block */  _requestDidBeginBlock;
    id /* block */  _requestWillBeginBlock;
    _Atomic unsigned long long  _retainCounter;
    id  _retainSelfWhileMessageIsPending;
    bool  _sanitizeErrors;
    NSObject<NSXPCProxyCreating> * _target;
    unsigned long long  _timeoutState;
}

@property (nonatomic) int requestEffectivePid;
@property (nonatomic) bool sanitizeErrors;
@property unsigned long long timeoutState;

+ (bool)sanitizeErrors;

- (void).cxx_destruct;
- (void)_requestDidBegin:(SEL)arg1 progress:(id)arg2 requestID:(id)arg3;
- (void)_requestDidFinish:(id)arg1 requestDidFinishBlock:(id /* block */)arg2;
- (id /* block */)_requestWillBegin:(SEL)arg1 requestID:(id)arg2;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(id /* block */)arg6;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(id /* block */)arg6 requestDidBegin:(id /* block */)arg7;
- (id)initWithRemoteObjectProxy:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(id /* block */)arg6 requestDidBegin:(id /* block */)arg7;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (int)requestEffectivePid;
- (bool)sanitizeErrors;
- (void)setRequestEffectivePid:(int)arg1;
- (void)setSanitizeErrors:(bool)arg1;
- (void)setTimeoutState:(unsigned long long)arg1;
- (id)synchronousRemoteObjectProxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (unsigned long long)timeoutState;

@end
