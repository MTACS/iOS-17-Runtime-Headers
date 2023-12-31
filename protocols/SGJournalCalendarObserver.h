
@protocol SGJournalCalendarObserver <SGJournalBaseObserver>

@required

- (void)addEvent:(SGStorageEvent *)arg1;
- (void)addEvents:(NSArray *)arg1;
- (void)calendarDeleted;
- (void)cancelEvent:(SGStorageEvent *)arg1;
- (void)cancelEvents:(NSArray *)arg1;
- (void)confirmEventFromOtherDevice:(SGStorageEvent *)arg1;
- (void)confirmEventFromThisDevice:(SGStorageEvent *)arg1;
- (void)orphanEvent:(SGStorageEvent *)arg1;
- (void)rejectEventFromOtherDevice:(SGStorageEvent *)arg1;
- (void)rejectEventFromThisDevice:(SGStorageEvent *)arg1;

@end
