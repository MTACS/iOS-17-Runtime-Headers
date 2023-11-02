
@interface MTLIOCommandQueueDescriptor : NSObject <NSCopying> {
    unsigned long long  _maxCommandBufferCount;
    unsigned long long  _maxCommandsInFlight;
    unsigned long long  _maxWorkerThreads;
    long long  _priority;
    <MTLIOScratchBufferAllocator> * _scratchBufferAllocator;
    long long  _type;
}

@property (nonatomic) unsigned long long maxCommandBufferCount;
@property (nonatomic) unsigned long long maxCommandsInFlight;
@property unsigned long long maxWorkerThreads;
@property (nonatomic) long long priority;
@property (retain) <MTLIOScratchBufferAllocator> *scratchBufferAllocator;
@property (nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxCommandBufferCount;
- (unsigned long long)maxCommandsInFlight;
- (unsigned long long)maxWorkerThreads;
- (long long)priority;
- (id)scratchBufferAllocator;
- (void)setMaxCommandBufferCount:(unsigned long long)arg1;
- (void)setMaxCommandsInFlight:(unsigned long long)arg1;
- (void)setMaxWorkerThreads:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setScratchBufferAllocator:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
