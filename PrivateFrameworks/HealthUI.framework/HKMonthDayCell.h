
@interface HKMonthDayCell : HKCalendarDayCell {
    long long  _circleState;
    long long  _dayOfWeek;
}

@property (nonatomic, readonly) long long circleState;

+ (double)dayLabelFontSize;

- (bool)_representsWeekendDay;
- (void)_setCircleState:(long long)arg1;
- (void)_updateFontAndCircle;
- (long long)circleState;
- (void)dealloc;
- (id)initWithDateCache:(id)arg1;
- (void)pressToTransition:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)updateWithDate:(id)arg1 dayOfMonth:(long long)arg2;

@end
