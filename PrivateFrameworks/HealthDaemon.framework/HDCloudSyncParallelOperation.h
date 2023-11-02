
@interface HDCloudSyncParallelOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _operations;
    HDSynchronousTaskGroup * _taskGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *operations;
@property (readonly) Class superclass;

+ (bool)shouldLogAtOperationStart;
+ (bool)shouldProduceOperationAnalytics;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)addOperationOfClass:(Class)arg1;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (void)main;
- (id)operations;
- (void)skip;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(bool)arg2 errors:(id)arg3;

@end
