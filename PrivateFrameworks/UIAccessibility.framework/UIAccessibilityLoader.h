
@interface UIAccessibilityLoader : NSObject

+ (id)_accessibilityBundlesForBundle:(id)arg1;
+ (void)_accessibilityInitializeRuntimeOverrides;
+ (void)_accessibilityInitializeSubclassRuntimeOverrides;
+ (void)_accessibilityReenabled;
+ (bool)_accessibilityServerStarted;
+ (void)_accessibilityStartMiniServer;
+ (void)_accessibilityStartServer;
+ (void)_accessibilityStopServer;
+ (bool)_accessibilityStringLocalizationCategoriesLoaded;
+ (bool)_accessibilityUIKitBundleLoaded;
+ (void)_didLoadPreboardAccessibilityBundle;
+ (void)_didLoadSystemAppAccessibilityBundle;
+ (void)_performInitialAccessibilityBundleLoad:(bool)arg1 monitorForFutureLoadEvents:(bool)arg2 trackingMode:(long long)arg3;
+ (void)_stringLocalizationStarted:(id)arg1;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(id /* block */)arg2;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(id /* block */)arg2 force:(bool)arg3 loadAllAccessibilityInfo:(bool)arg4;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(id /* block */)arg2 loadSubbundles:(bool)arg3;
+ (void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(id /* block */)arg2;
+ (void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(id /* block */)arg2 force:(bool)arg3 loadAllAccessibilityInfo:(bool)arg4;
+ (void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(id /* block */)arg2 forceLoad:(bool)arg3 loadSubbundles:(bool)arg4 loadAllAccessibilityInfo:(bool)arg5;
+ (void)loadActualAccessibilityBundle:(id)arg1 didLoadCallback:(id /* block */)arg2 loadSubbundles:(bool)arg3;

@end
