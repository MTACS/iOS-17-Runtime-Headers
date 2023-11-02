
@protocol HMEventTriggerConfiguration <HMTriggerConfiguration>

@required

- (void)addEvent:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSArray *)endEvents;
- (NSArray *)events;
- (bool)executeOnce;
- (NSPredicate *)predicate;
- (NSArray *)recurrences;
- (void)removeEvent:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateEndEvents:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateEvents:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateExecuteOnce:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updatePredicate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateRecurrences:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
