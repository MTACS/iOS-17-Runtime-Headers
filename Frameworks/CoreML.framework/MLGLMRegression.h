
@interface MLGLMRegression : MLRegressor <MLModelSpecificationLoader> {
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  intercept;
    struct shared_ptr<CoreML::Specification::Model> { 
        struct Model {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_spec;
    int  postEvalTransForm;
    struct vector<std::vector<double>, std::allocator<std::vector<double>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>> { 
            void *__value_; 
        } __end_cap_; 
    }  weights;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)loadModelFromSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithLRSpec:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)initWithSpecification:(void*)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
