
@interface WKDateTimeInputControl : WKFormPeripheralBase

@property (nonatomic, readonly) NSString *dateTimePickerCalendarType;
@property (nonatomic, readonly) double timePickerValueHour;
@property (nonatomic, readonly) double timePickerValueMinute;

- (id)dateTimePickerCalendarType;
- (id)initWithView:(id)arg1;
- (void)setTimePickerHour:(long long)arg1 minute:(long long)arg2;
- (double)timePickerValueHour;
- (double)timePickerValueMinute;

@end
