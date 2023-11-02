
@protocol PXStoryExportRequest <NSProgressReporting>

@required

- (void)cancel;
- (PXStoryExportConfiguration *)configuration;
- (NSURL *)destinationURL;
- (NSError *)error;
- (id)init;
- (bool)isCancelled;
- (NSProgress *)progress;
- (long long)status;
- (NSString *)uniqueIdentifier;

@end
