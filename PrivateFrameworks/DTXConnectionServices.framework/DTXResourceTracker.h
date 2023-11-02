
@interface DTXResourceTracker : NSObject {
    NSObject<OS_dispatch_semaphore> * _acqSem;
    unsigned int  _acquireNum;
    bool  _log;
    unsigned long long  _maxChunk;
    DTXResourceTracker * _parentTracker;
    NSObject<OS_dispatch_queue> * _queue;
    int  _suspendCount;
    unsigned long long  _total;
    unsigned long long  _used;
    unsigned int  _waiting;
}

@property (nonatomic) bool log;
@property (nonatomic) unsigned long long maxChunkSize;
@property (nonatomic) unsigned long long totalSize;

- (void).cxx_destruct;
- (unsigned int)acquireSize:(unsigned long long)arg1;
- (void)forceAcquireSize:(unsigned long long)arg1;
- (id)init;
- (bool)log;
- (unsigned long long)maxChunkSize;
- (void)releaseSize:(unsigned long long)arg1;
- (void)resumeLimits;
- (void)setLog:(bool)arg1;
- (void)setMaxChunkSize:(unsigned long long)arg1;
- (void)setTotalSize:(unsigned long long)arg1;
- (void)suspendLimits;
- (unsigned long long)totalSize;

@end
