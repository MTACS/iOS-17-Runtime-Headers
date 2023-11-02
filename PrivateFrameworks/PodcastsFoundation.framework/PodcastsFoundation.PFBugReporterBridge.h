
@interface PodcastsFoundation.PFBugReporterBridge : NSObject

+ (void)reportKeyIntegrityError;
+ (void)reportMissingFairPlayOfflineKey;

- (id)init;

@end
