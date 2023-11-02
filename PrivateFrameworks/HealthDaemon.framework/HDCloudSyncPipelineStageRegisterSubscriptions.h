
@interface HDCloudSyncPipelineStageRegisterSubscriptions : HDCloudSyncPipelineStage {
    bool  _includeSecondaryContainers;
    NSDictionary * _subscriptions;
}

@property (nonatomic) bool includeSecondaryContainers;
@property (nonatomic, readonly, copy) NSDictionary *subscriptions;

- (void).cxx_destruct;
- (bool)includeSecondaryContainers;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 subscriptions:(id)arg3;
- (void)main;
- (void)setIncludeSecondaryContainers:(bool)arg1;
- (id)subscriptions;

@end
