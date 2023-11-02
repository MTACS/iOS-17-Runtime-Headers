
@interface MLLocalOutlierFactor : MLModel {
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _cachedKDistances;
    <MLNearestNeighborsIndex> * _index;
    unsigned long long  _numberOfDimensions;
    unsigned long long  _numberOfNeighbors;
    MLParameterContainer * _parameterContainer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)computeLOFForQueryPoint:(id)arg1;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x1; void *x2; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x_3_1_1; } x3; })findNearestNeighborsToIndex:(unsigned long long)arg1;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x1; void *x2; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x_3_1_1; } x3; })findNearestNeighborsToQueryPoint:(const void*)arg1;
- (id)initWithKNearestNeighborsModelAtURL:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)inputMultiArray:(id)arg1 error:(id*)arg2;
- (float)kDistanceToIndex:(unsigned long long)arg1;
- (double)localReachabilityDensityForIndex:(unsigned long long)arg1;
- (double)localReachabilityDensityForQeuryPoint:(const void*)arg1;
- (double)localReachabilityDensityOfNeighbors:(const void*)arg1;
- (id)parameterValueForKey:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)updateToValidDistance:(void*)arg1;

@end
