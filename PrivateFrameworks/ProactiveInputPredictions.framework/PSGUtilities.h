
@interface PSGUtilities : NSObject

+ (id)sharedInstance;

- (id)localizedStringForKey:(id)arg1 withLocale:(id)arg2;
- (id)localizedStringForKey:(id)arg1 withLocale:(id)arg2 onlyIfCached:(bool)arg3 wasCached:(bool*)arg4;
- (id /* block */)prewarmCacheForLocale:(id)arg1 usingQueue:(id)arg2;

@end
