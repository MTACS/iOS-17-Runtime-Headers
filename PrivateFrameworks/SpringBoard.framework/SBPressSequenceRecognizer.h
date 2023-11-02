
@interface SBPressSequenceRecognizer : NSObject {
    SBPressTuple * _currentPressTuple;
    NSMutableArray * _currentSequence;
    <SBPressSequenceRecognizerDelegate> * _delegate;
    double  _lastPressDownEvent;
    double  _lastPressUpEvent;
    unsigned long long  _numberOfPresses;
    SBPressSequenceValidator * _validator;
    BSAbsoluteMachTimer * _watchdogTimer;
}

@property (nonatomic) <SBPressSequenceRecognizerDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long numberOfPresses;
@property (nonatomic, readonly) SBPressSequenceValidator *validator;

- (void).cxx_destruct;
- (void)_complete;
- (void)_handlePressDownWithTimestamp:(double)arg1;
- (void)_handlePressUpWithTimestamp:(double)arg1;
- (void)_reset;
- (void)_resetAfterDelay:(double)arg1;
- (void)_resetAndNotify;
- (void)_resetWatchdogIfNecessary;
- (double)_watchdogTimeIntervalFromDelay:(double)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithValidator:(id)arg1 numberOfPresses:(unsigned long long)arg2;
- (unsigned long long)numberOfPresses;
- (void)registerPressDownWithTimestamp:(double)arg1;
- (void)registerPressUpWithTimestamp:(double)arg1;
- (void)resetWithNewValidator:(id)arg1 numberOfPresses:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (id)validator;

@end
