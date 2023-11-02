
@interface ASDExtensionRequest : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _errorBlock;
    bool  _errorBlockCalled;
    NSExtension * _extension;
    double  _graceTime;
    NSObject<OS_dispatch_source> * _graceTimer;
    id  _remoteContextInterface;
    NSUUID * _requestUUID;
    NSObject<OS_dispatch_queue> * _runQueue;
    double  _serviceTime;
    NSObject<OS_dispatch_source> * _serviceTimer;
}

@property (nonatomic, copy) id /* block */ errorBlock;
@property (nonatomic, readonly) NSExtension *extension;

- (void).cxx_destruct;
- (struct { id x1; id x2; })beginRequestForHostContext:(Class)arg1 XPCInterface:(id)arg2;
- (void)beginRequestForHostContext:(Class)arg1 XPCInterface:(id)arg2 executionBlock:(id /* block */)arg3;
- (void)dealloc;
- (void)endRequest;
- (id /* block */)errorBlock;
- (id)extension;
- (id)initWithExtension:(id)arg1 queue:(id)arg2;
- (id)initWithExtension:(id)arg1 queue:(id)arg2 serviceTime:(double)arg3 graceTime:(double)arg4;
- (void)requestEnded;
- (void)setErrorBlock:(id /* block */)arg1;

@end
