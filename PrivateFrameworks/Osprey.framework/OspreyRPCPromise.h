
@interface OspreyRPCPromise : NSObject <OspreyRPC> {
    OspreyDeferredObject * _deferredRPC;
    NSObject<OS_dispatch_queue> * _fulfillmentQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bidirectionalStreamingRequestWithMethodName:(id)arg1 requestBuilder:(id /* block */)arg2 streamingResponseHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)clientStreamingRequestWithMethodName:(id)arg1 requestBuilder:(id /* block */)arg2 responseHandler:(id /* block */)arg3;
- (void)fulfill:(id)arg1;
- (id)initWithFulfillmentQueue:(id)arg1;
- (void)serverStreamingRequestWithMethodName:(id)arg1 requestData:(id)arg2 requestBuilder:(id /* block */)arg3 streamingResponseHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)unaryRequestWithMethodName:(id)arg1 requestData:(id)arg2 requestBuilder:(id /* block */)arg3 responseHandler:(id /* block */)arg4;

@end
