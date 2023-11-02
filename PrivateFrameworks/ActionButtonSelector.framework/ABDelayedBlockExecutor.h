
@interface ABDelayedBlockExecutor : NSObject {
    id /* block */  _block;
    NSNumber * _delay;
    bool  _isPaused;
    id /* block */  _scheduledBlock;
}

- (void).cxx_destruct;
- (void)_cancelScheduledBlock;

@end
