
@interface ICDelegationConsumerServiceProtocolHandler : NSObject {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSOperationQueue * _operationQueue;
}

- (void).cxx_destruct;
- (void)getResponseForFinishDelegationRequest:(id)arg1 withSessionIDToRequestInfoMap:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getResponseForStartDelegationRequest:(id)arg1 requestContext:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)init;

@end
