
@protocol WBSWebExtensionToolbarItemImplementation <NSObject>

@required

- (void)didSetBadgeText:(NSString *)arg1 forTabWithIdentifier:(NSNumber *)arg2;
- (void)didSetEnabledState:(bool)arg1 forTabWithIdentifier:(NSNumber *)arg2;
- (void)didSetIcon:(UIImage *)arg1 forTabWithIdentifier:(NSNumber *)arg2;
- (void)popupDidNavigateRequestingNewWindowToURL:(NSURL *)arg1;

@optional

- (void)didSetTitle:(NSString *)arg1 forTabWithIdentifier:(NSNumber *)arg2;

@end
