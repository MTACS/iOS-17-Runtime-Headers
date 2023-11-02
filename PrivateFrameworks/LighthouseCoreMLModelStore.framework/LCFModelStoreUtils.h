
@interface LCFModelStoreUtils : NSObject

+ (void)SwitchToMobile;
+ (id)getBaseLocalPath;
+ (bool)isEnabledOnMacOS;
+ (bool)isPlatformMacOS;
+ (bool)isPlatformWatchOS;
+ (bool)isPlatformiOS;
+ (bool)isPlatformtvOS;
+ (bool)isSupportedPlatform;
+ (id)sha256For:(id)arg1;
+ (id)sha256ForURL:(id)arg1;

@end
