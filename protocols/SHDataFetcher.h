
@protocol SHDataFetcher <NSObject>

@required

- (void)clusterDataAtURL:(void *)arg1 forLocation:(void *)arg2 date:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSURL *, CLLocation *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SHDataFetcherFileInfo *, NSError *, void*
- (void)fetchClusterURL:(void *)arg1 forCurrentStorefront:(void *)arg2 cachedUniqueHash:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSURL *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SHDataFetcherFileInfo *, NSError *, void*

@end
