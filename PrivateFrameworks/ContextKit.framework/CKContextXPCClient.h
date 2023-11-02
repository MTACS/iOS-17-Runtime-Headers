
@interface CKContextXPCClient : NSObject

+ (void)initialize;
+ (id)invalidateAndGetNewXpcConnection;
+ (void)invalidateXpcConnection;
+ (id)isXPCConnectionError:(id)arg1;
+ (id)newXpcConnection;
+ (void)registerForServiceUpdateNotifications:(id)arg1;
+ (id)xpcConnection;

@end
