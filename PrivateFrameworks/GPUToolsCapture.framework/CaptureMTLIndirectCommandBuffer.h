
@interface CaptureMTLIndirectCommandBuffer : NSObject <CaptureMTLObject, MTLIndirectCommandBuffer, MTLResourceSPI> {
    <MTLIndirectCommandBufferSPI><MTLResourceSPI> * _baseObject;
    CaptureMTLDevice * _captureDevice;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long allocationID;
@property (readonly) <MTLIndirectCommandBuffer> *baseObject;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) struct MTLResourceID { unsigned long long x1; } gpuResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) <MTLHeap> *heap;
@property (readonly) unsigned long long heapOffset;
@property (copy) NSString *label;
@property (readonly) unsigned long long protectionOptions;
@property (readonly) unsigned long long resourceOptions;
@property int responsibleProcess;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;
@property (readonly) unsigned long long unfilteredResourceOptions;

- (void).cxx_destruct;
- (unsigned long long)allocatedSize;
- (unsigned long long)allocationID;
- (id)baseObject;
- (bool)conformsToProtocol:(id)arg1;
- (unsigned long long)cpuCacheMode;
- (void)dealloc;
- (id)description;
- (id)device;
- (bool)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasResource:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)getHeader:(void**)arg1 headerSize:(unsigned long long*)arg2;
- (unsigned long long)gpuAddress;
- (unsigned long long)gpuHandle;
- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (unsigned long long)hazardTrackingMode;
- (id)heap;
- (unsigned long long)heapOffset;
- (id)indirectComputeCommandAtIndex:(unsigned long long)arg1;
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (bool)isAliasable;
- (bool)isComplete;
- (bool)isPurgeable;
- (id)label;
- (void)makeAliasable;
- (id)originalObject;
- (void)resetWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)resourceIndex;
- (unsigned long long)resourceOptions;
- (bool)respondsToSelector:(SEL)arg1;
- (int)responsibleProcess;
- (void)setLabel:(id)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)setResponsibleProcess:(int)arg1;
- (unsigned long long)size;
- (unsigned long long)storageMode;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;
- (unsigned long long)unfilteredResourceOptions;
- (unsigned long long)uniqueIdentifier;
- (void)waitUntilComplete;

@end