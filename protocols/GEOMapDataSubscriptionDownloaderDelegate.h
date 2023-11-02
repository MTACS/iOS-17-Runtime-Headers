
@protocol GEOMapDataSubscriptionDownloaderDelegate <NSObject>

@required

- (void)subscriptionDownloader:(GEOMapDataSubscriptionDownloader *)arg1 didFinishWithError:(NSError *)arg2;

@optional

- (void)subscriptionDownloader:(void *)arg1 willUseOfflineDataVersions:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: GEOMapDataSubscriptionDownloader *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
