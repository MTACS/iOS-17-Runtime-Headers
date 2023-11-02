
@interface IRXPCServicesManager : NSObject <NSXPCListenerDelegate> {
    NSMutableArray * _listeners;
    NSMutableDictionary * _machServices;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createServices;
- (void)_setupXPCListeners;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startServices;

@end
