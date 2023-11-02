
@interface ICURLRequestRegistry : NSObject {
    NSMutableArray * _activeRequests;
    NSMutableDictionary * _requestHandlers;
}

@property (nonatomic, retain) NSMutableArray *activeRequests;
@property (nonatomic, retain) NSMutableDictionary *requestHandlers;

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)activeRequests;
- (id /* block */)handlerForIncomingRequestWithAction:(id)arg1 scheme:(id)arg2;
- (id)popActiveRequest;
- (id)popRequest:(id)arg1;
- (id)popRequestWithUUID:(id)arg1;
- (void)registerHandler:(id /* block */)arg1 forIncomingRequestsWithAction:(id)arg2 scheme:(id)arg3;
- (void)registerOutgoingRequest:(id)arg1;
- (void)removeHandlerForIncomingRequestsWithAction:(id)arg1 scheme:(id)arg2;
- (id)requestHandlers;
- (void)setActiveRequests:(id)arg1;
- (void)setRequestHandlers:(id)arg1;

@end
