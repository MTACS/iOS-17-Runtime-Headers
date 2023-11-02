
@interface MDLBufferViewAllocator : NSObject <NSSecureCoding> {
    struct vector<bool, std::allocator<bool>> { 
        unsigned long long *__begin_; 
        unsigned long long __size_; 
        struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { 
            unsigned long long __value_; 
        } __cap_alloc_; 
    }  _owned;
    struct vector<long, std::allocator<long>> { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long *, std::allocator<long>> { 
            long long *__value_; 
        } __end_cap_; 
    }  _regionIndices;
    struct vector<__IOSurface *, std::allocator<__IOSurface *>> { 
        struct __IOSurface {} **__begin_; 
        struct __IOSurface {} **__end_; 
        struct __compressed_pair<__IOSurface **, std::allocator<__IOSurface *>> { 
            struct __IOSurface {} **__value_; 
        } __end_cap_; 
    }  _sharedRegions;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)decodeBufferWithCoder:(id)arg1 forKey:(id)arg2;
- (id)decodeBuffersWithCoder:(id)arg1 forKey:(id)arg2;
- (void)encodeBuffer:(id)arg1 withCoder:(id)arg2 forKey:(id)arg3;
- (void)encodeBuffers:(id)arg1 withCoder:(id)arg2 forKey:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSharedRegionsNoCopy:(id)arg1;
- (id)newBufferViewAtRegionIndex:(long long)arg1;
- (id)newBufferViewAtRegionIndex:(long long)arg1 length:(long long)arg2 offset:(long long)arg3;

@end
