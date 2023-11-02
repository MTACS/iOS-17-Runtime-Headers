
@interface REBayesianMLModel : REMLModel <REBayesianMLModelProperties> {
    struct BayesianModel { 
        struct _opaque_pthread_rwlock_t { 
            long long __sig; 
            BOOL __opaque[192]; 
        } m_rwlock; 
        struct unordered_map<unsigned long long, Gaussian, BayesianModel::SuperHasher, BayesianModel::SuperHasher, std::allocator<std::pair<const unsigned long long, Gaussian>>> { 
            struct __hash_table<std::__hash_value_type<unsigned long long, Gaussian>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher>, std::allocator<std::__hash_value_type<unsigned long long, Gaussian>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, Gaussian>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, Gaussian>, BayesianModel::SuperHasher, BayesianModel::SuperHasher>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } m_features; 
        int m_nFeaturesCount; 
        unsigned long long m_nTotalTrue; 
        unsigned long long m_nTotalExamples; 
        double m_dSumPredictions; 
        double m_dLogScore; 
        double m_dNormalizedLogScore; 
        double m_dEpsilon; 
        int m_nModelVersion; 
        unsigned long long m_nCalibrationCurveTrue[10]; 
        unsigned long long m_nCalibrationCurveCount[10]; 
        unsigned long long m_maxFeatureCoordinates; 
        unsigned long long m_nNumberOfTraining; 
        struct Gaussian { 
            double m_dPrecision; 
            double m_dPredicionMean; 
        } m_empty; 
    }  _model;
    unsigned long long  _numberOfFeatures;
}

@property (nonatomic, readonly) REExportedTable *content;

+ (unsigned long long)featureBitWidth;
+ (unsigned long long)maxFeatureCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearModel;
- (float)_getAveragePrediction;
- (float)_getNormalizedEntropy;
- (long long)_getNumberOfCoordinates;
- (unsigned long long)_getTotalExampleCount;
- (unsigned long long)_getTotalPositiveCount;
- (void)_loadFeatureVector:(void*)arg1 fromFeatureMap:(id)arg2;
- (bool)_loadModelFromURL:(id)arg1 error:(id*)arg2;
- (unsigned long long)_maxFeatureCoordinates;
- (id)_predictWithFeatures:(id)arg1;
- (bool)_saveDebugModelToURL:(id)arg1 error:(id*)arg2;
- (bool)_saveModelToURL:(id)arg1 error:(id*)arg2;
- (bool)_saveModelToURL:(id)arg1 includeDebugData:(bool)arg2 error:(id*)arg3;
- (void)_trainWithFeatures:(id)arg1 positiveEvent:(id)arg2;
- (id)content;
- (id)initWithFeatureSet:(id)arg1 priorMean:(float)arg2 modelVarianceEpsilon:(float)arg3;
- (void)logCoreAnalyticsMetrics;

@end
