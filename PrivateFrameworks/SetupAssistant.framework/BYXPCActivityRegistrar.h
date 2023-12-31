
@interface BYXPCActivityRegistrar : NSObject

+ (id)sharedInstance;

- (void)registerActivityWithIdentifier:(const char *)arg1 criteria:(id)arg2 handler:(id /* block */)arg3;
- (void)unregisterActivityWithIdentifier:(const char *)arg1;

@end
