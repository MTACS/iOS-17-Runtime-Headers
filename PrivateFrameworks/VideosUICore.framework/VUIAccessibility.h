
@interface VUIAccessibility : NSObject

+ (bool)contentSizeCategoryIsAccessibility:(unsigned long long)arg1;
+ (bool)isAXLargeEnabled:(unsigned long long)arg1;
+ (bool)isAXSmallEnabled:(unsigned long long)arg1;
+ (bool)isFeatureEnabled:(long long)arg1;
+ (id)makeAccessibilityIdentifierString:(id)arg1 additionalString:(id)arg2;
+ (id)sharedInstance;

- (void)_addObserverToAccessibilityNotifications;
- (void)_didChangeAccessibilityReduceMotionStatus;
- (void)_didChangeAccessibilityVoiceOverStatus;
- (void)dealloc;
- (id)init;

@end
