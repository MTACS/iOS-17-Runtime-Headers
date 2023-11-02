
@interface PLCloudInMemoryTaskManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _resourceIDsToDownloadTasks;
    NSMutableDictionary * _taskIDsToDownloadTasks;
}

- (void).cxx_destruct;
- (id)_identifierForResource:(id)arg1;
- (bool)addClientHandlerAndCreateTaskIfNecessaryForResource:(id)arg1 taskIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelTaskWithTaskIdentifier:(id)arg1;
- (id)init;
- (void)reportCompletionForResource:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (void)reset;
- (void)setTransferTask:(id)arg1 forResource:(id)arg2;

@end
