
@interface _UIDatePickerCalendarMonth : _UIDatePickerCalendarDateComponent {
    _UIDatePickerCalendarMonth * _nextMonth;
    _UIDatePickerCalendarMonth * _previousMonth;
}

@property (nonatomic, readonly) _UIDatePickerCalendarMonth *nextMonth;
@property (nonatomic, readonly) _UIDatePickerCalendarMonth *previousMonth;

+ (unsigned long long)representedCalendarUnits;

- (void).cxx_destruct;
- (id)_monthWithOffset:(long long)arg1;
- (id)dayMatchingOrdinalDay:(id)arg1;
- (id)dayWithDate:(id)arg1 assignedMonth:(id)arg2;
- (id)nextMonth;
- (id)previousMonth;

@end
