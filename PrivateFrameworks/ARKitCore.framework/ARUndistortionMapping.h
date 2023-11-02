
@interface ARUndistortionMapping : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct vImageMapping { } * _mapping;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _mappingU;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _mappingV;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)createVImageMappingIfNeededForImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)dealloc;
- (id)initWithImageSize:(struct CGSize { double x1; double x2; })arg1;

@end
