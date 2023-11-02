
@interface CVNLPCaptionEncoderTransformer : CVNLPCaptionEncoder {
    struct { 
        void *data; 
        void *reserved; 
        unsigned long long dim[4]; 
        unsigned long long stride[4]; 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long channels; 
        unsigned long long batch_number; 
        unsigned long long sequence_length; 
        unsigned long long stride_width; 
        unsigned long long stride_height; 
        unsigned long long stride_channels; 
        unsigned long long stride_batch_number; 
        unsigned long long stride_sequence_length; 
        int storage_type; 
    }  attFeatsBlob;
    void * encoderCtx;
    struct vector<std::string, std::allocator<std::string>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::string *, std::allocator<std::string>> { 
            void *__value_; 
        } __end_cap_; 
    }  encoderInputNames;
    struct { 
        void *plan; 
        int network_index; 
    }  encoderNet;
    void * encoderPlan;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)computeCaptionForImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 outputs:(id*)arg2;
- (void)computeCaptionForImageImpl:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1 outputs:(id*)arg2;
- (void)computeCaptionForPixelBuffer:(struct __CVBuffer { }*)arg1 outputs:(id*)arg2;
- (void)computeCaptionForPixelBufferImpl:(struct __CVBuffer { }*)arg1 outputs:(id*)arg2;
- (void)computeCaptionForVideoPixelBuffer:(void*)arg1 outputs:(id*)arg2;
- (void)computeCaptionForVideoPixelBufferImpl:(void*)arg1 outputs:(id*)arg2;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 runTimeParams:(id)arg2;

@end
