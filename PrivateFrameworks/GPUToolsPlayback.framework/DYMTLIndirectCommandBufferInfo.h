
@interface DYMTLIndirectCommandBufferInfo : NSObject {
    unsigned long long  _maxCommandCount;
    unsigned long long  _maxKernelThreadgroupMemoryBindCount;
    unsigned long long  _options;
}

@property (nonatomic, readonly) unsigned long long maxCommandCount;
@property (nonatomic, readonly) unsigned long long maxKernelThreadgroupMemoryBindCount;
@property (nonatomic, readonly) unsigned long long options;

- (id)initWithMaxCommandCount:(unsigned long long)arg1 options:(unsigned long long)arg2 maxKernelThreadgroupMemoryBindCount:(unsigned long long)arg3;
- (unsigned long long)maxCommandCount;
- (unsigned long long)maxKernelThreadgroupMemoryBindCount;
- (unsigned long long)options;

@end
