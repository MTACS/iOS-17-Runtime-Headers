
@interface _EARLanguageModel : NSObject {
    struct vector<std::pair<id<_EARLanguageModelDataSource>, float>, std::allocator<std::pair<id<_EARLanguageModelDataSource>, float>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<id<_EARLanguageModelDataSource>, float> *, std::allocator<std::pair<id<_EARLanguageModelDataSource>, float>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _dataSources;
    float  _totalWeight;
}

@property (nonatomic, readonly) float totalWeight;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDataSource:(id)arg1 weight:(float)arg2;
- (void)enumerateDataSourcesAndWeightsUsingBlock:(id /* block */)arg1;
- (float)totalWeight;

@end
