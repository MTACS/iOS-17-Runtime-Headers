
@interface MTLToolsBuffer : MTLToolsResource <MTLBufferSPI>

@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long allocationID;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long gpuAddress;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) <MTLHeap> *heap;
@property (readonly) unsigned long long heapOffset;
@property (readonly) struct __IOSurface { }*iosurface;
@property (copy) NSString *label;
@property (readonly) unsigned long long length;
@property (nonatomic) unsigned long long parentGPUAddress;
@property (nonatomic) unsigned long long parentGPUSize;
@property (readonly) unsigned long long protectionOptions;
@property (nonatomic, readonly) unsigned long long resourceIndex;
@property (readonly) unsigned long long resourceOptions;
@property int responsibleProcess;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (readonly) unsigned long long unfilteredResourceOptions;

- (struct __IOSurface { }*)_aneIOSurface;
- (void)addDebugMarker:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void*)contents;
- (void)dealloc;
- (void)didModifyRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)gpuAddress;
- (struct __IOSurface { }*)iosurface;
- (unsigned long long)length;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (unsigned long long)parentGPUAddress;
- (unsigned long long)parentGPUSize;
- (void)removeAllDebugMarkers;
- (void)setParentGPUAddress:(unsigned long long)arg1;
- (void)setParentGPUSize:(unsigned long long)arg1;

@end
