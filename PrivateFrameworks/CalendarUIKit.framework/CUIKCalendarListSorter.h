
@interface CUIKCalendarListSorter : NSObject

+ (id /* block */)ekCalendarComparator;
+ (id /* block */)ekOtherCalendarComparator;
+ (id /* block */)ekSourceComparator;
+ (long long)orderForOtherCalendar:(id)arg1;

@end
