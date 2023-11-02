
@interface DVTSecureSocketProxyBufferPool : NSObject {
    NSObject<OS_dispatch_semaphore> * _bufferAvailable;
    NSMutableArray * _dataBuffers;
}

@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *bufferAvailable;
@property (nonatomic, retain) NSMutableArray *dataBuffers;

- (void).cxx_destruct;
- (id)blockingAcquireBuffer;
- (id)bufferAvailable;
- (id)dataBuffers;
- (id)initWithCount:(int)arg1 bufferSize:(unsigned long long)arg2;
- (void)releaseBuffer:(id)arg1;
- (void)setBufferAvailable:(id)arg1;
- (void)setDataBuffers:(id)arg1;

@end
