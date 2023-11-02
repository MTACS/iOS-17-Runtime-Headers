
@interface MTLDebugTexture : MTLToolsTexture <MTLDebugResourcePurgeable> {
    struct unordered_map<SubView, unsigned long, SubView::hash_t, SubView::equal_t, std::allocator<std::pair<const SubView, unsigned long>>> { 
        struct __hash_table<std::__hash_value_type<SubView, unsigned long>, std::__unordered_map_hasher<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::hash_t, SubView::equal_t>, std::__unordered_map_equal<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::equal_t, SubView::hash_t>, std::allocator<std::__hash_value_type<SubView, unsigned long>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<SubView, unsigned long>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::hash_t, SubView::equal_t>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<SubView, std::__hash_value_type<SubView, unsigned long>, SubView::equal_t, SubView::hash_t>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _activeSubViews;
    unsigned long long  _bytesPerImage;
    unsigned long long  _bytesPerRow;
    MTLDebugResource * _common;
    MTLDebugDevice * _debugDevice;
    bool  _isLinearTexture;
    unsigned long long  _offset;
    struct MTLPixelFormatInfo { 
        char *name; 
        unsigned int flags; 
        unsigned long long castClass; 
        union { 
            struct MTLNormalPixelFormatInfo { 
                unsigned long long pixelBytes; 
                unsigned char componentCount; 
                unsigned char alignment; 
                unsigned long long pixelBytesRender; 
                unsigned long long pixelBytesRenderMSAA; 
            } normal; 
            struct MTLCompressedPixelFormatInfo { 
                unsigned long long blockBytes; 
                unsigned long long blockWidth; 
                unsigned long long blockHeight; 
                unsigned long long blockDepth; 
            } compressed; 
        } type; 
    }  _pixelFormatInfo;
    unsigned long long  _plane;
    bool  _purgeableStateHasBeenSet;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _purgeableStateToken;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _subViewUseLock;
    unsigned long long  _usageRequired;
}

@property (nonatomic, readonly) unsigned long long bytesPerImage;
@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) MTLDebugResource *common;
@property (nonatomic, readonly) bool isLinearTexture;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) unsigned long long plane;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addUsedRenderTarget:(unsigned long long)arg1 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)bytesPerImage;
- (unsigned long long)bytesPerRow;
- (id)common;
- (void)dealloc;
- (id)description;
- (bool)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasResource:(id)arg1;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 mipmapLevel:(unsigned long long)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 buffer:(id)arg3 offset:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 buffer:(id)arg3 offset:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 plane:(unsigned long long)arg3;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4;
- (id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4 textureType:(unsigned long long)arg5 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg7;
- (id)initWithBaseTexture:(id)arg1 heap:(id)arg2 device:(id)arg3;
- (bool)isLinearTexture;
- (void)lockPurgeableState;
- (void)makeAliasable;
- (id)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 resourceIndex:(unsigned long long)arg5;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 swizzle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg5;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 swizzle:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })arg5 resourceIndex:(unsigned long long)arg6;
- (unsigned long long)offset;
- (unsigned long long)plane;
- (bool)purgeableStateValidForRendering;
- (void)removeUsedRenderTarget:(unsigned long long)arg1 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)replaceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (void)replaceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4;
- (bool)requireUsage:(unsigned long long)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)unlockPurgeableState;

@end
