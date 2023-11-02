
@protocol GEOMapDataSubscriptionDownloadManagerDelegate <NSObject>

@required

- (void)downloadManager:(id <GEOMapDataSubscriptionDownloadManager>)arg1 didUpdateState:(GEOMapDataSubscriptionState *)arg2 forIdentifier:(NSString *)arg3;

@end
