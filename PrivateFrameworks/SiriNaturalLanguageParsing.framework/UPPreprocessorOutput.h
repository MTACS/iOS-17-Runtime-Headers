
@interface UPPreprocessorOutput : NSObject {
    struct UPGenericTensor { 
        struct vector<unsigned long, std::allocator<unsigned long>> { 
            unsigned long long *__begin_; 
            unsigned long long *__end_; 
            struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
                unsigned long long *__value_; 
            } __end_cap_; 
        } shape; 
        struct vector<float, std::allocator<float>> { 
            float *__begin_; 
            float *__end_; 
            struct __compressed_pair<float *, std::allocator<float>> { 
                float *__value_; 
            } __end_cap_; 
        } data; 
    }  _embeddingsTensor;
    struct vector<nl_featurization::Token, std::allocator<nl_featurization::Token>> { 
        struct Token {} *__begin_; 
        struct Token {} *__end_; 
        struct __compressed_pair<nl_featurization::Token *, std::allocator<nl_featurization::Token>> { 
            struct Token {} *__value_; 
        } __end_cap_; 
    }  _outputTokens;
    struct UPGenericTensor { 
        struct vector<unsigned long, std::allocator<unsigned long>> { 
            unsigned long long *__begin_; 
            unsigned long long *__end_; 
            struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
                unsigned long long *__value_; 
            } __end_cap_; 
        } shape; 
        struct vector<float, std::allocator<float>> { 
            float *__begin_; 
            float *__end_; 
            struct __compressed_pair<float *, std::allocator<float>> { 
                float *__value_; 
            } __end_cap_; 
        } data; 
    }  _spanLabelsTensor;
}

@property (readonly) void*embeddingsTensor;
@property (readonly) void*outputTokens;
@property (readonly) void*spanLabelsTensor;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void*)embeddingsTensor;
- (id)initWithEmbeddingsTensor:(struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_1_1; unsigned long long *x_1_1_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_2_1; } x_1_1_3; } x1; struct vector<float, std::allocator<float>> { float *x_2_1_1; float *x_2_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_2_1_3; } x2; })arg1 spanLabelsTensor:(struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_1_1; unsigned long long *x_1_1_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_2_1; } x_1_1_3; } x1; struct vector<float, std::allocator<float>> { float *x_2_1_1; float *x_2_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_2_1_3; } x2; })arg2 outputTokens:(struct vector<nl_featurization::Token, std::allocator<nl_featurization::Token>> { struct Token {} *x1; struct Token {} *x2; struct __compressed_pair<nl_featurization::Token *, std::allocator<nl_featurization::Token>> { struct Token {} *x_3_1_1; } x3; })arg3;
- (void*)outputTokens;
- (void*)spanLabelsTensor;

@end
