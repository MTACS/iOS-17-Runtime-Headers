
@interface NEProviderServer : NSObject <NSXPCListenerDelegate> {
    NSMutableArray * _contexts;
    NSMutableArray * _listeners;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NEExtensionProviderContext *firstContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedServer;

- (void).cxx_destruct;
- (id)firstContext;
- (void)generateProviderEndpointInfoInMessage:(id)arg1 extensionPoint:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)removeProviderContext:(id)arg1;
- (void)start;

@end
