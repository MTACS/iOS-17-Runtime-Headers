
@protocol GEOMapDataSubscriptionDataDownloaderDelegate <NSObject>

@required

- (void)downloader:(id <GEOMapDataSubscriptionDataDownloader>)arg1 didFinishWithError:(NSError *)arg2;

@end
