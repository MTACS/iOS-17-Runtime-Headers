
@interface STKUSSDAlertSession : STKAlertSession <NSXPCListenerDelegate, STKUSSDHostCommunication> {
    NSMutableArray * _connectionQueue;
    long long  _event;
    bool  _hasReceivedContent;
    NSXPCConnection * _ussdConnection;
    NSXPCListener * _ussdListener;
}

@property (nonatomic, readonly) NSMutableArray *connectionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long event;
@property (nonatomic) bool hasReceivedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *ussdConnection;
@property (nonatomic, readonly) NSXPCListener *ussdListener;

- (void).cxx_destruct;
- (id)connectionQueue;
- (long long)event;
- (bool)hasReceivedContent;
- (id)initWithLogger:(id)arg1 responseProvider:(id)arg2 event:(long long)arg3 options:(id)arg4 sound:(id)arg5;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performUSSDUpdate:(id /* block */)arg1;
- (void)setHasReceivedContent:(bool)arg1;
- (id)ussdConnection;
- (id)ussdListener;
- (void)wakeup;

@end
