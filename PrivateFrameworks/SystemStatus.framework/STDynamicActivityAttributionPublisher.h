
@interface STDynamicActivityAttributionPublisher : NSObject {
    NSString * _cachedAppBundleID;
    NSString * _cachedLocalizedPlistKey;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSXPCConnection * _serverXPCConnection;
}

+ (void)setCurrentAttributionKey:(id)arg1 andApp:(id)arg2;
+ (void)setCurrentAttributionLocalizableKey:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;
+ (void)setCurrentAttributionStringWithFormat:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;
+ (void)setCurrentAttributionWebsiteString:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;

- (void).cxx_destruct;
- (id)init;

@end
