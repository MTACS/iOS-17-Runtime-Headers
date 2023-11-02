
@interface CHSWidgetEventServiceListener : NSObject <BSServiceConnectionListenerDelegate, CHSWidgetEventServiceServerInterface> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    BSServiceConnectionListener * _connectionListener;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSMutableArray * _connections;
    <CHSWidgetEventServiceListenerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CHSWidgetEventServiceListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (bool)_isConnectingProcessAuthorized:(id)arg1 error:(out id*)arg2;
- (void)_removeConnection:(id)arg1;
- (void)activate;
- (id)delegate;
- (id)description;
- (oneway void)handleOpenEventWithURL:(id)arg1;
- (oneway void)handleOpenEventWithUserActivityData:(id)arg1;
- (id)initWithServiceDomain:(id)arg1 delegate:(id)arg2;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
