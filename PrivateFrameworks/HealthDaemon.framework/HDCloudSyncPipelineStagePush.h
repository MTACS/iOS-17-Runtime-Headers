
@interface HDCloudSyncPipelineStagePush : HDCloudSyncPipelineStage {
    HDSyncIdentity * _currentSyncIdentity;
}

+ (id)operationTagDependencies;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (void)main;

@end
