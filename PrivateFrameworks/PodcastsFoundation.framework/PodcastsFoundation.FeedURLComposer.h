
@interface PodcastsFoundation.FeedURLComposer : NSObject

+ (long long)errorCannotGenerateInternalURL;
+ (long long)errorURLDoesNotExist;
+ (long long)errorURLInvalid;

- (id)feedURLForOptionalURL:(id)arg1 adamID:(long long)arg2 error:(id*)arg3;
- (id)init;

@end
