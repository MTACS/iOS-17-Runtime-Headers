
@interface NEAppProxyProviderContainer : NSObject {
    <NEAppProxyProviderContainerDelegate> * _delegate;
    unsigned int  _delegateInterfaceIndex;
    struct _NEFlowDirector { } * _director;
    NSObject<OS_dispatch_queue> * _flowQueue;
    NEAppProxyProvider * _provider;
    id /* block */  _stopCompletionHandler;
}

@property (readonly) NEAppProxyProvider *provider;

- (void).cxx_destruct;
- (void)handleAppMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1 providerClass:(Class)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)provider;
- (void)setConfiguration:(id)arg1;
- (void)setDelegateInterface:(unsigned int)arg1;
- (void)setInitialFlowDivertControlSocket:(id)arg1;
- (void)sleepWithCompletionHandler:(id /* block */)arg1;
- (void)startWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stop;
- (void)wake;

@end
