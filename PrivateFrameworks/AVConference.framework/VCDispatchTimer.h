
@interface VCDispatchTimer : VCObject {
    id /* block */  _callbackBlock;
    NSObject<OS_dispatch_queue> * _clientQueue;
    unsigned int  _intervalMilliseconds;
    bool  _running;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) id /* block */ callbackBlock;
@property (nonatomic, readonly) bool isRunning;

- (id /* block */)callbackBlock;
- (void)dealloc;
- (id)initWithIntervalMilliseconds:(unsigned int)arg1 callbackBlock:(id /* block */)arg2;
- (id)initWithIntervalMilliseconds:(unsigned int)arg1 callbackBlock:(id /* block */)arg2 clientQueue:(id)arg3;
- (id)initWithIntervalSeconds:(unsigned int)arg1 callbackBlock:(id /* block */)arg2;
- (id)initWithIntervalSeconds:(unsigned int)arg1 callbackBlock:(id /* block */)arg2 clientQueue:(id)arg3;
- (bool)isRunning;
- (void)start;
- (void)stop;

@end
