
@interface HDCloudSyncPipelineStagePull : HDCloudSyncPipelineStage {
    NSError * _queue_firstPullOperationError;
    long long  _queue_pullOperationFailureCount;
}

+ (id)operationTagDependencies;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (void)main;

@end
