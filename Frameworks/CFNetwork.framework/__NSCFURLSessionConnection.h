
@interface __NSCFURLSessionConnection : NSObject <NSCopying> {
    NSObject<OS_dispatch_data> * _cacheData;
    unsigned long long  _cacheDataMax;
    NSURLResponse * _cacheResponse;
    <__NSCFURLSessionConnectionDelegate> * _delegate;
    bool  _isFromCache;
    long long  _maxCacheEntrySize;
    NSURLSessionTask * _task;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void)cancel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)expectedProgressTargetChanged;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)resume;
- (void)setBytesPerSecondLimit:(long long)arg1;
- (void)setIsDownload:(bool)arg1;
- (void)setPoolPriority:(long long)arg1;
- (void)setPriorityHint:(float)arg1 incremental:(bool)arg2;
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1;
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1;
- (void)suspend;

@end
