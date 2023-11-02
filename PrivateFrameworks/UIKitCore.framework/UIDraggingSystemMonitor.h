
@interface UIDraggingSystemMonitor : NSObject <NSXPCListenerDelegate, _DUIClientSystemApp> {
    <UIDraggingSystemMonitorDelegate> * _delegate;
    NSMapTable * _sessionsBySessionInfo;
    NSXPCListener * _systemListener;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDraggingSystemMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *sessions;
@property (readonly) Class superclass;

+ (id)new;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)delegate;
- (oneway void)dragDidBeginWithSystemSession:(id)arg1 info:(id)arg2 reply:(id /* block */)arg3;
- (oneway void)dragDidEndWithSystemSession:(id)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)sessionForDropSession:(id)arg1;
- (id)sessions;
- (void)setDelegate:(id)arg1;
- (void)xpcQueue_acceptNewConnection:(id)arg1;
- (bool)xpcQueue_shouldAcceptNewConnection:(id)arg1;

@end
