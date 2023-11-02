
@interface ETImageDescriptorExtractor : NSObject {
    float  _brightness_range;
    float  _contrast_range;
    void * _ctx;
    unsigned long long  _descriptors_file_cache_size;
    unsigned long long  _descriptors_mem_cache_size;
    int  _doBatchnormTuning;
    float  _horizontal_flip;
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
    }  _inputBlob;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
            struct __rep { 
                union { 
                    struct __long { 
                        char *__data_; 
                        unsigned long long __size_; 
                        unsigned int __cap_ : 63; 
                        unsigned int __is_long_ : 1; 
                    } __l; 
                    struct __short { 
                        BOOL __data_[23]; 
                        unsigned char __padding_[0]; 
                        unsigned int __size_ : 7; 
                        unsigned int __is_long_ : 1; 
                    } __s; 
                    struct __raw { 
                        unsigned long long __words[3]; 
                    } __r; 
                } ; 
            } __value_; 
        } __r_; 
    }  _inputName;
    unsigned long long * _inputShape;
    int  _nAugmentations;
    struct { 
        void *plan; 
        int network_index; 
    }  _net;
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
    }  _outputBlob;
    void * _plan;
    float  _rotation_range;
    float  _shear_range;
    unsigned long long  _targetHeight;
    unsigned long long  _targetWidth;
    float  _zoom_range;
}

@property float brightness_range;
@property float contrast_range;
@property unsigned long long descriptors_file_cache_size;
@property unsigned long long descriptors_mem_cache_size;
@property int doBatchnormTuning;
@property float horizontal_flip;
@property int nAugmentations;
@property float rotation_range;
@property float shear_range;
@property float zoom_range;

+ (id)VisionSceneNet_iOS10_Extractor;
+ (id)VisionSmartCamNet_iOS11_Extractor;
+ (id)inception_v3_Extractor;
+ (id)passthroughExtractor;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)brightness_range;
- (float)contrast_range;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })cropResizeInputImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (unsigned long long)descriptors_file_cache_size;
- (unsigned long long)descriptors_mem_cache_size;
- (int)doBatchnormTuning;
- (float*)extractDescriptorForDataPoint:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1 freeWhenDone:(bool)arg2;
- (void)extractForDataPoint:(id)arg1;
- (float)horizontal_flip;
- (id)initWithNetwork:(id)arg1;
- (int)nAugmentations;
- (int)numberOfChannels;
- (float)rotation_range;
- (void)setBrightness_range:(float)arg1;
- (void)setContrast_range:(float)arg1;
- (void)setDescriptors_file_cache_size:(unsigned long long)arg1;
- (void)setDescriptors_mem_cache_size:(unsigned long long)arg1;
- (void)setDoBatchnormTuning:(int)arg1;
- (void)setHorizontal_flip:(float)arg1;
- (void)setNAugmentations:(int)arg1;
- (void)setRotation_range:(float)arg1;
- (void)setShear_range:(float)arg1;
- (void)setZoom_range:(float)arg1;
- (float)shear_range;
- (float)zoom_range;

@end
