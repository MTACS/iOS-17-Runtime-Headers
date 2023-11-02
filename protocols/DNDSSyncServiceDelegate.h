
@protocol DNDSSyncServiceDelegate <NSObject>

@required

- (void)syncService:(id <DNDSSyncService>)arg1 didReceiveMessage:(NSDictionary *)arg2 withVersionNumber:(unsigned long long)arg3 messageType:(NSString *)arg4 fromDeviceIdentifier:(NSString *)arg5;

@optional

- (void)syncService:(id <DNDSSyncService>)arg1 didSendWithRequestIdentifier:(NSString *)arg2 withSuccess:(bool)arg3 error:(NSError *)arg4;
- (bool)syncService:(id <DNDSSyncService>)arg1 shouldAcceptIncomingMessage:(NSDictionary *)arg2 withVersionNumber:(unsigned long long)arg3 messageType:(NSString *)arg4 fromDeviceIdentifier:(NSString *)arg5;

@end
