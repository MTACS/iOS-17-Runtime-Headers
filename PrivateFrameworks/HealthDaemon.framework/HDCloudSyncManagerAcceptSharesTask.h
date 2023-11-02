
@interface HDCloudSyncManagerAcceptSharesTask : HDCloudSyncManagerPipelineTask {
    HDCloudSyncAcceptSharesOperation * _acceptSharesOperation;
    HDCloudSyncShareSetupMetadata * _shareSetupMetadata;
}

@property (nonatomic, readonly, copy) NSArray *acceptedShares;

- (void).cxx_destruct;
- (id)acceptedShares;
- (id)initWithManager:(id)arg1 context:(id)arg2 shareSetupMetadata:(id)arg3 accessibilityAssertion:(id)arg4 completion:(id /* block */)arg5;
- (id)pipelineForRepository:(id)arg1;
- (bool)requiresExistingShareOwnerParticipant;

@end
