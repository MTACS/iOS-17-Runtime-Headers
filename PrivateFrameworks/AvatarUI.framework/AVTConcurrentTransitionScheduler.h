
@interface AVTConcurrentTransitionScheduler : NSObject <AVTTransitionScheduler> {
    double  _delay;
    id /* block */  _eventHandler;
    NSTimer * _transitionTimer;
}

@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly, copy) id /* block */ eventHandler;
@property (nonatomic, retain) NSTimer *transitionTimer;

- (void).cxx_destruct;
- (double)delay;
- (void)didCompleteEvent;
- (id /* block */)eventHandler;
- (id)initWithEventHandler:(id /* block */)arg1;
- (id)initWithEventHandler:(id /* block */)arg1 delay:(double)arg2;
- (void)scheduleEvent;
- (void)scheduleTransitionTimer;
- (void)setTransitionTimer:(id)arg1;
- (void)stop;
- (id)transitionTimer;

@end
