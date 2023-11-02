
@interface HDCloudSyncManagerFetchShareParticipantsTask : HDCloudSyncManagerPipelineTask {
    bool  _fetchAllShares;
    HDCloudSyncPipelineStageFetchShares * _fetchSharesStage;
}

@property (nonatomic, readonly, copy) NSArray *shares;

- (void).cxx_destruct;
- (id)initWithManager:(id)arg1 context:(id)arg2 fetchAllShares:(bool)arg3 accessibilityAssertion:(id)arg4 completion:(id /* block */)arg5;
- (id)pipelineForRepository:(id)arg1;
- (id)shares;

@end
