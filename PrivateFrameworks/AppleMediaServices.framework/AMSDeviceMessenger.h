
@interface AMSDeviceMessenger : NSObject <AMSDeviceMessengerClientInterface> {
    AMSDaemonConnection * _connection;
    <AMSDeviceMessengerServiceInterface> * _proxyObject;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _updateHandlers;
}

@property (nonatomic, retain) AMSDaemonConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *updateHandlers;

- (void).cxx_destruct;
- (id)_getProxyObject;
- (id)_identifierFromDialogRequest:(id)arg1;
- (void)_sendDelegateUpdateForMessage:(id)arg1;
- (void)addUpdateHandlerForType:(long long)arg1 filter:(id)arg2 handler:(id /* block */)arg3;
- (id)clearDialog:(id)arg1;
- (id)connection;
- (void)deviceMessengerDidClearMessage:(id)arg1;
- (void)deviceMessengerDidReceiveMessage:(id)arg1;
- (void)deviceMessengerDidReceiveReply:(id)arg1;
- (void)deviceMessengerDidUpdateDevices;
- (id)dialogsWithFilter:(id)arg1;
- (id)init;
- (id)queue;
- (id)sendDialog:(id)arg1 account:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUpdateHandlers:(id)arg1;
- (id)updateHandlers;

@end
