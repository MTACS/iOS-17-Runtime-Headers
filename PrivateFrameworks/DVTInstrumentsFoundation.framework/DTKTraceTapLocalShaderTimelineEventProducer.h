
@interface DTKTraceTapLocalShaderTimelineEventProducer : NSObject <DTKTraceTapLocalEventProducer> {
    NSObject<OS_dispatch_source> * _timer;
    int  _token;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (bool)supportsConfig:(id)arg1;

- (void).cxx_destruct;
- (void)_notifyShaderBinaryInfo;
- (void)dealloc;
- (id)init;
- (void)pause;
- (void)start;
- (void)stop;
- (void)unpause;

@end
