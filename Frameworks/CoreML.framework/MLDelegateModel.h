
@interface MLDelegateModel : MLModel {
    NSObject<OS_dispatch_queue> * _asyncPredictionQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _asyncPredictionSchedulingLock;
    unsigned long long  _currentAsyncPredictionsInFlight;
    <MLModeling> * _internalEngine;
    unsigned long long  _maxAsyncPredictionsInFlight;
    MLOutputBackingsVerifier * _outputBackingsVerifier;
    NSMutableArray * _pendingPredictionQueue;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _prepared;
}

@property (nonatomic, readonly) int engine;
@property (nonatomic, readonly) unsigned long long maxAsyncPredictionsInFlight;
@property (nonatomic, readonly) NSMutableArray *pendingPredictionQueue;

- (void).cxx_destruct;
- (void)_finishPredictionAndDispatchPendingPredictions;
- (void)_schedulePredictionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_submitPredictionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelPredictionRequest:(id)arg1;
- (id)classifier;
- (void)enableInstrumentsTracing;
- (int)engine;
- (id)executionSchedule;
- (id)initWithEngine:(id)arg1 error:(id*)arg2;
- (id)internalEngine;
- (unsigned long long)maxAsyncPredictionsInFlight;
- (id)neuralNetwork;
- (id)newRequestWithInputFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)parameterValueForKey:(id)arg1 error:(id*)arg2;
- (id)pendingPredictionQueue;
- (id)pipeline;
- (void)predictionFromFeatures:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned long long)predictionTypeForKTrace;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)prepareWithCompletionHandler:(id /* block */)arg1;
- (id)program;
- (id)regressor;
- (unsigned long long)signpostID;
- (void)submitPredictionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)updatable;
- (id)writable;

@end
