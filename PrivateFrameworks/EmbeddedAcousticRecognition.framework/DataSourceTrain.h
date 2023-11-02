
@interface DataSourceTrain : NSObject <ETDataProvider> {
    unsigned long long  _batchSize;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _contextData;
    NSString * _contextKey;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _maskData;
    NSString * _maskKey;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _noiseData;
    NSString * _noiseKey;
    unsigned long long  _noiseSize;
    unsigned long long  _numBatches;
    NoiseSampler * _sampler;
    unsigned long long  _sequenceLength;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _targetData;
    NSString * _targetKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithNumDataPoints:(unsigned long long)arg1 sequenceLength:(unsigned long long)arg2 noiseSize:(unsigned long long)arg3 batchSize:(unsigned long long)arg4 vocabSize:(unsigned long long)arg5 contextKey:(id)arg6 targetKey:(id)arg7 maskKey:(id)arg8 noiseKey:(id)arg9;
- (unsigned long long)numberOfDataPoints;
- (void)setNumBatches:(int)arg1;
- (void)setVectorsWithProcessor:(id)arg1;

@end
