
@interface MTLIOAccelVisibleFunctionTable : MTLIOAccelResource <MTLVisibleFunctionTableSPI>

@property (readonly) unsigned long long allocatedSize;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, retain) <MTLBuffer> *globalBuffer;
@property (nonatomic) unsigned long long globalBufferOffset;
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
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (readonly) unsigned long long uniqueIdentifier;

- (unsigned long long)bufferAddressAtIndex:(unsigned long long)arg1;
- (id)globalBuffer;
- (unsigned long long)globalBufferOffset;
- (unsigned long long)gpuAddress;
- (unsigned long long)gpuHandle;
- (struct MTLResourceID { unsigned long long x1; })gpuResourceID;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setFunction:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setFunctions:(const id*)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setGlobalBuffer:(id)arg1;
- (void)setGlobalBufferOffset:(unsigned long long)arg1;
- (void)setValue:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setValue:(unsigned long long)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
