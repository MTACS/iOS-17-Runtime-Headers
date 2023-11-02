
@interface PGHolidayMemoryTrigger : PGMemoryTrigger {
    CLSHolidayCalendarEventService * _holidayService;
}

@property (nonatomic, readonly) CLSHolidayCalendarEventService *holidayService;

- (void).cxx_destruct;
- (id)holidayService;
- (id)initWithLoggingConnection:(id)arg1 holidayService:(id)arg2;

@end
