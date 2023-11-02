
@protocol MTLIndirectCommandBufferSPI <MTLIndirectCommandBuffer>

@required

- (void)getHeader:(void**)arg1 headerSize:(unsigned long long*)arg2;
- (unsigned long long)gpuHandle;
- (unsigned long long)storageMode;
- (unsigned long long)uniqueIdentifier;

@optional

- (unsigned long long)gpuAddress;
- (unsigned long long)resourceIndex;

@end
