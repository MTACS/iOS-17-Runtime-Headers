
@protocol PBFPosterRoleProcessorObserver <NSObject>

@optional

- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 didBeginTransaction:(id <PBFPosterRoleProcessorTransaction>)arg2;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 didCommitTransaction:(id <PBFPosterRoleProcessorTransaction>)arg2;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 didEvaluateEvent:(PBFPosterDataStoreEvent *)arg2 transaction:(id <PBFPosterRoleProcessorTransaction>)arg3;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 didExecuteChange:(PBFPosterRoleCoordinatorChange *)arg2 transaction:(id <PBFPosterRoleProcessorTransaction>)arg3;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 didFinalizeTransaction:(id <PBFPosterRoleProcessorTransaction>)arg2;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 transactionFinished:(id <PBFPosterRoleProcessorTransaction>)arg2 success:(bool)arg3 results:(id <PBFPosterRoleProcessorResult>)arg4 error:(NSError *)arg5;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 willBeginTransaction:(id <PBFPosterRoleProcessorTransaction>)arg2;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 willCommitTransaction:(id <PBFPosterRoleProcessorTransaction>)arg2;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 willEvaluateEvent:(PBFPosterDataStoreEvent *)arg2 transaction:(id <PBFPosterRoleProcessorTransaction>)arg3;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 willExecuteChange:(PBFPosterRoleCoordinatorChange *)arg2 transaction:(id <PBFPosterRoleProcessorTransaction>)arg3;
- (void)roleProcessor:(PBFPosterRoleProcessor *)arg1 willFinalizeTransaction:(id <PBFPosterRoleProcessorTransaction>)arg2;
- (void)roleProcessorWasInvalidated:(PBFPosterRoleProcessor *)arg1;

@end
