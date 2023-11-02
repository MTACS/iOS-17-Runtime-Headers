
@protocol HMTimerTriggerConfiguration <HMTriggerConfiguration>

@required

- (NSDate *)fireDate;
- (NSDateComponents *)recurrence;
- (NSArray *)recurrences;
- (NSString *)significantEvent;
- (NSDateComponents *)significantEventOffset;
- (NSTimeZone *)timeZone;
- (void)updateFireDate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateRecurrence:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDateComponents *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateRecurrences:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateSignificantEvent:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateSignificantEventOffset:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDateComponents *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateTimeZone:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSTimeZone *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
