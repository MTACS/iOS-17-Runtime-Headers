
@interface PGGraphMonthDayNodeCollection : PGGraphCalendarUnitNodeCollection

@property (nonatomic, readonly) PGGraphPersonNodeCollection *anniversaryPersonNodes;
@property (nonatomic, readonly) PGGraphPersonNodeCollection *birthdayPersonNodes;

+ (unsigned long long)calendarUnit;
+ (id)dateOfMonthDay;
+ (id)monthDayNodesForLocalDate:(id)arg1 inGraph:(id)arg2;
+ (id)monthDayNodesForMonth:(long long)arg1 day:(long long)arg2 inGraph:(id)arg3;

- (id)anniversaryPersonNodes;
- (id)birthdayPersonNodes;

@end
