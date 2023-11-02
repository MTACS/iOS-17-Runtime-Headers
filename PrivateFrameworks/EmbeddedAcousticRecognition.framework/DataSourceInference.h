
@interface DataSourceInference : NSObject <ETDataProvider> {
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _contextData;
    NSString * _contextKey;
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
- (id)initWithLength:(unsigned long long)arg1 contextKey:(id)arg2 targetKey:(id)arg3;
- (unsigned long long)numberOfDataPoints;
- (void)setVectorsWithProcessor:(id)arg1;

@end
