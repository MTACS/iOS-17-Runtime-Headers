
@interface MLGenericPredictionRequest : NSObject <MLPredictionRequest> {
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _cancelled;
    <MLFeatureProvider> * _inputFeatures;
    MLModel * _model;
    MLPredictionOptions * _predictionOptions;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _used;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MLFeatureProvider> *inputFeatures;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) MLModel *model;
@property (nonatomic, readonly) MLPredictionOptions *predictionOptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)initForModel:(id)arg1 inputFeatures:(id)arg2 options:(id)arg3;
- (id)inputFeatures;
- (bool)isCancelled;
- (id)model;
- (id)predictionOptions;
- (void)submitWithCompletionHandler:(id /* block */)arg1;

@end
