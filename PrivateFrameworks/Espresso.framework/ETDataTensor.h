
@interface ETDataTensor : NSObject {
    struct vector<std::shared_ptr<unsigned char>, std::allocator<std::shared_ptr<unsigned char>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::shared_ptr<unsigned char> *, std::allocator<std::shared_ptr<unsigned char>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _allocatedImageData;
    struct shared_ptr<Espresso::blob<float, 4>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _blob;
    NSArray * _dataArray;
    void * _dataPointer;
    struct float_buffer_t { 
        float *ptr; 
        unsigned long long size; 
        bool free_when_done; 
    }  _float_buffer;
    struct vImage_Buffer { 
        void *data; 
        unsigned long long height; 
        unsigned long long width; 
        unsigned long long rowBytes; 
    }  _imageBuffer;
    NSNumber * _maxNumberOfElements;
    NSArray * _shape;
    NSArray * _strides;
    unsigned long long  _type;
}

@property /* Warning: unhandled struct encoding: '{vector<std::shared_ptr<unsigned char>' */ struct  allocatedImageData; /* unknown property attribute:  std::allocator<std::shared_ptr<unsigned char>>>=^v}} */
@property /* Warning: unhandled struct encoding: '{shared_ptr<Espresso::blob<float' */ struct  blob; /* unknown property attribute:  4>>=^v^{__shared_weak_count}} */
@property (nonatomic, retain) NSArray *dataArray;
@property (nonatomic) void*dataPointer;
@property struct float_buffer_t { float *x1; unsigned long long x2; bool x3; } float_buffer;
@property struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } imageBuffer;
@property (nonatomic, retain) NSNumber *maxNumberOfElements;
@property (nonatomic, retain) NSArray *shape;
@property (nonatomic, retain) NSArray *strides;
@property (nonatomic) unsigned long long type;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vector<std::shared_ptr<unsigned char>, std::allocator<std::shared_ptr<unsigned char>>> { void *x1; void *x2; struct __compressed_pair<std::shared_ptr<unsigned char> *, std::allocator<std::shared_ptr<unsigned char>>> { void *x_3_1_1; } x3; })allocatedImageData;
- (struct shared_ptr<Espresso::blob<float, 4>> { void *x1; struct __shared_weak_count {} *x2; })blob;
- (id)dataArray;
- (void*)dataPointer;
- (id)description;
- (struct float_buffer_t { float *x1; unsigned long long x2; bool x3; })float_buffer;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })imageBuffer;
- (id)initWithBlobContainer:(struct shared_ptr<Espresso::abstract_blob_container> { struct abstract_blob_container {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)initWithBlobContainer:(struct shared_ptr<Espresso::abstract_blob_container> { struct abstract_blob_container {} *x1; struct __shared_weak_count {} *x2; })arg1 directBind:(bool)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 imageParameters:(id)arg2 error:(id*)arg3;
- (id)initWithData:(void*)arg1 type:(unsigned long long)arg2 shape:(id)arg3 strides:(id)arg4;
- (id)maxNumberOfElements;
- (void)setAllocatedImageData:(struct vector<std::shared_ptr<unsigned char>, std::allocator<std::shared_ptr<unsigned char>>> { void *x1; void *x2; struct __compressed_pair<std::shared_ptr<unsigned char> *, std::allocator<std::shared_ptr<unsigned char>>> { void *x_3_1_1; } x3; })arg1;
- (void)setBlob:(struct shared_ptr<Espresso::blob<float, 4>> { void *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setDataArray:(id)arg1;
- (void)setDataPointer:(void*)arg1;
- (void)setFloat_buffer:(struct float_buffer_t { float *x1; unsigned long long x2; bool x3; })arg1;
- (void)setImageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)setMaxNumberOfElements:(id)arg1;
- (void)setShape:(id)arg1;
- (void)setStrides:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)shape;
- (id)strides;
- (unsigned long long)type;

@end
