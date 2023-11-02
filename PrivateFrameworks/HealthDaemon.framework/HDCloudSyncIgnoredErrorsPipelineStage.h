
@interface HDCloudSyncIgnoredErrorsPipelineStage : HDCloudSyncPipelineStage {
    HDCloudSyncPipelineStage * _stage;
}

@property (retain) HDCloudSyncPipelineStage *stage;

- (void).cxx_destruct;
- (id)description;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 stage:(id)arg3;
- (void)main;
- (void)setStage:(id)arg1;
- (id)stage;

@end
