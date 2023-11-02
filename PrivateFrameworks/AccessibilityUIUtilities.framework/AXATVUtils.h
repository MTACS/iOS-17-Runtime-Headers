
@interface AXATVUtils : NSObject

+ (id)sharedInstance;

- (id)accessibilityIdentifierForResourceURL:(id)arg1;
- (id)accessibilityLabelForID:(id)arg1;
- (id)accessibilityLabelForResourceURL:(id)arg1;
- (id)atvaccessibilityLocalizedNameForBundleID:(id)arg1;
- (id)atvaccessibilityLocalizedString:(id)arg1;
- (id)currentFocusedView;
- (bool)isProcessTVAppStore;
- (bool)isTVMLKitLoaded;

@end
