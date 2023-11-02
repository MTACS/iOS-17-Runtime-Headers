
@interface ATXHolidaysDataSource : NSObject {
    ATXHeuristicDevice * _device;
}

- (void).cxx_destruct;
- (id)_holidayCalendarForEventStore:(id)arg1;
- (void)holidaysFromStartDate:(id)arg1 toEndDate:(id)arg2 callback:(id /* block */)arg3;
- (id)initWithDevice:(id)arg1;

@end
