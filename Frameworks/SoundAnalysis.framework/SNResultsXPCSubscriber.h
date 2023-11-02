
@interface SNResultsXPCSubscriber : NSObject <SNResultsObserving, SNResultsObservingXPCProtocol> {
    void receiver;
}

- (void).cxx_destruct;
- (id)init;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (void)requestDidComplete:(id)arg1;
- (void)xpcRequest:(id)arg1 didFailWithError:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)xpcRequest:(id)arg1 didProduceResult:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)xpcRequestDidComplete:(id)arg1 completionHandler:(id /* block */)arg2;

@end
