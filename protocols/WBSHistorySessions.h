
@protocol WBSHistorySessions

@required

- (void)enumerateOrderedItemsLastVisitedInSession:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 7: WBSHistorySession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSHistoryItem *, void*
- (WBSHistoryItem *)itemLastVisitedInSession:(WBSHistorySession *)arg1 atIndex:(unsigned long long)arg2;
- (NSArray *)itemsLastVisitedInSession:(WBSHistorySession *)arg1;
- (unsigned long long)numberOfItemsVisitedInSession:(WBSHistorySession *)arg1;
- (unsigned long long)numberOfSessions;
- (void)orderedItemsNewerThanDate:(void *)arg1 maxCount:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSDate *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (NSArray *)orderedSessions;
- (void)orderedSessionsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
