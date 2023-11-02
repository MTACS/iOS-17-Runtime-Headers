
@protocol EDThreadScopeManagerDataSource

@required

- (bool)threadScopeManager:(void *)arg1 evictThreadScopesWithDatabaseIDs:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: EDThreadScopeManager *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)threadScopeManager:(void *)arg1 gatherStatisticsForThreadScopesWithDatabaseIDs:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 10: EDThreadScopeManager *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSDate *, unsigned long long, void*
- (bool)threadScopeManager:(EDThreadScopeManager *)arg1 isValidMailboxObjectID:(EMMailboxObjectID *)arg2;
- (bool)threadScopeManager:(EDThreadScopeManager *)arg1 mailboxScopeExists:(EMMailboxScope *)arg2;
- (void)threadScopeManager:(void *)arg1 populateThreadScopesWithBlock:(void *)arg2; // needs 2 arg types, found 10: EDThreadScopeManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, EMThreadScope *, bool, NSDate *, void*

@end
