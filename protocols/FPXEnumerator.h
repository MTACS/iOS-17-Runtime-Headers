
@protocol FPXEnumerator <NSObject>

@required

- (void)currentSyncAnchorWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)enumerateChangesFromToken:(void *)arg1 suggestedBatchSize:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 13: NSData *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, bool, NSData *, FPExtensionResponse *, NSError *, void*
- (void)enumerateItemsFromPage:(void *)arg1 suggestedPageSize:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 12: NSData *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSData *, NSData *, FPExtensionResponse *, NSError *, void*
- (void)enumerateItemsFromPage:(void *)arg1 suggestedPageSize:(void *)arg2 upTo:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSData *, long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)invalidate;
- (void)keepAliveConnectionForRegisteredObserver:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (void)enumeratorBecameFrontmost:(void *)arg1 inWindow:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: bool, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
