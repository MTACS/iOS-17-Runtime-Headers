
@interface INImageProxyInjectionOperation : NSOperation {
    id /* block */  _copyReturnBlock;
    id /* block */  _imageProxyRequestBlock;
    <INImageProxyInjecting> * _injector;
    bool  _isExecuting;
    bool  _isFinished;
}

@property (nonatomic, copy) id /* block */ copyReturnBlock;
@property (nonatomic, copy) id /* block */ imageProxyRequestBlock;
@property (nonatomic, retain) <INImageProxyInjecting> *injector;

- (void).cxx_destruct;
- (id /* block */)copyReturnBlock;
- (id /* block */)imageProxyRequestBlock;
- (id)injector;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setCopyReturnBlock:(id /* block */)arg1;
- (void)setImageProxyRequestBlock:(id /* block */)arg1;
- (void)setInjector:(id)arg1;
- (void)start;

@end
