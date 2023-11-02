
@protocol MTLIOScratchBufferAllocator <NSObject>

@required

- (<MTLIOScratchBuffer> *)newScratchBufferWithMinimumSize:(unsigned long long)arg1;

@end
