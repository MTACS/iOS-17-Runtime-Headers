
@interface SBHIDButtonStateArbiter : NSObject {
    <SBHIDButtonStateDelegate> * _delegate;
    unsigned long long  _downEventSenderID;
    unsigned long long  _downTime;
    double  _longPressTimeout;
    double  _longPressTimeoutAtDownEvent;
    BSAbsoluteMachTimer * _longPressTimer;
    unsigned long long  _maximumRepeatedPressCount;
    long long  _pressSequence;
    unsigned long long  _previousUpTime;
    bool  _recognizedLongPress;
    unsigned long long  _repeatedPressCount;
    unsigned long long  _repeatedPressInitialDownTime;
    double  _repeatedPressTimeout;
    double  _repeatedPressTimeoutAtUpEvent;
    BSAbsoluteMachTimer * _repeatedPressTimer;
}

@property (nonatomic) <SBHIDButtonStateDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long downTime;
@property (getter=isLongPressDisabled, nonatomic, readonly) bool longPressDisabled;
@property (nonatomic) double longPressTimeout;
@property (nonatomic) unsigned long long maximumRepeatedPressCount;
@property (nonatomic, readonly) long long pressSequence;
@property (nonatomic, readonly) unsigned long long repeatedPressCount;
@property (getter=isRepeatedPressDisabled, nonatomic, readonly) bool repeatedPressDisabled;
@property (nonatomic, readonly) unsigned long long repeatedPressInitialDownTime;
@property (nonatomic) double repeatedPressTimeout;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)downTime;
- (id)init;
- (bool)isLongPressDisabled;
- (bool)isRepeatedPressDisabled;
- (double)longPressTimeout;
- (unsigned long long)maximumRepeatedPressCount;
- (long long)pressSequence;
- (void)processEvent:(struct __IOHIDEvent { }*)arg1;
- (unsigned long long)repeatedPressCount;
- (unsigned long long)repeatedPressInitialDownTime;
- (double)repeatedPressTimeout;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setLongPressTimeout:(double)arg1;
- (void)setMaximumRepeatedPressCount:(unsigned long long)arg1;
- (void)setRepeatedPressTimeout:(double)arg1;

@end
