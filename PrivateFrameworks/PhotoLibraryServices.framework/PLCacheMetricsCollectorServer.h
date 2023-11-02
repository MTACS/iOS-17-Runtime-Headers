
@interface PLCacheMetricsCollectorServer : NSObject {
    unsigned long long  _bufferSize;
    void * _sharedRegion;
}

- (void)dealloc;
- (struct { _Atomic unsigned int x1; _Atomic unsigned int x2; _Atomic unsigned int x3; _Atomic unsigned int x4; })getSharedImageRequestCacheMetrics;
- (id)initWithXPCObject:(id)arg1;

@end
