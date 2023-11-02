
@interface _UIDatePickerCalendarTimeValueStore : NSObject {
    long long  _decrementBehaviour;
    unsigned long long * _inputBuffer;
    bool  _isPM;
    long long  _minuteInterval;
    _UIDatePickerCalendarTimeFormat * _timeFormat;
}

@property (nonatomic) long long decrementBehaviour;
@property (nonatomic) unsigned long long hourValue;
@property (nonatomic, readonly) unsigned long long*inputBuffer;
@property (nonatomic) bool isPM;
@property (nonatomic) long long minuteInterval;
@property (nonatomic) unsigned long long minuteValue;
@property (nonatomic, readonly) _UIDatePickerCalendarTimeFormat *timeFormat;

- (void).cxx_destruct;
- (unsigned long long)__integerInBufferWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)__setIntegerInBuffer:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_removeLastDigitInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_setDigits:(unsigned long long)arg1 count:(unsigned long long)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 append:(bool)arg4;
- (void)_verifyInputWithScope:(long long)arg1;
- (void)dealloc;
- (long long)decrementBehaviour;
- (void)decrementDigitForScope:(long long)arg1;
- (unsigned long long)digitsInScope:(long long)arg1;
- (unsigned long long)hourValue;
- (void)incrementDigitForScope:(long long)arg1;
- (id)initWithTimeFormat:(id)arg1;
- (id)initWithTimeFormat:(id)arg1 minuteInterval:(long long)arg2 decrementBehaviour:(long long)arg3;
- (unsigned long long*)inputBuffer;
- (bool)isPM;
- (long long)minuteInterval;
- (unsigned long long)minuteValue;
- (void)removeLastDigitInScope:(long long)arg1;
- (bool)roundToMinuteInterval;
- (void)setDecrementBehaviour:(long long)arg1;
- (void)setDigits:(unsigned long long)arg1 count:(unsigned long long)arg2 inScope:(long long)arg3 append:(bool)arg4;
- (void)setHourValue:(unsigned long long)arg1;
- (void)setIsPM:(bool)arg1;
- (void)setMinuteInterval:(long long)arg1;
- (void)setMinuteValue:(unsigned long long)arg1;
- (id)timeFormat;

@end
