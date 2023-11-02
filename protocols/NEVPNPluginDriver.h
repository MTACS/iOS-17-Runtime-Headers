
@protocol NEVPNPluginDriver <NEPluginDriver>

@required

- (void)attachIPCWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSXPCListenerEndpoint *, void*
- (void)connectWithParameters:(NSDictionary *)arg1;
- (void)disconnectWithReason:(int)arg1;
- (void)setAppUUIDMap:(NSDictionary *)arg1;

@end
