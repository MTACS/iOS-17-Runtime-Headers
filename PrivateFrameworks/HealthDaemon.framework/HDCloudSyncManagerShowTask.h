
@interface HDCloudSyncManagerShowTask : HDCloudSyncManagerPipelineTask {
    NSMutableArray * _allRepositoryDescriptions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _repositoryDescriptions;
}

@property (readonly, copy) NSArray *repositoryDescriptions;

- (void).cxx_destruct;
- (void)didFailWithErrors:(id)arg1;
- (void)didFinishWithSuccess;
- (id)initWithManager:(id)arg1 context:(id)arg2 accessibilityAssertion:(id)arg3 completion:(id /* block */)arg4;
- (id)pipelineForRepository:(id)arg1;
- (id)repositoryDescriptions;

@end
