
@interface MTLDebugBuffer : MTLToolsBuffer <MTLDebugResourcePurgeable> {
    MTLDebugResource * _common;
    MTLDebugDevice * _debugDevice;
    NSMutableArray * _debugMarkers;
    bool  _isContentExposedToCPU;
    unsigned long long  _length;
    const void * _pointer;
    bool  _purgeableStateHasBeenSet;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _purgeableStateToken;
}

@property (nonatomic, readonly) MTLDebugResource *common;
@property (nonatomic) bool isContentExposedToCPU;
@property (nonatomic, readonly) const void*pointer;

- (void)addDebugMarker:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)common;
- (void*)contents;
- (id)copyDebugMarkers;
- (void)dealloc;
- (id)description;
- (void)didModifyRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasResource:(id)arg1;
- (unsigned long long)gpuAddress;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4;
- (bool)isContentExposedToCPU;
- (unsigned long long)length;
- (void)lockPurgeableState;
- (void)makeAliasable;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (unsigned long long)parentGPUAddress;
- (unsigned long long)parentGPUSize;
- (const void*)pointer;
- (bool)purgeableStateValidForRendering;
- (void)removeAllDebugMarkers;
- (unsigned long long)resourceIndex;
- (void)setIsContentExposedToCPU:(bool)arg1;
- (void)setParentGPUAddress:(unsigned long long)arg1;
- (void)setParentGPUSize:(unsigned long long)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)unlockPurgeableState;

@end
