
@interface EspressoANEIOSurface : NSObject {
    struct shared_ptr<Espresso::blob<unsigned char, 1>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _external_storage_blob_for_aliasing_mem;
    unsigned int  _pixelFormat;
    bool  ane_surface_use_cvpixelbuffer;
    bool  created_with_lazy_iosurface;
    unsigned long long  height;
    struct vector<Espresso::ANERuntimeEngine::surface_and_buffer, std::allocator<Espresso::ANERuntimeEngine::surface_and_buffer>> { 
        struct surface_and_buffer {} *__begin_; 
        struct surface_and_buffer {} *__end_; 
        struct __compressed_pair<Espresso::ANERuntimeEngine::surface_and_buffer *, std::allocator<Espresso::ANERuntimeEngine::surface_and_buffer>> { 
            struct surface_and_buffer {} *__value_; 
        } __end_cap_; 
    }  multiple_buffer_io_surfaces;
    NSDictionary * params_dict;
    unsigned long long  rowBytes;
    NSSet * valid_pixel_formats;
    unsigned long long  width;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{shared_ptr<Espresso::blob<unsigned char' */ struct  external_storage_blob_for_aliasing_mem; /* unknown property attribute:  1>>=^v^{__shared_weak_count}} */
@property (nonatomic, readonly) unsigned int pixelFormat;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)ane_io_surfaceForMultiBufferFrame:(unsigned long long)arg1;
- (bool)checkIfMatches:(struct __CVBuffer { }*)arg1;
- (bool)checkIfMatchesIOSurface:(struct __IOSurface { }*)arg1;
- (void)cleanup;
- (struct __IOSurface { }*)createIOSurfaceWithExtraProperties:(id)arg1;
- (void)doNonLazyAllocation:(id)arg1;
- (struct shared_ptr<Espresso::blob<unsigned char, 1>> { void *x1; struct __shared_weak_count {} *x2; })external_storage_blob_for_aliasing_mem;
- (id)initWithIOSurfaceProperties:(id)arg1 andPixelFormats:(id)arg2;
- (struct __IOSurface { }*)ioSurfaceForMultiBufferFrame:(unsigned long long)arg1;
- (struct __IOSurface { }*)ioSurfaceForMultiBufferFrameNoLazyForTesting:(unsigned long long)arg1;
- (void)lazilyAutoCreateSurfaceForFrame:(unsigned long long)arg1;
- (id)metalBufferWithDevice:(id)arg1 multiBufferFrame:(unsigned long long)arg2;
- (unsigned long long)nFrames;
- (unsigned int)pixelFormat;
- (void)resizeForMultipleAsyncBuffers:(unsigned long long)arg1;
- (void)restoreInternalStorage:(unsigned long long)arg1;
- (void)restoreInternalStorageForAllMultiBufferFrames;
- (void)setExternalStorage:(unsigned long long)arg1 ioSurface:(struct __IOSurface { }*)arg2;
- (void)setExternal_storage_blob_for_aliasing_mem:(struct shared_ptr<Espresso::blob<unsigned char, 1>> { void *x1; struct __shared_weak_count {} *x2; })arg1;

@end
