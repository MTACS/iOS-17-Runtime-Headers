
@interface AMSAuthorizeMachineProtocolHandler : AMSURLProtocolHandler {
    id /* block */  _reconfigureRequestHandler;
}

@property (nonatomic, copy) id /* block */ reconfigureRequestHandler;

- (void).cxx_destruct;
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(bool)arg3 error:(id*)arg4;
- (id /* block */)reconfigureRequestHandler;
- (void)setReconfigureRequestHandler:(id /* block */)arg1;

@end
