
@interface _MLNetworking : NSObject {
    NSObject<OS_nw_connection> * _connection;
    bool  _isClient;
    NSObject<OS_nw_listener> * _listener;
    NSObject<OS_os_log> * _logType;
    _MLNetworkOptions * _nwOptions;
    NSObject<OS_nw_parameters> * _parameters;
    NSObject<OS_nw_protocol_stack> * _protocol_stack;
    NSObject<OS_dispatch_queue> * _q;
}

@property (nonatomic, retain) NSObject<OS_nw_connection> *connection;
@property (nonatomic, readonly) bool isClient;
@property (nonatomic, readonly) NSObject<OS_nw_listener> *listener;
@property (nonatomic, readonly) NSObject<OS_os_log> *logType;
@property (nonatomic, readonly) _MLNetworkOptions *nwOptions;
@property (nonatomic, readonly) NSObject<OS_nw_parameters> *parameters;
@property (nonatomic, readonly) NSObject<OS_nw_protocol_stack> *protocol_stack;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *q;

- (void).cxx_destruct;
- (id)connection;
- (id)initConnection:(id)arg1;
- (id)initListener:(id)arg1;
- (bool)isClient;
- (id)listener;
- (id)logType;
- (id)nwOptions;
- (id)parameters;
- (id)protocol_stack;
- (id)q;
- (void)receiveLoop:(id /* block */)arg1;
- (void)restartConnection;
- (void)sendData:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setListenerReceiveDataCallBack:(id /* block */)arg1;
- (void)setReceiveDataCallBack:(id /* block */)arg1;
- (void)startConnection;
- (void)stop;

@end
