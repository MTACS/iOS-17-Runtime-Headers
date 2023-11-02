
@interface DNDXPCEventObserver : NSObject

+ (void)_registerEventHandler:(id /* block */)arg1 forStream:(const char *)arg2;
+ (void)_subscribeToStream:(const char *)arg1 clientIdentifier:(const char *)arg2;
+ (void)_unsubscribeFromStream:(const char *)arg1 clientIdentifier:(const char *)arg2;
+ (void)setFocusConfigurationStreamEventHandler:(id /* block */)arg1;
+ (void)subscribeToFocusConfigurationStreamWithIdentifier:(const char *)arg1;
+ (void)unsubscribeFromFocusConfigurationStreamWithIdentifier:(const char *)arg1;

@end
