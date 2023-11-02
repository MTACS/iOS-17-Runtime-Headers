
@interface HDCloudSyncSharedSummaryPushTask : HDCloudSyncManagerPipelineTask

- (bool)combineWithTask:(id)arg1;
- (void)didFailWithErrors:(id)arg1;
- (void)didFinishWithSuccess;
- (id)pipelineForRepository:(id)arg1;

@end
