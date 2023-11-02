
@interface PodcastsFoundation.FeedUpdaterObjcError : NSObject

+ (id)domainName;
+ (id)feedURLIsEmpty;
+ (id)feedUpdatesDisabled;
+ (id)internetNotReachable;
+ (id)localShowMissing;
+ (id)nonSubscribableShow;
+ (id)notYetUpdatable;
+ (id)preProcessHookDeniedUpdate;

- (id)init;

@end
