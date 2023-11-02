
@interface ETImagePreprocessor : NSObject {
    unsigned long long  bitsPerComponent;
    unsigned long long  bytesPerPixel;
    struct CGColorSpace { } * colorSpace;
    struct shared_ptr<Espresso::abstract_context> { 
        struct abstract_context {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  ctx;
    unsigned long long  currentSrcBufferSize;
    struct shared_ptr<Espresso::blob_cpu> { 
        struct blob_cpu {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  imageBlob;
    NSArray * imageShape;
    unsigned long long  nChannels;
    struct vimage2espresso_param { 
        float scale; 
        int center_mean; 
        int is_image_bgr; 
        int is_network_bgr; 
        float bias_r; 
        float bias_g; 
        float bias_b; 
        float bias_a; 
        int metal_output_plane; 
        unsigned int width; 
        unsigned int height; 
        unsigned int rowbytes; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*scaleXY; 
    }  param;
    struct vImage_Buffer { 
        void *data; 
        unsigned long long height; 
        unsigned long long width; 
        unsigned long long rowBytes; 
    }  srcBuffer;
    struct vImage_Buffer { 
        void *data; 
        unsigned long long height; 
        unsigned long long width; 
        unsigned long long rowBytes; 
    }  targetBuffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImagePreprocessParams:(id)arg1;
- (void)loadSrcBufferWithCGImage:(struct CGImage { }*)arg1;
- (void)preprocess;
- (id)tensorWithCGImage:(struct CGImage { }*)arg1;
- (id)tensorWithPath:(id)arg1;

@end
