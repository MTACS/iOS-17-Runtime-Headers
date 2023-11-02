
@interface WLKUpNextWidgetCacheManager : NSObject

+ (bool)consumePendingInvalidation;
+ (void)requestInvalidation;
+ (void)requestReload;

@end
