
@interface CSUMetricOperatingPointCurve : NSObject {
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _metrics;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _operatingPoints;
}

@property (nonatomic, readonly) long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)count;
- (void)enumerateUsingBlock:(id /* block */)arg1;
- (id)initWithMetricToOperatingPointMap:(const void*)arg1;

@end
