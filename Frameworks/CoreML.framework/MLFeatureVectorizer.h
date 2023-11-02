
@interface MLFeatureVectorizer : MLModel <MLModelSpecificationLoader> {
    NSArray * _columnNameEncoding;
    NSArray * _dimensionEncoding;
    NSArray * _output_array_shape;
    struct vector<std::pair<unsigned long, unsigned long>, std::allocator<std::pair<unsigned long, unsigned long>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<unsigned long, unsigned long> *, std::allocator<std::pair<unsigned long, unsigned long>>> { 
            void *__value_; 
        } __end_cap_; 
    }  index_mapping;
}

@property (nonatomic, readonly) NSArray *columnNameEncoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *dimensionEncoding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)columnNameEncoding;
- (id)dimensionEncoding;
- (id)initWith:(id)arg1 dimensionEncoding:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)vectorizeOneHotEncoderDict:(id)arg1 index:(unsigned long long)arg2 error:(id*)arg3;

@end
