
@interface PRUIExternallyHostedPosterEditingServer : NSObject <BSServiceConnectionListenerDelegate, PRUIExternallyHostedPosterEditingClientToServerInterface> {
    BSServiceConnectionListener * _connectionListener;
    NSMutableArray * _connections;
    NSMapTable * _connectionsByEditingRequest;
    <PRUIExternallyHostedPosterEditingServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRUIExternallyHostedPosterEditingServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_addConnection:(id)arg1;
- (void)_queue_associateConnection:(id)arg1 toEditingRequest:(id)arg2;
- (void)_queue_disassociateConnection:(id)arg1 fromEditingRequest:(id)arg2;
- (void)_queue_removeConnection:(id)arg1;
- (void)activate;
- (oneway void)beginEditingWithEntryPointWrapper:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (oneway void)sendRequestDismissalActionWithEntryPointWrapper:(id)arg1;
- (oneway void)sessionWithEditingRequest:(id)arg1 didEndEditingWithResponse:(id)arg2;
- (oneway void)sessionWithEditingRequest:(id)arg1 willEndEditingWithResponse:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
