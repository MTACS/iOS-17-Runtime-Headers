
@protocol PLSyndicationResourcePrefetchManagerDelegate <NSObject>

@required

- (void)batchRequestResourcesForPrefetchManager:(void *)arg1 itemIdentifiersWithBundleIDs:(void *)arg2 destURLs:(void *)arg3 options:(void *)arg4 resultHandler:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 20: PLSyndicationResourcePrefetchManager *, NSDictionary *, NSDictionary *, PLResourceLocalAvailabilityRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSURL *, NSURL *, NSString *, NSError *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (NSDate *)downloadThrottlingDateForPrefetchManager:(PLSyndicationResourcePrefetchManager *)arg1;
- (bool)isNetworkAccessAllowed;
- (NSString *)name;
- (void)performTransactionForPrefetchManager:(void *)arg1 synchronous:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 8: PLSyndicationResourcePrefetchManager *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSManagedObjectContext *, void*
- (void)prefetchManager:(PLSyndicationResourcePrefetchManager *)arg1 receivedNewDownloadThrottlingDate:(NSDate *)arg2 managedObjectContext:(NSManagedObjectContext *)arg3;
- (NSProgress *)requestLocalAvailabilityChangeForPrefetchManager:(void *)arg1 resource:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: PLSyndicationResourcePrefetchManager *, PLInternalResource *, PLResourceLocalAvailabilityRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, long long, NSURL *, void*

@end
