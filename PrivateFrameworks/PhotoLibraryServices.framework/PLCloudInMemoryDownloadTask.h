
@interface PLCloudInMemoryDownloadTask : NSObject {
    bool  _completed;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _resourceID;
    NSMapTable * _taskIDsToCompletionHandlers;
    CPLResourceTransferTask * _transferTask;
}

@property (getter=isCompleted, nonatomic, readonly) bool completed;
@property (nonatomic, readonly, copy) NSString *resourceID;
@property (nonatomic, readonly) NSArray *taskIDs;
@property (nonatomic, retain) CPLResourceTransferTask *transferTask;

- (void).cxx_destruct;
- (void)addClientWithTaskID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelClientWithTaskID:(id)arg1;
- (id)initWithResourceID:(id)arg1 taskID:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)isCompleted;
- (void)reportCompletionWithData:(id)arg1 error:(id)arg2;
- (id)resourceID;
- (void)setTransferTask:(id)arg1;
- (id)taskIDs;
- (id)transferTask;

@end
