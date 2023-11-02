
@interface HDStatisticsCollectionCalculatorAttenuatedDataSource : HDStatisticsCollectionCalculatorDefaultDataSource {
    HDQuantitySampleAttenuationEngine * _attenuationEngine;
    HDQuantitySampleAttenuationProvider * _attenuationProvider;
    struct deque<HDQuantitySampleAttenuationEngineSample, std::allocator<HDQuantitySampleAttenuationEngineSample>> { 
        struct __split_buffer<HDQuantitySampleAttenuationEngineSample *, std::allocator<HDQuantitySampleAttenuationEngineSample *>> { 
            struct { /* ? */ } **__first_; 
            struct { /* ? */ } **__begin_; 
            struct { /* ? */ } **__end_; 
            struct __compressed_pair<HDQuantitySampleAttenuationEngineSample **, std::allocator<HDQuantitySampleAttenuationEngineSample *>> { 
                struct { /* ? */ } **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::allocator<HDQuantitySampleAttenuationEngineSample>> { 
            unsigned long long __value_; 
        } __size_; 
    }  _attenuationSamplesWindow;
}

@property (nonatomic, readonly) HDQuantitySampleAttenuationEngine *attenuationEngine;
@property (nonatomic, readonly) HDQuantitySampleAttenuationProvider *attenuationProvider;
@property (nonatomic) /* Warning: unhandled struct encoding: '{deque<HDQuantitySampleAttenuationEngineSample' */ struct  attenuationSamplesWindow; /* unknown property attribute:  std::allocator<HDQuantitySampleAttenuationEngineSample>>=Q}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_appendToAttenuationSamplesWindowUsingSourceSample:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg1 attenuatedSample:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg2;
- (void)_attenuationSamplesWindowAdvanceToSample:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg1;
- (bool)_attenuationSamplesWindowContainsSample:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg1;
- (bool)_attenuationSamplesWindowContainsSampleStart:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg1;
- (struct queue<HDQuantitySampleAttenuationEngineSample, std::deque<HDQuantitySampleAttenuationEngineSample>> { struct deque<HDQuantitySampleAttenuationEngineSample, std::allocator<HDQuantitySampleAttenuationEngineSample>> { struct __split_buffer<HDQuantitySampleAttenuationEngineSample *, std::allocator<HDQuantitySampleAttenuationEngineSample *>> { struct { /* ? */ } **x_1_2_1; struct { /* ? */ } **x_1_2_2; struct { /* ? */ } **x_1_2_3; struct __compressed_pair<HDQuantitySampleAttenuationEngineSample **, std::allocator<HDQuantitySampleAttenuationEngineSample *>> { struct { /* ? */ } **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; struct __compressed_pair<unsigned long, std::allocator<HDQuantitySampleAttenuationEngineSample>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })_extractAttenuatedSamplesFrom:(struct { double x1; double x2; double x3; bool x4; long long x5; })arg1;
- (id)attenuationEngine;
- (id)attenuationProvider;
- (struct deque<HDQuantitySampleAttenuationEngineSample, std::allocator<HDQuantitySampleAttenuationEngineSample>> { struct __split_buffer<HDQuantitySampleAttenuationEngineSample *, std::allocator<HDQuantitySampleAttenuationEngineSample *>> { struct { /* ? */ } **x_1_1_1; struct { /* ? */ } **x_1_1_2; struct { /* ? */ } **x_1_1_3; struct __compressed_pair<HDQuantitySampleAttenuationEngineSample **, std::allocator<HDQuantitySampleAttenuationEngineSample *>> { struct { /* ? */ } **x_4_2_1; } x_1_1_4; } x1; unsigned long long x2; struct __compressed_pair<unsigned long, std::allocator<HDQuantitySampleAttenuationEngineSample>> { unsigned long long x_3_1_1; } x3; })attenuationSamplesWindow;
- (bool)collectionCalculator:(id)arg1 queryForInterval:(id)arg2 error:(id*)arg3 sampleHandler:(id /* block */)arg4 mergeHandler:(id /* block */)arg5;
- (id)initForProfile:(id)arg1 quantityType:(id)arg2 predicate:(id)arg3 restrictedSourceEntities:(id)arg4 attenuationType:(id)arg5;
- (void)setAttenuationSamplesWindow:(struct deque<HDQuantitySampleAttenuationEngineSample, std::allocator<HDQuantitySampleAttenuationEngineSample>> { struct __split_buffer<HDQuantitySampleAttenuationEngineSample *, std::allocator<HDQuantitySampleAttenuationEngineSample *>> { struct { /* ? */ } **x_1_1_1; struct { /* ? */ } **x_1_1_2; struct { /* ? */ } **x_1_1_3; struct __compressed_pair<HDQuantitySampleAttenuationEngineSample **, std::allocator<HDQuantitySampleAttenuationEngineSample *>> { struct { /* ? */ } **x_4_2_1; } x_1_1_4; } x1; unsigned long long x2; struct __compressed_pair<unsigned long, std::allocator<HDQuantitySampleAttenuationEngineSample>> { unsigned long long x_3_1_1; } x3; })arg1;

@end
