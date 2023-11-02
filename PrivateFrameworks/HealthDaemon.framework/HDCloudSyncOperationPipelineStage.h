
@interface HDCloudSyncOperationPipelineStage : HDCloudSyncPipelineStage {
    HDCloudSyncOperation * _operation;
}

@property (nonatomic, readonly) HDCloudSyncOperation *operation;

- (void).cxx_destruct;
- (id)description;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithOperation:(id)arg1;
- (void)main;
- (id)operation;

@end
