
@interface CPLNetworkIndicator : NSObject

+ (void)_doProtected:(id /* block */)arg1;
+ (void)_reallyHideNetworkIndicatorForBundleWithIdentifierLocked:(id)arg1;
+ (void)_reallyShowNetworkIndicatorForBundleWithIdentifierLocked:(id)arg1;
+ (void)hideNetworkIndicatorForBundleWithIdentifier:(id)arg1;
+ (void)showNetworkIndicatorForBundleWithIdentifier:(id)arg1;

@end
