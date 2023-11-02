
@interface NCUserNotificationsUIKitDefaults : BSAbstractDefaultDomain

@property (nonatomic) bool shouldForceHapticTouchForPreview;

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end
