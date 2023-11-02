
@interface PGGraphCalendarUnitEdge : PGGraphPropertylessEdge {
    unsigned int  _calendarUnit;
}

+ (id)dayFilter;
+ (id)dayOfWeekFilter;
+ (id)monthDayFilter;
+ (id)monthFilter;
+ (id)weekOfMonthFilter;
+ (id)weekOfYearFilter;
+ (id)yearFilter;

- (unsigned short)domain;
- (id)initWithCalendarUnit:(unsigned long long)arg1 fromDateNode:(id)arg2 toCalendarUnitNode:(id)arg3;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)label;

@end
