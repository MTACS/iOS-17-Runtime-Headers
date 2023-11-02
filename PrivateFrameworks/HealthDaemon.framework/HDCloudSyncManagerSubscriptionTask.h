
@interface HDCloudSyncManagerSubscriptionTask : HDCloudSyncManagerPipelineTask {
    NSDictionary * _subscriptions;
}

- (void).cxx_destruct;
- (id)initWithManager:(id)arg1 context:(id)arg2 subscriptions:(id)arg3 accessibilityAssertion:(id)arg4 completion:(id /* block */)arg5;
- (id)pipelineForRepository:(id)arg1;

@end
