
@interface MTLDebugHeap : MTLToolsHeap <MTLDebugResourcePurgeable> {
    MTLDebugDevice * _debugDevice;
    bool  _purgeableStateHasBeenSet;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _purgeableStateToken;
}

@property (nonatomic, readonly) MTLDebugDevice *debugDevice;

- (id)_newDebugAccelerationStructure:(id)arg1;
- (id)debugDevice;
- (id)initWithHeap:(id)arg1 device:(id)arg2;
- (void)lockPurgeableState;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (id)newAccelerationStructureWithDescriptor:(id)arg1;
- (id)newAccelerationStructureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2 resourceIndex:(unsigned long long)arg3;
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (bool)purgeableStateValidForRendering;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)unlockPurgeableState;
- (void)validateHeapResourceOptions:(unsigned long long)arg1 isTexture:(bool)arg2 isIOSurface:(bool)arg3 context:(struct _MTLMessageContext { long long x1; char *x2; unsigned int x3; id x4; long long x5; id x6; char *x7; }*)arg4;
- (void)validateHeapTextureUsage:(unsigned long long)arg1 options:(unsigned long long)arg2 context:(struct _MTLMessageContext { long long x1; char *x2; unsigned int x3; id x4; long long x5; id x6; char *x7; }*)arg3;
- (void)validateOffset:(unsigned long long)arg1 withRequirements:(struct { unsigned long long x1; unsigned long long x2; })arg2;
- (void)validatePixelFormatWithHeap:(unsigned long long)arg1 context:(struct _MTLMessageContext { long long x1; char *x2; unsigned int x3; id x4; long long x5; id x6; char *x7; }*)arg2;
- (void)validateRaytracingHeap;
- (void)validateTextureAtomicFlags:(id)arg1 context:(struct _MTLMessageContext { long long x1; char *x2; unsigned int x3; id x4; long long x5; id x6; char *x7; }*)arg2;

@end
