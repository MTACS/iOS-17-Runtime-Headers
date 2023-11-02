
@interface HKXPCEventObserver : NSObject

+ (void)_registerEventHandler:(id /* block */)arg1 forStream:(const char *)arg2;
+ (void)_subscribeToStream:(const char *)arg1 clientIdentifier:(const char *)arg2;
+ (void)_unsubscribeFromStream:(const char *)arg1 clientIdentifier:(const char *)arg2;
+ (void)setAuthorizationStreamEventHandler:(id /* block */)arg1;
+ (void)subscribeToAuthorizationStreamWithIdentifier:(const char *)arg1;
+ (void)unsubscribeFromAuthorizationStreamWithIdentifier:(const char *)arg1;

@end
