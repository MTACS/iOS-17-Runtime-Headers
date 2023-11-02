
@interface HDSPSleepAlarmDismissedIDSMessage : HDSPEventRecordMessage

@property (nonatomic, readonly) NSDate *dismissedDate;

- (id)dateDescription;
- (unsigned long long)destinations;
- (id)dismissedDate;
- (id)initWithDismissedDate:(id)arg1;

@end
