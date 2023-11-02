
@interface AVTSynchronousTransitionScheduler : NSObject <AVTTransitionScheduler> {
    id /* block */  _eventHandler;
    bool  _isRunningEvent;
}

@property (nonatomic, readonly, copy) id /* block */ eventHandler;
@property (nonatomic) bool isRunningEvent;

- (void).cxx_destruct;
- (void)didCompleteEvent;
- (id /* block */)eventHandler;
- (id)initWithEventHandler:(id /* block */)arg1;
- (bool)isRunningEvent;
- (void)scheduleEvent;
- (void)setIsRunningEvent:(bool)arg1;
- (void)stop;

@end
