
@interface ATXCalendarEventsDataSource : NSObject {
    ATXHeuristicDevice * _device;
}

- (void).cxx_destruct;
- (void)calendarEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 callback:(id /* block */)arg3;
- (id)eventsFromStartDate:(id)arg1 endDate:(id)arg2 category:(id)arg3 reason:(id)arg4;
- (id)eventsFromStartDate:(id)arg1 endDate:(id)arg2 reason:(id)arg3;
- (id)flightEventsFromStartDate:(id)arg1 endDate:(id)arg2 reason:(id)arg3;
- (id)hotelEventsFromStartDate:(id)arg1 endDate:(id)arg2 reason:(id)arg3;
- (id)initWithDevice:(id)arg1;
- (id)sortEkEvents:(id)arg1;
- (void)visibleCalendarsWithCallback:(id /* block */)arg1;

@end
