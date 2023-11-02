
@interface HMIVideoCommandBuffer : HMIVideoProcessingNode <HMFLogging> {
    unsigned long long  _capacity;
    NSCondition * _condition;
    <HMIVideoCommandBufferDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    HMITimeIntervalAverage * _sampleBufferDelay;
    unsigned long long  _size;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoDuration;
}

@property (readonly) unsigned long long capacity;
@property (readonly) NSCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) double delay;
@property <HMIVideoCommandBufferDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) float fillRatio;
@property (readonly) unsigned long long hash;
@property (readonly) bool isEmpty;
@property (readonly) bool isFull;
@property (readonly) HMITimeIntervalAverage *sampleBufferDelay;
@property unsigned long long size;
@property (readonly) Class superclass;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } videoDuration;

+ (id)logCategory;

- (void).cxx_destruct;
- (unsigned long long)capacity;
- (id)condition;
- (double)delay;
- (id)delegate;
- (id)delegateQueue;
- (float)fillRatio;
- (void)flush;
- (void)flushAsync;
- (void)handleBlock:(id /* block */)arg1;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)initWithMaxCapacity:(unsigned long long)arg1;
- (bool)isEmpty;
- (bool)isFull;
- (id)sampleBufferDelay;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoDuration;

@end
