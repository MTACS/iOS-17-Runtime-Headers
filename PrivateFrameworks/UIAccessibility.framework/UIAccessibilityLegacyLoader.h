
@interface UIAccessibilityLegacyLoader : UIAccessibilityLoader

+ (id)_accessibilityBundlesForBundle:(id)arg1;
+ (void)_accessibilityLoadSubbundles:(id)arg1;
+ (long long)_accessibilityLoadingPriorityForBundle:(id)arg1;
+ (bool)_accessibilityShouldSortBundlesBeforeLoading;
+ (id)_axBundleForBundle:(id)arg1;
+ (void)initialize;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(id /* block */)arg2 loadSubbundles:(bool)arg3;
+ (void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(id /* block */)arg2 forceLoad:(bool)arg3 loadSubbundles:(bool)arg4 loadAllAccessibilityInfo:(bool)arg5;
+ (void)loadExtendedAccessibilityBundles;

@end
