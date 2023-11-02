
@interface SUUILoadResourceOperation : NSOperation {
    long long  __loadReason;
    SUUIClientContext * _clientContext;
    NSLock * _lock;
    id /* block */  _outputBlock;
    SUUIResourceRequest * _request;
}

@property (setter=_setLoadReason:, nonatomic) long long _loadReason;
@property (retain) SUUIClientContext *clientContext;
@property (copy) id /* block */ outputBlock;
@property (readonly, copy) SUUIResourceRequest *resourceRequest;

- (void).cxx_destruct;
- (id)_initSUUILoadResourceOperation;
- (long long)_loadReason;
- (void)_setLoadReason:(long long)arg1;
- (void)cancel;
- (id)clientContext;
- (id)init;
- (id)initWithResourceRequest:(id)arg1;
- (void)main;
- (id /* block */)outputBlock;
- (id)resourceRequest;
- (void)setClientContext:(id)arg1;
- (void)setOutputBlock:(id /* block */)arg1;

@end
