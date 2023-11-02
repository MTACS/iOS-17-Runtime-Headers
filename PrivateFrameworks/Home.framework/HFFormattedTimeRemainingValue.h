
@interface HFFormattedTimeRemainingValue : NSObject <HFDynamicFormattingValue, HFSynchronizedTimerObserver> {
    <HFStringGenerator> * _currentFormattedValue;
    NSDateComponentsFormatter * _formatter;
    NSMapTable * _observationBlocks;
    NSDate * _value;
}

@property (nonatomic, retain) <HFStringGenerator> *currentFormattedValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDateComponentsFormatter *formatter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *observationBlocks;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *value;

+ (id)defaultFormatter;
+ (id)valueWithRemainingDuration:(double)arg1 relativeToDate:(id)arg2;

- (void).cxx_destruct;
- (id)_generateFormattedValue;
- (void)_stopTimer;
- (double)_timeRemaining;
- (void)_updateTimerState;
- (void)countdownTimerDidFire:(id)arg1;
- (id)currentFormattedValue;
- (id)formatter;
- (id)initWithFireDate:(id)arg1;
- (id)initWithFireDate:(id)arg1 formatter:(id)arg2;
- (id)observationBlocks;
- (id)observeFormattedValueChangesWithBlock:(id /* block */)arg1;
- (void)setCurrentFormattedValue:(id)arg1;
- (id)value;

@end
