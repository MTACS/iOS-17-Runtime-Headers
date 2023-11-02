
@interface ATXSleepSuggestionOccurrence : NSObject <NSSecureCoding> {
    NSDateComponents * _bedtimeComponents;
    NSDateComponents * _wakeUpComponents;
    unsigned long long  _weekdays;
}

@property (nonatomic, copy) NSDateComponents *bedtimeComponents;
@property (nonatomic, copy) NSDateComponents *wakeUpComponents;
@property (nonatomic) unsigned long long weekdays;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bedtimeComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBedtimeComponents:(id)arg1 wakeupComponents:(id)arg2 weekdays:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (void)setBedtimeComponents:(id)arg1;
- (void)setWakeUpComponents:(id)arg1;
- (void)setWeekdays:(unsigned long long)arg1;
- (id)wakeUpComponents;
- (unsigned long long)weekdays;

@end
