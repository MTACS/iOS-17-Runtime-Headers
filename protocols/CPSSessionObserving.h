
@protocol CPSSessionObserving <NSObject>

@optional

- (void)didDetermineAvailability:(bool)arg1 options:(NSDictionary *)arg2;
- (void)didFinishLoadingWithError:(NSError *)arg1;
- (void)didFinishTestingAtTime:(double)arg1;
- (void)didInstallApplicationPlaceholder;
- (void)didRetrieveApplicationIcon:(NSURL *)arg1;
- (void)didRetrieveBusinessIcon:(NSURL *)arg1;
- (void)didRetrieveHeroImage:(NSURL *)arg1;
- (void)didUpdateInstallProgress:(NSNumber *)arg1;
- (void)didUpdateMetadata:(CPSClipMetadata *)arg1;

@end
