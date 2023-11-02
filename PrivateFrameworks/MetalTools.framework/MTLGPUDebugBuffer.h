
@interface MTLGPUDebugBuffer : MTLToolsBuffer <MTLGPUDebugResource> {
    unsigned long long  _bufferIndex;
    void * _descriptorHeap;
    unsigned long long  _length;
    unsigned long long  _offset;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long allocationID;
@property (nonatomic, retain) <MTLBuffer> *baseObject;
@property (nonatomic) unsigned long long bufferIndex;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long gpuAddress;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) <MTLHeap> *heap;
@property (readonly) unsigned long long heapOffset;
@property (nonatomic, readonly) bool isTracked;
@property (copy) NSString *label;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) unsigned long long offset;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long resourceOptions;
@property int responsibleProcess;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long underlyingGPUAddress;
@property (readonly) unsigned long long unfilteredResourceOptions;

- (unsigned long long)bufferIndex;
- (void*)contents;
- (void)dealloc;
- (unsigned long long)gpuAddress;
- (unsigned long long)handleForOffset:(unsigned long long)arg1;
- (id)initWithBuffer:(id)arg1 device:(id)arg2;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 track:(bool)arg5;
- (id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3;
- (id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5 track:(bool)arg6;
- (bool)isTracked;
- (unsigned long long)length;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (unsigned long long)offset;
- (void)setBufferIndex:(unsigned long long)arg1;
- (unsigned long long)underlyingGPUAddress;
- (void)useWithComputeEncoder:(id)arg1 usage:(unsigned long long)arg2;
- (void)useWithRenderEncoder:(id)arg1 usage:(unsigned long long)arg2 stages:(struct optional<unsigned long> { union { BOOL x_1_1_1; unsigned long long x_1_1_2; } x1; bool x2; })arg3;

@end
