
@interface JTFrameRateCalculator : NSObject {
    unsigned long long  _droppedDisplayFrameCount;
    unsigned long long  _droppedRenderCount;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _receivedDisplayFrameCount;
    unsigned long long  _receivedRenderCount;
    NSDate * _stateDate;
    double  _windowSize;
}

@property (nonatomic) unsigned long long droppedDisplayFrameCount;
@property (nonatomic) unsigned long long droppedRenderCount;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long receivedDisplayFrameCount;
@property (nonatomic) unsigned long long receivedRenderCount;
@property (nonatomic, retain) NSDate *stateDate;
@property (nonatomic) double windowSize;

- (void).cxx_destruct;
- (void)JT_restart;
- (unsigned long long)droppedDisplayFrameCount;
- (unsigned long long)droppedRenderCount;
- (id)initWithWindowSize:(double)arg1;
- (void)log:(id /* block */)arg1;
- (id)name;
- (unsigned long long)receivedDisplayFrameCount;
- (unsigned long long)receivedRenderCount;
- (void)setDroppedDisplayFrameCount:(unsigned long long)arg1;
- (void)setDroppedRenderCount:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setReceivedDisplayFrameCount:(unsigned long long)arg1;
- (void)setReceivedRenderCount:(unsigned long long)arg1;
- (void)setStateDate:(id)arg1;
- (void)setWindowSize:(double)arg1;
- (id)stateDate;
- (void)tickDropped;
- (void)tickDroppedDisplay;
- (void)tickFrameReceived;
- (void)tickReceived;
- (double)windowSize;

@end
