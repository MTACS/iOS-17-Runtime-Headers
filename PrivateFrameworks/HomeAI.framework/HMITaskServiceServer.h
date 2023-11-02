
@interface HMITaskServiceServer : HMITaskService {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    int  _nextTaskID;
    NSOperationQueue * _operationQueue;
}

@property int nextTaskID;
@property (readonly) NSOperationQueue *operationQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)buildEmptyTaskFromOptions:(id)arg1 error:(id*)arg2;
- (id)buildFaceMisclassificationTaskFromOptions:(id)arg1 error:(id*)arg2;
- (id)buildHomePersonClusteringTaskFromOptions:(id)arg1 error:(id*)arg2;
- (id)buildPersonsModelsSummaryTaskFromOptions:(id)arg1 error:(id*)arg2;
- (id)buildRemovePersonsModelTaskFromOptions:(id)arg1 error:(id*)arg2;
- (id)buildSubmitFeedbackTaskFromOptions:(id)arg1 error:(id*)arg2;
- (id)buildUpdatePersonsModelTaskFromOptions:(id)arg1 error:(id*)arg2;
- (id)buildUpdateTorsoModelTaskFromOptions:(id)arg1 error:(id*)arg2;
- (bool)cancelTask:(int)arg1;
- (int)getNextTaskID;
- (id)init;
- (int)nextTaskID;
- (id)operationQueue;
- (void)setNextTaskID:(int)arg1;
- (int)submitTask:(id)arg1 progressHandler:(id /* block */)arg2 completionHander:(id /* block */)arg3;
- (int)submitTaskWithOptions:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

@end
