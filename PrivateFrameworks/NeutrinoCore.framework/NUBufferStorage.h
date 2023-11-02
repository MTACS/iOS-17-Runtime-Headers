
@interface NUBufferStorage : _NUAbstractBufferStorage <NUBuffer, NUMutableBuffer, NUPurgeableStorage> {
    void * _bytes;
    long long  _length;
    long long  _purgeLevel;
    bool  _purgeable;
    long long  _rowBytes;
    _Atomic int  _useCount;
}

@property (nonatomic, readonly) const void*bytes;
@property (retain) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*mutableBytes;
@property (nonatomic, readonly) long long rowBytes;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;
@property (readonly) long long sizeInBytes;
@property (readonly) Class superclass;
@property (readonly) NURegion *validRegion;

- (void*)_allocateMemory:(long long)arg1;
- (void)_deallocateMemory;
- (int)_fetchPurgeState:(int*)arg1;
- (int)_purgeLevelToOSValue:(long long)arg1;
- (id)_purgeStateDescription;
- (void)adjustPurgeLevel:(long long)arg1;
- (const void*)bytes;
- (void)dealloc;
- (bool)decrementUseCount;
- (id)description;
- (void)incrementUseCount;
- (id)initWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2;
- (bool)isInUse;
- (bool)isPurgeable;
- (bool)isPurged;
- (bool)isShared;
- (bool)makeNonPurgeable;
- (void)makePurgeable;
- (void*)mutableBytes;
- (id)newRenderDestination;
- (long long)purgeLevel;
- (long long)readBufferInRegion:(id)arg1 block:(id /* block */)arg2;
- (long long)rowBytes;
- (long long)sizeInBytes;
- (long long)useAsCIImageWithOptions:(id)arg1 renderer:(id)arg2 block:(id /* block */)arg3;
- (long long)useAsCIRenderDestinationWithRenderer:(id)arg1 block:(id /* block */)arg2;
- (int)useCount;
- (long long)writeBufferInRegion:(id)arg1 block:(id /* block */)arg2;

@end
