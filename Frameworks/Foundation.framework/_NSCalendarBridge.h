
@interface _NSCalendarBridge : NSCalendar

@property (copy) NSTimeZone *timeZone;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)_components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)_componentsInTimeZone:(id)arg1 fromDate:(id)arg2;
- (id)_dateFromComponents:(id)arg1;
- (void)_enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)componentsInTimeZone:(id)arg1 fromDate:(id)arg2;
- (id)dateFromComponents:(id)arg1;
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)initWithCalendarIdentifier:(id)arg1;
- (id)initWithCheckedCalendarIdentifier:(id)arg1;

@end
