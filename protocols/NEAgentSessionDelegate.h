
@protocol NEAgentSessionDelegate <NSObject>

@required

- (NSXPCInterface *)driverInterface;
- (void)handleAppsUninstalled:(NSArray *)arg1;
- (void)handleAppsUpdateBegins:(NSArray *)arg1;
- (void)handleAppsUpdateEnding:(NSArray *)arg1;
- (void)handleAppsUpdateEnds:(NSArray *)arg1;
- (void)handleCancel;
- (void)handleDisposeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)handleInitWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (id)initWithPluginType:(NSString *)arg1 pluginClass:(long long)arg2 pluginInfo:(NSDictionary *)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4 factory:(id <NEPluginManagerObjectFactory>)arg5;
- (NSXPCInterface *)managerInterface;
- (NSArray *)uuids;

@optional

- (id)initWithPluginType:(NSString *)arg1 pluginClass:(long long)arg2 pluginEndpoint:(NSXPCListenerEndpoint *)arg3 pluginProcessIdentity:(NEProcessIdentity *)arg4 queue:(NSObject<OS_dispatch_queue> *)arg5 factory:(id <NEPluginManagerObjectFactory>)arg6;

@end
