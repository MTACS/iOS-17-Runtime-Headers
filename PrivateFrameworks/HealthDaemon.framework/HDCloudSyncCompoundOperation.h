
@interface HDCloudSyncCompoundOperation : HDCloudSyncOperation {
    bool  _continueOnSubOperationError;
    HDCloudSyncOperation * _currentOperation;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSMutableArray * _operationErrors;
    NSMutableArray * _operations;
    id /* block */  _preparationHandler;
    NSArray * _remainingOperations;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _runningOperations;
}

@property (readonly) bool continueOnSubOperationError;
@property (readonly) bool hasEncounteredSubOperationError;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly, copy) NSArray *operations;
@property (copy) id /* block */ preparationHandler;

+ (bool)shouldLogAtOperationStart;
+ (bool)shouldProduceOperationAnalytics;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1 transitionHandler:(id /* block */)arg2;
- (void)addOperationOfClass:(Class)arg1 transitionHandler:(id /* block */)arg2;
- (bool)continueOnSubOperationError;
- (id)description;
- (bool)finishWithSuccess:(bool)arg1 error:(id)arg2;
- (bool)hasEncounteredSubOperationError;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 name:(id)arg3 continueOnSubOperationError:(bool)arg4;
- (void)main;
- (id)name;
- (id)operations;
- (id /* block */)preparationHandler;
- (void)setPreparationHandler:(id /* block */)arg1;
- (void)skip;
- (void)start;
- (id)unitTest_currentOperation;

@end
