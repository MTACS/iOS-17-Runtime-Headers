
@interface EspressoDataFrameExecutor : NSObject {
    NSArray * _outputMatchingBuffers;
    int  _use_cvpixelbuffer;
    struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> { 
        struct __CVBuffer {} **__begin_; 
        struct __CVBuffer {} **__end_; 
        struct __compressed_pair<__CVBuffer **, std::allocator<__CVBuffer *>> { 
            struct __CVBuffer {} **__value_; 
        } __end_cap_; 
    }  pixelbuffers_to_release;
    struct vector<void *, std::allocator<void *>> { 
        void **__begin_; 
        void **__end_; 
        struct __compressed_pair<void **, std::allocator<void *>> { 
            void **__value_; 
        } __end_cap_; 
    }  pointers_to_free;
}

@property (retain) NSArray *outputMatchingBuffers;
@property (nonatomic) int use_cvpixelbuffer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)bindInput:(id)arg1 fromImageAttachment:(id)arg2 toNetwork:(struct { void *x1; int x2; })arg3;
- (int)bindInput:(id)arg1 fromTensorAttachment:(id)arg2 toNetwork:(struct { void *x1; int x2; })arg3;
- (int)bindInputsFromFrame:(id)arg1 toNetwork:(struct { void *x1; int x2; })arg2;
- (int)bindOutputsFromFrame:(id)arg1 toNetwork:(struct { void *x1; int x2; })arg2;
- (int)bindOutputsFromFrame:(id)arg1 toNetwork:(struct { void *x1; int x2; })arg2 executionStatus:(int)arg3;
- (int)bindOutputsFromFrame:(id)arg1 toNetwork:(struct { void *x1; int x2; })arg2 referenceNetwork:(struct { void *x1; int x2; })arg3;
- (void)dealloc;
- (void)freeTemporaryResources;
- (id)outputMatchingBuffers;
- (void)setOutputMatchingBuffers:(id)arg1;
- (void)setUse_cvpixelbuffer:(int)arg1;
- (bool)useCVPixelBuffers;
- (bool)useCVPixelBuffersForOutputs:(bool)arg1;
- (int)use_cvpixelbuffer;

@end
