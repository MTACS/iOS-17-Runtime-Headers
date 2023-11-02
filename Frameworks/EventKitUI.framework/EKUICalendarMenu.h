
@interface EKUICalendarMenu : NSObject

+ (id)_calendarMenuWithCalendars:(id)arg1 eventStore:(id)arg2 backgroundColor:(id)arg3 setupActionHandler:(id /* block */)arg4 selectionHandler:(id /* block */)arg5 subtitle:(id)arg6;
+ (id)calendarCircleImageForColor:(id)arg1;
+ (id)calendarMenuWithCalendars:(id)arg1 eventStore:(id)arg2 backgroundColor:(id)arg3 setupActionHandler:(id /* block */)arg4 selectionHandler:(id /* block */)arg5;
+ (id)calendarSubmenuWithSubtitle:(id)arg1 calendars:(id)arg2 eventStore:(id)arg3 backgroundColor:(id)arg4 setupActionHandler:(id /* block */)arg5 selectionHandler:(id /* block */)arg6;
+ (id)placeholderMenuForCalendar:(id)arg1 backgroundColor:(id)arg2;

@end
