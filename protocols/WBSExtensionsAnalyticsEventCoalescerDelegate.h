
@protocol WBSExtensionsAnalyticsEventCoalescerDelegate <NSObject>

@optional

- (void)extensionAnalyticsEventCoalescer:(WBSExtensionsAnalyticsEventCoalescer *)arg1 didInjectScriptForExtensionWithIdentifier:(NSString *)arg2;
- (void)extensionAnalyticsEventCoalescer:(WBSExtensionsAnalyticsEventCoalescer *)arg1 didInvokeToolbarButtonForExtensionWithIdentifier:(NSString *)arg2;
- (void)extensionAnalyticsEventCoalescerDidResetCachedExtensions:(WBSExtensionsAnalyticsEventCoalescer *)arg1;

@end
