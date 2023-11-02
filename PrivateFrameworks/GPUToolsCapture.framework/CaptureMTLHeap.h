
@interface CaptureMTLHeap : NSObject <CaptureMTLObject, MTLHeap> {
    <MTLHeapSPI> * _baseObject;
    CaptureMTLDevice * _captureDevice;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) <MTLHeap> *baseObject;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (copy) NSString *label;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;
@property (readonly) long long type;
@property (readonly) unsigned long long usedSize;

- (void).cxx_destruct;
- (id)baseObject;
- (bool)conformsToProtocol:(id)arg1;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)currentAllocatedSize;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)gpuAddress;
- (unsigned long long)hazardTrackingMode;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (id)label;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (unsigned long long)memoryPoolId;
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
- (id)originalObject;
- (unsigned long long)protectionOptions;
- (unsigned long long)resourceOptions;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setLabel:(id)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (unsigned long long)size;
- (unsigned long long)storageMode;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;
- (long long)type;
- (unsigned long long)unfilteredResourceOptions;
- (unsigned long long)usedSize;

@end
