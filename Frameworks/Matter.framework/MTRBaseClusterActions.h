
@interface MTRBaseClusterActions : MTRCluster {
    MTRBaseDevice * _device;
    unsigned short  _endpoint;
}

@property (nonatomic, readonly) MTRBaseDevice *device;
@property (nonatomic, readonly) unsigned short endpoint;

+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeActionListWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeActionListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeAttributeListWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeEndpointListsWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeEndpointListsWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
+ (void)readAttributeSetupURLWithAttributeCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)readAttributeSetupURLWithClusterStateCache:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)device;
- (void)disableActionWithDurationWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)disableActionWithDurationWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)disableActionWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)disableActionWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)enableActionWithDurationWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)enableActionWithDurationWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)enableActionWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)enableActionWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned short)endpoint;
- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;
- (void)instantActionWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)instantActionWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)instantActionWithTransitionWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)instantActionWithTransitionWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)pauseActionWithDurationWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)pauseActionWithDurationWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)pauseActionWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)pauseActionWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)arg1;
- (void)readAttributeAcceptedCommandListWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeActionListWithCompletion:(id /* block */)arg1;
- (void)readAttributeActionListWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)arg1;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)arg1;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeEndpointListsWithCompletion:(id /* block */)arg1;
- (void)readAttributeEndpointListsWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)arg1;
- (void)readAttributeFeatureMapWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)arg1;
- (void)readAttributeGeneratedCommandListWithCompletionHandler:(id /* block */)arg1;
- (void)readAttributeSetupURLWithCompletion:(id /* block */)arg1;
- (void)readAttributeSetupURLWithCompletionHandler:(id /* block */)arg1;
- (void)resumeActionWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)resumeActionWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startActionWithDurationWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)startActionWithDurationWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startActionWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)startActionWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopActionWithParams:(id)arg1 completion:(id /* block */)arg2;
- (void)stopActionWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeActionListWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeActionListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeAttributeListWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeAttributeListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeClusterRevisionWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeEndpointListsWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeEndpointListsWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeFeatureMapWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeFeatureMapWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;
- (void)subscribeAttributeSetupURLWithMinInterval:(id)arg1 maxInterval:(id)arg2 params:(id)arg3 subscriptionEstablished:(id /* block */)arg4 reportHandler:(id /* block */)arg5;
- (void)subscribeAttributeSetupURLWithParams:(id)arg1 subscriptionEstablished:(id /* block */)arg2 reportHandler:(id /* block */)arg3;

@end
