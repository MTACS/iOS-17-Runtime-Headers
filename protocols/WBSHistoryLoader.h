
@protocol WBSHistoryLoader <NSObject>

@required

- (id)initWithDatabaseID:(NSString *)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4;
- (void)loadWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)waitForLoadingToComplete;

@end
