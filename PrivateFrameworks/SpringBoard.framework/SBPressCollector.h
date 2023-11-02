
@interface SBPressCollector : NSObject {
    NSMutableArray * _currentSequence;
    SBPressTuple * _currentTuple;
    <SBPressCollectorDelegate> * _delegate;
    BSAbsoluteMachTimer * _hardEndTimer;
    double  _lastHandledDownEvent;
    double  _lastHandledUpEvent;
    double  _maxPressDownDuration;
    double  _maxPressUpDuration;
}

@property (nonatomic) <SBPressCollectorDelegate> *delegate;
@property (nonatomic) double maxPressDownDuration;
@property (nonatomic) double maxPressUpDuration;

+ (double)currentTimeStamp;

- (void).cxx_destruct;
- (void)_end;
- (void)_fireEndTimerWithDelay:(double)arg1 isButtonDown:(bool)arg2;
- (void)_handlePressDownWithTimeStamp:(double)arg1;
- (void)_handlePressUpWithTimeStamp:(double)arg1;
- (void)_reset;
- (void)_resetTimersIfNecessary;
- (void)dealloc;
- (id)delegate;
- (void)endCurrentSequence;
- (id)init;
- (double)maxPressDownDuration;
- (double)maxPressUpDuration;
- (void)registerPressDownWithTimeStamp:(double)arg1;
- (void)registerPressUpWithTimeStamp:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMaxPressDownDuration:(double)arg1;
- (void)setMaxPressUpDuration:(double)arg1;

@end
