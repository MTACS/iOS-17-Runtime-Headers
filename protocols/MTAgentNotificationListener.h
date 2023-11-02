
@protocol MTAgentNotificationListener <NSObject>

@required

- (void)handleNotification:(void *)arg1 ofType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)handlesNotification:(NSString *)arg1 ofType:(long long)arg2;

@optional

- (double)assertionTimeOutForNotification:(NSString *)arg1 ofType:(long long)arg2;
- (NSArray *)liveDarwinNotifications;

@end
