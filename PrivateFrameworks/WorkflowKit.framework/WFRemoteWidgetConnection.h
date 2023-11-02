
@interface WFRemoteWidgetConnection : NSObject {
    NSMutableArray * _completionHandlers;
    bool  _connectedToDevice;
    NSObject<OS_nw_connection> * _connection;
    id /* block */  _connectionTimeoutHandler;
    NSMutableArray * _dataToSend;
    NSString * _deviceIdentifier;
    bool  _invalidated;
    <WFRemoteWidgetConnectionListenerDelegate> * _listenerDelegate;
    NSObject<OS_nw_browser> * _nwBrowser;
    NSObject<OS_nw_listener> * _nwListener;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_xpc_object> * _unrepliedWakeEvent;
}

@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (getter=isConnectedToDevice, nonatomic) bool connectedToDevice;
@property (nonatomic, retain) NSObject<OS_nw_connection> *connection;
@property (nonatomic, copy) id /* block */ connectionTimeoutHandler;
@property (nonatomic, retain) NSMutableArray *dataToSend;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic) bool invalidated;
@property (nonatomic) <WFRemoteWidgetConnectionListenerDelegate> *listenerDelegate;
@property (nonatomic, retain) NSObject<OS_nw_browser> *nwBrowser;
@property (nonatomic, retain) NSObject<OS_nw_listener> *nwListener;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_xpc_object> *unrepliedWakeEvent;

+ (id)_createAdvertiseParameters;
+ (id)_createBrowseParameters;
+ (id)_createFramer;
+ (id)connectionToDevice:(id)arg1;
+ (id)startListeningForIncomingConfigurations;

- (void).cxx_destruct;
- (void)_browserDiscoveredDeviceEndpoint:(id)arg1;
- (void)_handleNewConnection:(id)arg1;
- (void)_receiveRequestOnConnection;
- (void)_receiveResponseOnConnection;
- (void)_replyToWakeEvent:(id)arg1;
- (void)_sendPendingData;
- (void)_setupWakeHandler;
- (void)_tearDownConnection;
- (id)completionHandlers;
- (id)connection;
- (id /* block */)connectionTimeoutHandler;
- (id)dataToSend;
- (void)dealloc;
- (id)deviceIdentifier;
- (id)init;
- (id)initWithDeviceIdentifier:(id)arg1;
- (void)invalidate;
- (bool)invalidated;
- (bool)isConnectedToDevice;
- (id)listenerDelegate;
- (id)nwBrowser;
- (id)nwListener;
- (id)queue;
- (void)sendData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCompletionHandlers:(id)arg1;
- (void)setConnectedToDevice:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setConnectionTimeoutHandler:(id /* block */)arg1;
- (void)setDataToSend:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setListenerDelegate:(id)arg1;
- (void)setNwBrowser:(id)arg1;
- (void)setNwListener:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUnrepliedWakeEvent:(id)arg1;
- (id)unrepliedWakeEvent;

@end
