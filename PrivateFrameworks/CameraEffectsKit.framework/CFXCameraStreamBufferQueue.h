
@interface CFXCameraStreamBufferQueue : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned long long  _maxCapacity;
    NSMutableArray * _outputBuffers;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) unsigned long long maxCapacity;
@property (nonatomic, retain) NSMutableArray *outputBuffers;

- (void).cxx_destruct;
- (id)accessQueue;
- (unsigned long long)count;
- (id)dequeue;
- (bool)enqueue:(id)arg1;
- (double)headBufferTimestamp;
- (id)initWithMaxCapacity:(unsigned long long)arg1;
- (unsigned long long)maxCapacity;
- (id)outputBuffers;
- (void)setAccessQueue:(id)arg1;
- (void)setMaxCapacity:(unsigned long long)arg1;
- (void)setOutputBuffers:(id)arg1;

@end
