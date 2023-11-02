
@interface CLSCalendarEventsCache : NSObject {
    NSMutableSet * _years;
}

@property (nonatomic, readonly) NSMutableSet *years;

- (void).cxx_destruct;
- (void)_enumerateDaysFromStartDate:(id)arg1 toEndDate:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)_storeDayForDate:(id)arg1 createIfNeeded:(bool)arg2;
- (id)debugDescription;
- (void)enumerateEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)eventsForDate:(id)arg1;
- (id)eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (bool)hasEventsFromStartDate:(id)arg1 toEndDate:(id)arg2;
- (id)init;
- (void)insertEvent:(id)arg1;
- (id)years;

@end
