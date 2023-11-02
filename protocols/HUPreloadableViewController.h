
@protocol HUPreloadableViewController <NSObject>

@required

- (NAFuture *)hu_preloadContent;

@optional

- (bool)needsToWaitForPreload;

@end
