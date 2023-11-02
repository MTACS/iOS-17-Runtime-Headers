
@protocol PKUserNotificationServerRemoteNotificationXPCServer <NSObject>

@required

- (void)getAllowsRemoteNotificationsForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(NSString *)arg1;
- (void)requestTokenForRemoteNotificationsForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
