
@interface SRHDataCollectionController : NSObject

+ (void)initialize;
+ (void)isMediaEventsCollectionEnabledFor:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)isMediaEventsStreamAuthorizedWithCompletionHandler:(id /* block */)arg1;
+ (bool)isMessagingApp:(id)arg1;
+ (bool)isSocialMediaApp;

@end
