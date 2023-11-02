
@interface PKAccessibility : NSObject <PKAccessibilityExtras>

+ (id)sharedInstance;

- (bool)needsAccessibilityElements;
- (void)postAnnouncement:(id)arg1 withSender:(id)arg2 priority:(long long)arg3;

@end
