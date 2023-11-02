
@protocol WBSHistoryStore <WBSHistoryLoader>

@required

- (void)addAutocompleteTrigger:(NSString *)arg1 forItem:(WBSHistoryItem *)arg2;
- (void)assignHistoryItem:(void *)arg1 toTopicTags:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: WBSHistoryItem *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)checkIfLocalVisitExistsInAnyOfItems:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)clearHistoryVisitsAddedAfterDate:(void *)arg1 beforeDate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)clearHistoryWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)closeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (<WBSHistoryStoreDelegate> *)delegate;
- (void)fetchTopicsFromStartDate:(void *)arg1 toEndDate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchTopicsFromStartDate:(void *)arg1 toEndDate:(void *)arg2 limit:(void *)arg3 minimumItemCount:(void *)arg4 sortOrder:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: NSDate *, NSDate *, unsigned long long, unsigned long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getAutocompleteTriggersForItem:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WBSHistoryItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(void *)arg1 beforeDate:(void *)arg2 onlyFromThisDevice:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSDate *, NSDate *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)getItemCountBeforeDate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)getVisitsCreatedAfterDate:(void *)arg1 beforeDate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (double)historyAgeLimit;
- (bool)isUsingInMemoryDatabase;
- (void)itemWasReplaced:(WBSHistoryItem *)arg1 byItem:(WBSHistoryItem *)arg2;
- (void)itemsWereAdded:(NSArray *)arg1 byUserInitiatedAction:(bool)arg2;
- (void)itemsWereModified:(NSArray *)arg1 byUserInitiatedAction:(bool)arg2;
- (void)performMaintenance:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removePastHistoryVisitsForItem:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: WBSHistoryItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setDelegate:(id <WBSHistoryStoreDelegate>)arg1;
- (void)setHistoryAgeLimit:(double)arg1;
- (void)setTitle:(void *)arg1 ofTag:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, WBSHistoryTag *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)tagsWithIdentifiers:(void *)arg1 type:(void *)arg2 level:(void *)arg3 creatingIfNecessary:(void *)arg4 withTitles:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 13: NSArray *, unsigned long long, long long, bool, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*
- (void)vacuumHistoryWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)visitAttributeWasUpdated:(WBSHistoryVisit *)arg1 removeAttributes:(unsigned long long)arg2 addAttributes:(unsigned long long)arg3;
- (void)visitTitleWasUpdated:(WBSHistoryVisit *)arg1;
- (void)visitsWereAdded:(NSArray *)arg1;
- (void)visitsWereModified:(NSArray *)arg1;

@end
