
@interface PGGraphYearNodeCollection : PGGraphCalendarUnitNodeCollection

@property (nonatomic, readonly) NSArray *years;

+ (unsigned long long)calendarUnit;
+ (id)dateOfYear;
+ (id)yearNodesForYear:(long long)arg1 inGraph:(id)arg2;

- (void)enumerateYearsUsingBlock:(id /* block */)arg1;
- (id)years;

@end
