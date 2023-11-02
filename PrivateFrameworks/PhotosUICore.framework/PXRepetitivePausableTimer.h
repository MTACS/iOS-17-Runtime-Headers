
@interface PXRepetitivePausableTimer : NSObject {
    id /* block */  _callBlock;
    int  _reasonsToPause;
    double  _repetitiveInterval;
    NSTimer * _timer;
}

- (void).cxx_destruct;
- (void)_handleTimer:(id)arg1;
- (void)_pauseWithReasons:(int)arg1;
- (void)_startTimer;
- (void)_stopTimer;
- (void)_unpauseWithReasons:(int)arg1;
- (id)initWithRepeatedInterval:(double)arg1 initialTrigger:(bool)arg2 target:(id /* block */)arg3;
- (void)pause;
- (void)reset;
- (void)unpause;

@end
