
@protocol WBSHistoryServiceDatabaseStore

@required

- (void)listDatabaseURLsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)openDatabaseWithID:(void *)arg1 createIfNeeded:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WBSHistoryServiceDatabaseProtocol> *, NSError *, void*

@end
