
@interface PPCalendarInternPool : NSObject {
    _PASLock * _poolLock;
}

- (void).cxx_destruct;
- (void)clearPool;
- (id)init;
- (id)internedCalendarWithEKCalendar:(id)arg1;

@end
