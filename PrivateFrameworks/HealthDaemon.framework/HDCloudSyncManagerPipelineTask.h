
@interface HDCloudSyncManagerPipelineTask : HDCloudSyncManagerRepositoryTask {
    HDAssertion * _accessibilityAssertion;
    id /* block */  _completion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _pipelines;
}

@property (nonatomic, retain) HDAssertion *accessibilityAssertion;
@property (nonatomic, retain) NSArray *pipelines;

- (void).cxx_destruct;
- (id)accessibilityAssertion;
- (void)callCompletionWithSuccess:(bool)arg1 error:(id)arg2;
- (void)cancel;
- (void)dealloc;
- (void)didFailWithErrors:(id)arg1;
- (void)didFinishWithSuccess;
- (id)initWithManager:(id)arg1 context:(id)arg2;
- (id)initWithManager:(id)arg1 context:(id)arg2 accessibilityAssertion:(id)arg3 completion:(id /* block */)arg4;
- (void)mainWithRepositories:(id)arg1 error:(id)arg2;
- (id)pipelineForRepository:(id)arg1;
- (id)pipelines;
- (bool)requiresExistingShareOwnerParticipant;
- (void)setAccessibilityAssertion:(id)arg1;
- (void)setPipelines:(id)arg1;

@end
