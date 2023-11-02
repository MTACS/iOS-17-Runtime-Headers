
@interface MTLToolsIndirectCommandBuffer : MTLToolsResource <MTLIndirectCommandBufferSPI>

@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long gpuAddress;
@property (readonly) unsigned long long gpuHandle;
@property (readonly) struct MTLResourceID { unsigned long long x1; } gpuResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) <MTLHeap> *heap;
@property (readonly) unsigned long long heapOffset;
@property (copy) NSString *label;
@property (nonatomic, readonly) unsigned long long resourceIndex;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (readonly) unsigned long long uniqueIdentifier;

- (void)getHeader:(void**)arg1 headerSize:(unsigned long long*)arg2;
- (unsigned long long)gpuAddress;
- (unsigned long long)gpuHandle;
- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (id)indirectComputeCommandAtIndex:(unsigned long long)arg1;
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (void)resetWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)resourceIndex;
- (unsigned long long)size;
- (unsigned long long)storageMode;
- (unsigned long long)uniqueIdentifier;

@end
