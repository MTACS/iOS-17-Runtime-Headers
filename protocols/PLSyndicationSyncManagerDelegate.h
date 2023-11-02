
@protocol PLSyndicationSyncManagerDelegate <NSObject>

@required

- (void)executeQueryForSyncManager:(void *)arg1 type:(void *)arg2 startDate:(void *)arg3 endDate:(void *)arg4 batchHandler:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 17: PLSyndicationSyncManager *, long long, NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, bool*, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)executeQueryForSyncManager:(void *)arg1 type:(void *)arg2 startDate:(void *)arg3 endDate:(void *)arg4 itemHandler:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 17: PLSyndicationSyncManager *, long long, NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CSSearchableItem *, bool*, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (bool)syncManager:(PLSyndicationSyncManager *)arg1 shouldContinueWithLibrary:(PLPhotoLibrary *)arg2;

@end
