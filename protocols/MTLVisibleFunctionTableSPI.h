
@protocol MTLVisibleFunctionTableSPI <MTLVisibleFunctionTable>

@required

- (unsigned long long)bufferAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)gpuAddress;
- (unsigned long long)gpuHandle;
- (void)setBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)setValue:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setValue:(unsigned long long)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setVisibleFunctionTable:(id <MTLVisibleFunctionTable>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVisibleFunctionTables:(const id*)arg1 withBufferRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@optional

- (<MTLBuffer> *)globalBuffer;
- (unsigned long long)globalBufferOffset;
- (unsigned long long)resourceIndex;
- (void)setGlobalBuffer:(id <MTLBuffer>)arg1;
- (void)setGlobalBufferOffset:(unsigned long long)arg1;
- (unsigned long long)uniqueIdentifier;

@end
