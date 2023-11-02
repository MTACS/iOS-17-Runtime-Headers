
@interface SiriAnalyticsMessageResolutionPipeline : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _resolutionTimers;
    NSHashTable * _resolvers;
}

- (void).cxx_destruct;
- (void)_continueResolutionWithMessage:(id)arg1 resolvers:(id)arg2 currentResolverIndex:(unsigned long long)arg3 resolversApplied:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)_discardResolutionTimer:(id)arg1;
- (id)_startResolutionTimerWithElapsed:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1;
- (void)registerMessageResolver:(id)arg1;
- (void)resolveMessage:(id)arg1 timestamp:(unsigned long long)arg2 completion:(id /* block */)arg3;

@end
