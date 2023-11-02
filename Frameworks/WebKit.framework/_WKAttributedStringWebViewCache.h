
@interface _WKAttributedStringWebViewCache : NSObject

+ (id)cache;
+ (void)cacheWebView:(id)arg1;
+ (void)clearConfiguration;
+ (void)clearConfigurationAndRaiseExceptionIfNecessary:(id)arg1;
+ (id)configuration;
+ (void)maybeConsumeBundlePaths:(id)arg1;
+ (void)purgeAllWebViews;
+ (void)purgeSingleWebView;
+ (void)resetPurgeDelay;
+ (struct RetainPtr<WKWebView> { void *x1; })retrieveOrCreateWebView;
+ (void)validateEntry:(id)arg1;

@end
