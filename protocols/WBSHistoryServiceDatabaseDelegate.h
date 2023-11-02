
@protocol WBSHistoryServiceDatabaseDelegate <NSObject>

@required

- (void)handleEvent:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WBSHistoryServiceEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reportPermanentIDsForItems:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WBSDictionaryInt64 *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reportPermanentIDsForVisits:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: WBSDictionaryInt64 *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reportSevereError:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
