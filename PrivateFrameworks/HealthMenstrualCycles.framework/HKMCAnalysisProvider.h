
@interface HKMCAnalysisProvider : NSObject {
    HKMCAnalysisQuery * _analysisQuery;
    HKHealthStore * _healthStore;
    HKMCAnalysis * _lastAnalysis;
    NSError * _lastError;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _nextAnalysisQueryResultBlocks;
    HKObserverSet * _observers;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;

- (void).cxx_destruct;
- (void)_handleAnalysisQueryResult:(id)arg1 error:(id)arg2;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (void)analysisWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithHealthStore:(id)arg1 startAnalysisQueryImmediately:(bool)arg2;
- (void)removeObserver:(id)arg1;
- (void)startAnalysisQuery;

@end
