
@interface AuthBrokerAgentXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _queue;
    ABRequestHandler * _requestHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
