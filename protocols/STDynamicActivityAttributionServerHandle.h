
@protocol STDynamicActivityAttributionServerHandle <NSObject>

@required

- (void)setAttributionLocalizableKey:(NSString *)arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 forClient:(id <STDynamicActivityAttributionClientHandle>)arg3;
- (void)setAttributionStringWithFormat:(NSString *)arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 forClient:(id <STDynamicActivityAttributionClientHandle>)arg3;
- (void)setAttributionWebsiteString:(NSString *)arg1 maskingClientAuditToken:(struct { unsigned int x1[8]; })arg2 forClient:(id <STDynamicActivityAttributionClientHandle>)arg3;
- (void)setLocalizableAttributionKey:(NSString *)arg1 andApplication:(NSString *)arg2 forClient:(id <STDynamicActivityAttributionClientHandle>)arg3;
- (void)subscribeToUpdates:(id <STDynamicActivityAttributionClientHandle>)arg1;
- (void)unsubscribeFromUpdates:(id <STDynamicActivityAttributionClientHandle>)arg1;

@end
