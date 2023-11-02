
@interface REMSuggestedAttributesPerformer : NSObject {
    <REMXPCSuggestedAttributesPerformer> * _q_cachedXPCPerformer;
    NSObject<OS_dispatch_queue> * _queue;
    REMStore * _store;
}

@property (nonatomic, retain) <REMXPCSuggestedAttributesPerformer> *q_cachedXPCPerformer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) REMStore *store;

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1 store:(id)arg2;
- (void)preWarmModels;
- (id)q_cachedXPCPerformer;
- (id)q_resolveSuggestedAttributesPerformerWithReason:(id)arg1 errorHandler:(id /* block */)arg2;
- (id)q_syncSuggestedAttributesPerformerWithReason:(id)arg1 errorHandler:(id /* block */)arg2;
- (id)queue;
- (id)resultFromPerformingSwiftInvocation:(id)arg1 parametersData:(id)arg2 storages:(id)arg3 error:(id*)arg4;
- (void)setQ_cachedXPCPerformer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
