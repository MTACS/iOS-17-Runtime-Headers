
@interface _UIDatePickerCalendarDay : _UIDatePickerCalendarDateComponent {
    _UIDatePickerCalendarMonth * _assignedMonth;
    _UIDatePickerCalendarMonth * _month;
}

@property (nonatomic, readonly) _UIDatePickerCalendarMonth *assignedMonth;
@property (nonatomic, readonly) bool isToday;
@property (nonatomic, readonly) _UIDatePickerCalendarMonth *month;

+ (unsigned long long)representedCalendarUnits;

- (void).cxx_destruct;
- (id)assignedMonth;
- (id)copyWithAssignedMonth:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDate:(id)arg1 calendar:(id)arg2;
- (id)initWithDate:(id)arg1 calendar:(id)arg2 month:(id)arg3 assignedMonth:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isToday;
- (id)month;

@end
