
@interface PLPhotoAnalysisServiceRemoteServiceProxy : NSObject {
    id /* block */  _errorHandler;
    NSXPCInterface * _remoteInterface;
    PLPhotoAnalysisServiceClientSideService * _service;
    bool  _synchronous;
}

- (void).cxx_destruct;
- (bool)conformsToProtocol:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithServiceProvider:(id)arg1 remoteInterface:(id)arg2 synchronous:(bool)arg3 errorHandler:(id /* block */)arg4;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
