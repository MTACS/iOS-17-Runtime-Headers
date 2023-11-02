
@protocol GEOMapDataSubscriptionDataDownloader <NSObject, NSProgressReporting>

@required

+ (NSString *)loggingDescription;

- (void)cancel;
- (<GEOMapDataSubscriptionDataDownloaderDelegate> *)delegate;
- (void)pause;
- (void)resume;
- (GEOMapDataSubscription *)subscription;

@end
