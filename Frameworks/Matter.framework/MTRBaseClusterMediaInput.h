
@interface MTRBaseClusterMediaInput : MTRCluster {
    MTRBaseDevice * _device;
    unsigned short  _endpoint;
}

@property (nonatomic, readonly) MTRBaseDevice *device;
@property (nonatomic, readonly) unsigned short endpoint;

+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeAttributeListWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeCurrentInputWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeCurrentInputWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeInputListWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeInputListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)device;
- (unsigned short)endpoint;
- (void)hideInputStatusWithCompletion:(id /* block */)arg1;
- (void)hideInputStatusWithCompletionHandler:(id /* block */)arg1;
- (void)hideInputStatusWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)hideInputStatusWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;
- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)arg1;
- (void)readAttributeAcceptedCommandListWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)arg1;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)arg1;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeCurrentInputWithCompletion:(id /* block */)arg1;
- (void)readAttributeCurrentInputWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)arg1;
- (void)readAttributeFeatureMapWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)arg1;
- (void)readAttributeGeneratedCommandListWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeInputListWithCompletion:(id /* block */)arg1;
- (void)readAttributeInputListWithCompletionHandler:(id /* block */)arg1;
- (void)renameInputWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)renameInputWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)selectInputWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)selectInputWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showInputStatusWithCompletion:(id /* block */)arg1;
- (void)showInputStatusWithCompletionHandler:(id /* block */)arg1;
- (void)showInputStatusWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)showInputStatusWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeAttributeListWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeAttributeListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeClusterRevisionWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeCurrentInputWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeCurrentInputWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeFeatureMapWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeFeatureMapWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeInputListWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeInputListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;

@end
