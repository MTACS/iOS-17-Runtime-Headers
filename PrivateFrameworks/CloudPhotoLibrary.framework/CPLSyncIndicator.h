
@interface CPLSyncIndicator : NSObject

+ (void)_doProtected:(id /* block */)arg1;
+ (void)_reallyHideSyncIndicator;
+ (void)_reallyShowSyncIndicator;
+ (void)hideSyncIndicator;
+ (void)setForeground:(bool)arg1;
+ (void)showSyncIndicator;

@end
