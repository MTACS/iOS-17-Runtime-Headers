
@protocol WBSHistoryConnectionProtocol

@required

- (void)beginHistoryAccessSession:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WBSHistoryAccessSessionProtocol> *, NSError *, void*
- (void)beginURLCompletionSession:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WBSURLCompletionSessionProtocol> *, NSError *, void*
- (void)connectWithOptions:(void *)arg1 delegate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: NSDictionary *, <WBSHistoryServiceDatabaseDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WBSHistoryServiceDatabaseProtocol> *, long long, long long, NSError *, void*
- (void)ensureConnected:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getCompletionListItemsForQuery:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getServiceInfo:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)initializeCloudHistoryWithConfiguration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WBSCloudHistoryServiceProtocol> *, NSError *, void*
- (void)listDatabaseURLsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)queryMemoryFootprint:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSMemoryFootprint *, NSError *, void*
- (void)releaseCloudHistory:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setCompletionListVendorEndpoint:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
