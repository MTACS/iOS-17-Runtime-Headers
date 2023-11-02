
@protocol SMUserNotificationProtocol <NSObject>

@required

- (void)respondToNotificationWithIdentifier:(void *)arg1 sessionIdentifier:(void *)arg2 actionIdentifier:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (long long)prepareUserInfoForNotificationContent:(UNMutableNotificationContent *)arg1 initiatorHandle:(NSString *)arg2 messageUrl:(NSURL *)arg3;
- (bool)shouldDropMessage:(NSURL *)arg1 from:(NSString *)arg2 fromMe:(bool)arg3;

@end
