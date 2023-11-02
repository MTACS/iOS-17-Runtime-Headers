
@protocol UIWindowSceneDelegate <UISceneDelegate>

@optional

- (void)setWindow:(UIWindow *)arg1;
- (UIWindow *)window;
- (void)windowScene:(UIWindowScene *)arg1 didUpdateCoordinateSpace:(id <UICoordinateSpace>)arg2 interfaceOrientation:(long long)arg3 traitCollection:(UITraitCollection *)arg4;
- (void)windowScene:(void *)arg1 performActionForShortcutItem:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: UIWindowScene *, UIApplicationShortcutItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)windowScene:(UIWindowScene *)arg1 userDidAcceptCloudKitShareWithMetadata:(CKShareMetadata *)arg2;

@end
