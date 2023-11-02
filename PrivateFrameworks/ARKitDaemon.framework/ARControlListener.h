
@interface ARControlListener : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _concurrentConnectionTargetQueue;
    <ARControlListenerDelegate> * _delegate;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _listenerQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARControlListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)endpoint;
- (id)initWithDelegate:(id)arg1 anonymousListenerEnabled:(bool)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
