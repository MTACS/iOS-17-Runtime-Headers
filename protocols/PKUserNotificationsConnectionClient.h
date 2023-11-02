
@protocol PKUserNotificationsConnectionClient <NSObject>

@required

- (void)remoteUserNotificationPayloadReceived:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)remoteUserNotificationRegistrationSucceededWithDeviceToken:(NSData *)arg1;

@end
