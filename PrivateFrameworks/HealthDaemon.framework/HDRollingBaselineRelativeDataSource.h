
@interface HDRollingBaselineRelativeDataSource : NSObject {
    HDRollingBaselineRelativeQuantityCalculator * _baselineCalculator;
    _HDRollingBaselineRelativeDataSourceBaselineCompatibilityMap * _canonicalSourceMap;
    NSDate * _currentDate;
    struct unordered_map<NSString *, std::deque<HDRawQuantitySample>, HDStringHash, HDStringEqual, std::allocator<std::pair<NSString *const, std::deque<HDRawQuantitySample>>>> { 
        struct __hash_table<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringHash, HDStringEqual>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringEqual, HDStringHash>, std::allocator<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringHash, HDStringEqual>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, std::deque<HDRawQuantitySample>>, HDStringEqual, HDStringHash>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _prefetchedSamplesByBaselineCompatibilityID;
    HDProfile * _profile;
    HKQuantityType * _quantityType;
    double  _queryPrefetchWindow;
    id /* block */  _shouldContinueHandler;
}

@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, copy) id /* block */ shouldContinueHandler;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_couldSampleEverResolveToDeterminateValue:(struct HDRawQuantitySample { double x1; double x2; double x3; long long x4; bool x5; bool x6; })arg1;
- (id)_predicateForSamplesStartingWithinDateInterval:(id)arg1 sourceID:(long long)arg2 isIntervalStartDateInclusive:(bool)arg3;
- (bool)_primeBaselineCalculatorWithPriorSamplesForSample:(struct HDRawQuantitySample { double x1; double x2; double x3; long long x4; bool x5; bool x6; })arg1 baselineCompatibilityID:(id)arg2 error:(id*)arg3;
- (bool)_shouldContinueWithError:(id*)arg1;
- (bool)_supplementCalculatorWithSubsequentSamplesForSample:(struct HDRawQuantitySample { double x1; double x2; double x3; long long x4; bool x5; bool x6; })arg1 baselineCompatibilityID:(id)arg2 error:(id*)arg3;
- (id)computeRelativeValueForSample:(struct HDRawQuantitySample { double x1; double x2; double x3; long long x4; bool x5; bool x6; })arg1 error:(id*)arg2;
- (id)initWithProfile:(id)arg1 quantityType:(id)arg2 configuration:(id)arg3 queryPrefetchWindow:(double)arg4 currentDate:(id)arg5;
- (id)profile;
- (void)setShouldContinueHandler:(id /* block */)arg1;
- (id /* block */)shouldContinueHandler;

@end
