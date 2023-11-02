
@protocol ICLibraryAuthServiceClientTokenProviderProtocol <NSObject>

@required

- (void)addTokenResult:(void *)arg1 forDSID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: ICLibraryAuthServiceClientTokenResult *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getTokenResultForDSID:(void *)arg1 forceRefresh:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSNumber *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ICLibraryAuthServiceClientTokenResult *, NSError *, void*
- (void)getTokenResultsForDSIDs:(void *)arg1 forceRefresh:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSSet *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getTokenStatusForDSIDs:(void *)arg1 forcingRefresh:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSSet *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
