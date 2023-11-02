
@interface HDSPSleepAlarmSnoozedIDSMessage : HDSPEventRecordMessage

@property (nonatomic, readonly) NSDate *snoozedUntilDate;

- (id)dateDescription;
- (unsigned long long)destinations;
- (id)initWithSnoozedUntilDate:(id)arg1;
- (id)snoozedUntilDate;

@end
