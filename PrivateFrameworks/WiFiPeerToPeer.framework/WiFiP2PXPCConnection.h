
@interface WiFiP2PXPCConnection : NSObject {
    NSXPCConnection * _connection;
    <WiFiP2PXPCConnectionDelegate> * _delegate;
    unsigned long long  _endpointType;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queuedRequests;
    id  _remoteObject;
    long long  _retryTimeout;
    NSObject<OS_dispatch_source> * _retryTimer;
}

@property <WiFiP2PXPCConnectionDelegate> *delegate;

+ (id)convertError:(long long)arg1;
+ (long long)defaultRetryTimeout;
+ (id)directQueryOnEndpointType:(unsigned long long)arg1 error:(id*)arg2 querying:(id /* block */)arg3;
+ (id)directQueryOnEndpointType:(unsigned long long)arg1 exportedObject:(id)arg2 withExportedInterface:(id)arg3 error:(id*)arg4 querying:(id /* block */)arg5;
+ (bool)directRequestOnEndpointType:(unsigned long long)arg1 error:(id*)arg2 requesting:(id /* block */)arg3;
+ (id)endpointForEndpointType:(unsigned long long)arg1;
+ (id)frameworkBundle;
+ (id)localization;
+ (bool)supportsWiFiP2P;
+ (id)weakExportedObjectProxy:(id)arg1;
+ (const char *)wifiPeerToPeerAvailableNotification;
+ (id)wifiPeerToPeerWorkloop;

- (void).cxx_destruct;
- (void)attemptConnection;
- (void)cleanUpRemovingNotifyToken:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (void)handleConnectionInvalidated;
- (void)handleError:(long long)arg1;
- (id)initWithEndpointType:(unsigned long long)arg1 queue:(id)arg2 retryTimeout:(long long)arg3;
- (void)invalidate;
- (void)reconnectOnAvailableNotification;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (void)withRemoteObjectProxy:(id /* block */)arg1;
- (void)withRemoteObjectProxy:(id /* block */)arg1 clientCompletionHandler:(id /* block */)arg2;
- (void)withRemoteObjectProxy:(id /* block */)arg1 clientErrorHandler:(id /* block */)arg2;

@end
