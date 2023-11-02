
@interface MLItemSimilarityRecommender : MLModel <MLCompiledModelLoader, MLModelSpecificationLoader, MLModeling, MLSpecificationCompiler> {
    struct vector<unsigned long long, std::allocator<unsigned long long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _m_item_buffer;
    struct vector<std::pair<unsigned long long, double>, std::allocator<std::pair<unsigned long long, double>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<unsigned long long, double> *, std::allocator<std::pair<unsigned long long, double>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _m_item_heap;
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _m_item_invalid_mask;
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _m_item_predictions;
    struct vector<unsigned long long, std::allocator<unsigned long long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _m_items;
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _m_scores;
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  m_cached_model;
    NSString * m_item_data_feature_name;
    NSString * m_item_exclusion_feature_name;
    NSArray * m_item_integer_list;
    NSString * m_item_list_output_feature_name;
    NSDictionary * m_item_mapping;
    NSString * m_item_restriction_feature_name;
    NSString * m_item_score_output_feature_name;
    NSArray * m_item_string_list;
    NSData * m_model_data;
    unsigned long long  m_num_items;
    NSString * m_num_recommendations_feature_name;
}

@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;
@property (nonatomic, readonly) bool recordsPredictionEvent;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConcurrentSubmissions;

+ (id)compileSpecification:(void*)arg1 toArchive:(void*)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)compiledVersionForSpecification:(void*)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)loadModelFromCompiledArchive:(void*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (id)loadModelFromSpecificationWithCompilationOptions:(void*)arg1 options:(id)arg2 error:(id*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_itemForIndex:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_mapItemSequence:(id)arg1 dest:(void*)arg2 error:(id*)arg3;
- (const char *)modelData;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
