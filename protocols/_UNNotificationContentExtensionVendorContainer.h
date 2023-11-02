
@protocol _UNNotificationContentExtensionVendorContainer <NSObject>

@optional

- (bool)canBecomeFirstResponder;
- (void)preserveInputViews;
- (void)restoreInputViews;

@end
