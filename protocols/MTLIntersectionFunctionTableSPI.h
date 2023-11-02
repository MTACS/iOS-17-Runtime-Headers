
@protocol MTLIntersectionFunctionTableSPI <MTLIntersectionFunctionTable>

@required

- (unsigned long long)bufferAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)gpuHandle;

@optional

- (<MTLBuffer> *)globalBuffer;
- (unsigned long long)globalBufferOffset;
- (unsigned long long)resourceIndex;
- (void)setGlobalBuffer:(id <MTLBuffer>)arg1;
- (void)setGlobalBufferOffset:(unsigned long long)arg1;
- (unsigned long long)uniqueIdentifier;

@end
