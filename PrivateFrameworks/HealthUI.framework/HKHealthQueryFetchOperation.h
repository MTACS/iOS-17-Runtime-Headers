
@interface HKHealthQueryFetchOperation : HKChartCacheFetchOperation {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _callbackLock;
    HKHealthStore * _healthStore;
    id /* block */  _lockedClientCompletion;
    id /* block */  _lockedFetchOperationManager;
    NSArray * _queries;
}

@property (nonatomic, retain) NSArray *queries;

- (void).cxx_destruct;
- (void)completedWithResults:(id)arg1 error:(id)arg2;
- (id)initWithHealthStore:(id)arg1 operationDescription:(id)arg2 completion:(id /* block */)arg3;
- (id)queries;
- (void)setQueries:(id)arg1;
- (void)startOperationWithCompletion:(id /* block */)arg1;
- (void)stopOperation;

@end
